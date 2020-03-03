#include "GameMenu.h"

GameMenu::GameMenu(QWidget *parent) : QMainWindow(parent) {
  bool ok = true;
  QString name = QInputDialog::getText(this, "Waiting for input ...",
                                       "Input your character's name !",
                                       QLineEdit::Normal, nullptr, &ok);
  if (ok) {
    m_player = new Player(100, name, true);
    InitializeGameMenu();
    connect(m_exitButton, &QPushButton::clicked, this, &GameMenu::close);
    connect(m_showStatsbutton, &QPushButton::clicked, this,
            &GameMenu::on_DisplayStatus);
    connect(m_fightButton, &QPushButton::clicked, this, &GameMenu::on_Fight);
  } else {
    qDebug() << "GameMenu closed";
    this->close();
  }
}

// TODO: when pressing cancel, empty menu still shows
void GameMenu::InitializeGameMenu() {
  m_centralWidget = new QWidget(this);
  m_statusWidget = new QWidget(this);
  m_gameMenulayout = new QVBoxLayout(m_centralWidget);
  m_statuslayout = new QHBoxLayout(m_statusWidget);
  m_healthDisplay = new QLCDNumber(m_centralWidget);
  m_healthDisplay->setDecMode();
  m_healthDisplay->display(m_player->getHealth());
  m_healthDisplay->setStyleSheet("color : red");
  m_fightButton = new QPushButton("Fight", m_centralWidget);
  m_showStatsbutton = new QPushButton("Show Stats", m_centralWidget);
  m_saveButton = new QPushButton("Save Game", m_centralWidget);
  m_backTomenubutton = new QPushButton("Back to Main Menu", m_centralWidget);
  m_exitButton = new QPushButton("Exit Game", m_centralWidget);
  m_playerLabel = new QLabel(m_player->getName(), m_statusWidget);
  m_statuslayout->addWidget(m_playerLabel);
  m_statuslayout->addWidget(m_healthDisplay);
  m_gameMenulayout->addWidget(m_statusWidget);
  m_gameMenulayout->addWidget(m_fightButton);
  m_gameMenulayout->addWidget(m_showStatsbutton);
  m_gameMenulayout->addWidget(m_saveButton);
  m_gameMenulayout->addWidget(m_backTomenubutton);
  m_gameMenulayout->addWidget(m_exitButton);
  m_statusWidget->setHidden(m_statusDisplay);
  setCentralWidget(m_centralWidget);
}

void GameMenu::on_BackToMainMenu() { this->hide(); }

void GameMenu::on_DisplayStatus() {
  m_statusDisplay = !m_statusDisplay;
  m_statusWidget->setHidden(m_statusDisplay);
  if (m_statusDisplay) {
    m_showStatsbutton->setText("Show Stats");
  } else {
    m_showStatsbutton->setText("Hide Stats");
  }
}

void GameMenu::on_Fight() { m_player->addDays(); }

GameMenu::~GameMenu() {
  qDebug() << "GameMenu succesfully destroyed";
  delete m_centralWidget;
}
