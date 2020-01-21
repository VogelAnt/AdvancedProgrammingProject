#include "GameMenu.h"

GameMenu::GameMenu(QWidget *parent) : QMainWindow(parent) {
  QString name = QInputDialog::getText(this, "Waiting for input ...",
                                       "Input your character's name !");
  // TODO: depending on which button is pressed don't go to the next menu
  m_player = new Player(100, name, true);
  InitializeGameMenu();
}

void GameMenu::InitializeGameMenu() {
  m_healthDisplay = new QLCDNumber(m_player->getHealth(), this);
  m_fightButton = new QPushButton("Fight", this);
  m_showStatsbutton = new QPushButton("Show Stats", this);
  m_saveButton = new QPushButton("Save Game", this);
  m_exitButton = new QPushButton("Exit Game", this);
}
