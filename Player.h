#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include <QString>

class Player {
public:
  Player(int health, QString name, bool alive);

  int getHealth() { return m_health; }
  QString getName() { return m_playerName; }
  bool getAlive() { return m_playerAlive; }

private:
  int m_health;
  QString m_playerName;
  bool m_playerAlive;
};

#endif // PLAYER_H
