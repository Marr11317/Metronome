#include "metronome.h"
#include <QAudioFormat>
#include <QAudio> 

Metronome::Metronome(QObject *parent)
    : QTimer(parent),
      m_timeSigNum (4),
      m_timeSigDenom (4),
      m_beatNumber (0),
      m_tempo (120),
      m_volumeAsSlider (0.5),
      m_playStopButtonIsPressed (false),
      m_fileClaves (new QFile("Sounds/Claves.wav")),
      m_fileWoodBlocksHigh (new QFile("Sounds/Wood_Blocks_High.wav")),
      m_fileWoodBlocksLow (new QFile("Sounds/Wood_Blocks_Low.wav")),
      m_timer (new QTimer())
{
    m_fileClaves->open(QIODevice::ReadOnly);
    if (!m_fileClaves->exists()){
        qWarning("The location: Sounds/Claves.wav does not exist.");
    }
    
    m_fileWoodBlocksHigh->open(QIODevice::ReadOnly);
    if (!m_fileWoodBlocksHigh->exists()){
        qWarning("The location: Sounds/Wood_Blocks_High.wav does not exist.");
    }
    
    m_fileWoodBlocksLow->open(QIODevice::ReadOnly);
    if (!m_fileWoodBlocksLow->exists()){
        qWarning("The location: Sounds/Wood_Blocks_Low.wav does not exist.");
    }
    
    m_actualVolume = QAudio::convertVolume(m_volumeAsSlider,
                                                QAudio::LogarithmicVolumeScale,
                                                QAudio::LinearVolumeScale);
    
    QAudioFormat format;
    // Set up the format
    format.setSampleRate(8000);
    format.setChannelCount(2);
    format.setSampleSize(8);
    format.setCodec("audio/pcm");
    format.setByteOrder(QAudioFormat::LittleEndian);
    format.setSampleType(QAudioFormat::UnSignedInt);
    
    QAudioDeviceInfo info(QAudioDeviceInfo::defaultOutputDevice());
    if (!info.isFormatSupported(format)) {
        qWarning("Raw audio format not supported by backend, cannot play audio.");
        return;
    }
    
    m_metronome = new QAudioOutput(format, this);
    //m_metronome->setVolume(0.5);
    
    m_timer->setTimerType(Qt::PreciseTimer);
    m_timer->setInterval(1.0 * 60 / m_tempo * 1000);
    
    connect(m_timer, SIGNAL(timeout()), this, SLOT(playBeat()));
}

Metronome::~Metronome()
{
    
}

void Metronome::play ()
{
    int interval = 1.0 * 60 / m_tempo * 1000;
    playBeat();
    m_timer->start(interval);
}

void Metronome::stop()
{
    m_metronome->stop();
    m_timer->stop();
    m_beatNumber = 0;
}

quint8 Metronome::timeSigNum()
{
    return m_timeSigNum;
}

quint8 Metronome::timeSigDenom()
{
    return m_timeSigDenom;
}

quint16 Metronome::tempo()
{
    return m_tempo;
}

void Metronome::setTimeSigNum(quint8 Num)
{
    m_timeSigNum = Num;
}

void Metronome::setTimeSigDenom(quint8 Denom)
{
    m_timeSigDenom = Denom;
}

void Metronome::setTempo(quint16 tempo)
{
    if (tempo > 300){
        m_tempo = 300;
    }
    else if (tempo < 20) {
        m_tempo = 20;
    }
    else {
        m_tempo = tempo;
    }
}

qreal Metronome::volumeAsSlider()
{
    return m_volumeAsSlider;
}

void Metronome::playBeat()
{
    // checks if audio already playing
    if (m_metronome->state() == QAudio::ActiveState)
        m_metronome->stop();
    
    // plays a high beat if begginning of measure
    if (m_beatNumber != 0){
        m_metronome->start(m_fileWoodBlocksLow);
    }
    else{
        m_metronome->start(m_fileClaves);
    }
    m_beatNumber ++;
    m_beatNumber %= m_timeSigDenom;
}

quint8 Metronome::beatNumber()
{
    return m_beatNumber;
}

void Metronome::setVolume(qreal volume)
{
    m_actualVolume = QAudio::convertVolume(volume,
                                           QAudio::LogarithmicVolumeScale,
                                           QAudio::LinearVolumeScale);
}

void Metronome::playStopButtonPressed()
{
    if (m_playStopButtonIsPressed){
        stop();
    }
    else {
        play();
    }
    m_playStopButtonIsPressed = m_playStopButtonIsPressed * -1 + 1;
}
