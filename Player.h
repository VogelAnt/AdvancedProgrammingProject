#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include <QString>

class Player {
public:
  Player();
  Player(int health, QString name, bool alive);

private:
  int m_health;
  QString m_playerName;
  bool m_playerAlive;
};

#endif // PLAYER_H
