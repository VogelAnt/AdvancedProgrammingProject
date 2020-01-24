#ifndef GAMEMENU_H
#define GAMEMENU_H

#include "Player.h"
#include <QDebug>
#include <QFileDialog>
#include <QInputDialog>
#include <QLCDNumber>
#include <QLabel>
#include <QMainWindow>
#include <QObject>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>

#include <fstream>
#include <iostream>
#include <ostream>

// sdkufhdkfdkjfejh
class GameMenu : public QMainWindow {
  Q_OBJECT
public:
  explicit GameMenu(QWidget *parent = nullptr);
  void InitializeGameMenu();
  ~GameMenu();
signals:

public slots:

private:
  Player *m_player = nullptr;
  QWidget *m_centralWidget = nullptr;
  QLCDNumber *m_healthDisplay = nullptr;
  QPushButton *m_fightButton = nullptr;
  QPushButton *m_showStatsbutton = nullptr;
  QPushButton *m_saveButton = nullptr;
  QPushButton *m_exitButton = nullptr;
  QVBoxLayout *m_gameMenulayout = nullptr;
};

#endif // GAMEMENU_H
