#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include <QString>

class Player {
public:
  Player(int health, QString name, bool alive);

  void addDays() { m_days += 1; }
  void setHealth(int HP) { m_health = HP; }
  void setAlive(bool playerAlive) { m_playerAlive = playerAlive; }
  int getHealth() { return m_health; }
  QString getName() { return m_playerName; }
  bool getAlive() { return m_playerAlive; }

private:
  int m_health;
  QString m_playerName;
  bool m_playerAlive;
  int m_days = 0;
};

#endif // PLAYER_H
