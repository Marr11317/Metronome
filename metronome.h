#ifndef METRONOME_H
#define METRONOME_H

#include <QObject>
#include <QAudioOutput>
#include <QFile> 
#include <QTimer> 

class Metronome : public QTimer
 {
    Q_OBJECT
    
    Q_PROPERTY(quint8 timeSigNum READ timeSigNum WRITE setTimeSigNum NOTIFY timeSigNumChanged)
    Q_PROPERTY(quint8 timeSigDenom READ timeSigDenom WRITE setTimeSigDenom NOTIFY timeSigDenomChanged)
    Q_PROPERTY(quint16 tempo READ tempo WRITE setTempo NOTIFY tempoChanged)
    Q_PROPERTY(quint8 beatNumber READ beatNumber NOTIFY beatNumberChanged)
    Q_PROPERTY(qreal volumeAsSlider READ volumeAsSlider NOTIFY volumeAsSliderChanged)
    
    
public:
    Metronome(QObject *parent = nullptr);
    ~Metronome();
    
    quint16 tempo();
    quint8 timeSigNum();
    quint8 timeSigDenom();
    quint8 beatNumber();
    qreal volumeAsSlider();
    
    Q_INVOKABLE void setTempo(quint16);
    Q_INVOKABLE void setTimeSigNum(quint8);
    Q_INVOKABLE void setTimeSigDenom(quint8);
    Q_INVOKABLE void setVolume(qreal);
    
    Q_INVOKABLE void playStopButtonPressed();
    
signals:
    void timeSigNumChanged(quint8);
    void timeSigDenomChanged(quint8);
    void tempoChanged(quint16);
    void beatNumberChanged(quint8);
    void volumeAsSliderChanged(qreal);
    
private slots:
    void playBeat();
    
private:
    quint8 m_timeSigNum;
    quint8 m_timeSigDenom;
    
    quint8 m_beatNumber;
    
    quint16 m_tempo;
    qreal m_volumeAsSlider;
    qreal m_actualVolume;
    
    qint8 m_playStopButtonIsPressed;
    
    QFile *m_fileClaves;
    QFile *m_fileWoodBlocksHigh;
    QFile *m_fileWoodBlocksLow;
    
    QAudioOutput *m_metronome;
    
    QTimer *m_timer;
    
    void stop();
    void play();
};

#endif // METRONOME_H
