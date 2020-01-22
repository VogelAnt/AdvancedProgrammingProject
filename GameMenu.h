#ifndef GAMEMENU_H
#define GAMEMENU_H

#include "Player.h"
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
signals:

public slots:

private:
  Player *m_player = nullptr;
  QLCDNumber *m_healthDisplay = nullptr;
  QPushButton *m_fightButton = nullptr;
  QPushButton *m_showStatsbutton = nullptr;
  QPushButton *m_saveButton = nullptr;
  QPushButton *m_exitButton = nullptr;
};

#endif // GAMEMENU_H
