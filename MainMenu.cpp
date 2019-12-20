#include "MainMenu.h"
#include "ui_MainMenu.h"

MainMenu::MainMenu(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainMenu) {
  ui->setupUi(this);
  m_centralWidget = centralWidget();
  m_menuLayout = new QVBoxLayout(m_centralWidget);
  m_newGamebutton = new QPushButton("New Game", this);
  m_loadButton = new QPushButton("Load", this);
  m_exitButton = new QPushButton("Exit", this);
  m_menuLayout->addWidget(m_newGamebutton);
  m_menuLayout->addWidget(m_loadButton);
  m_menuLayout->addWidget(m_exitButton);
  m_centralWidget->setLayout(m_menuLayout);
}

MainMenu::~MainMenu() {
  delete ui;
  delete m_newGamebutton;
  delete m_loadButton;
  delete m_exitButton;
  delete m_menuLayout;
}
