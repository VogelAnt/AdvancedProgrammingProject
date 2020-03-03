#ifndef PLAYERSTATS_H
#define PLAYERSTATS_H

#include <QObject>

class PlayerStats : public QObject
{
    Q_OBJECT
public:
    explicit PlayerStats(QObject *parent = nullptr);

signals:

};

#endif // PLAYERSTATS_H
