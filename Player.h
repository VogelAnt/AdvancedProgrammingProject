#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include <QString>

class Player {
public:
  Player();
  Player(int health, QString name);

private:
  int m_health;
  QString m_playerName;
};

#endif // PLAYER_H
