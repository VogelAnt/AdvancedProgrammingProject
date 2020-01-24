#include "GameMenu.h"

GameMenu::GameMenu(QWidget *parent) : QMainWindow(parent) {
  QString name = QInputDialog::getText(this, "Waiting for input ...",
                                       "Input your character's name !");
  // TODO: depending on which button is pressed don't go to the next menu
  m_player = new Player(100, name, true);
  InitializeGameMenu();
}

void GameMenu::InitializeGameMenu() {
  m_centralWidget = new QWidget(this);
  m_gameMenulayout = new QVBoxLayout(m_centralWidget);
  m_healthDisplay = new QLCDNumber(m_centralWidget);
  m_healthDisplay->setDecMode();
  m_healthDisplay->display(m_player->getHealth());
  m_healthDisplay->setStyleSheet("color : red");
  m_fightButton = new QPushButton("Fight", m_centralWidget);
  m_showStatsbutton = new QPushButton("Show Stats", m_centralWidget);
  m_saveButton = new QPushButton("Save Game", m_centralWidget);
  m_exitButton = new QPushButton("Exit Game", m_centralWidget);
  m_gameMenulayout->addWidget(m_healthDisplay);
  m_gameMenulayout->addWidget(m_fightButton);
  m_gameMenulayout->addWidget(m_showStatsbutton);
  m_gameMenulayout->addWidget(m_saveButton);
  m_gameMenulayout->addWidget(m_exitButton);
  setCentralWidget(m_centralWidget);
}

GameMenu::~GameMenu() { delete m_centralWidget; }
