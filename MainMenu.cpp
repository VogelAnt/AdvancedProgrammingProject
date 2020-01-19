#include "MainMenu.h"
#include "ui_MainMenu.h"

MainMenu::MainMenu(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainMenu) {
  ui->setupUi(this);
  Initialize();
  connect(m_newGamebutton, &QPushButton::clicked, this,
          &MainMenu::on_newButtonClicked);
  connect(m_loadButton, &QPushButton::clicked, this,
          &MainMenu::on_loadButtonclicked);
  connect(m_exitButton, &QPushButton::clicked, this,
          &MainMenu::on_exitButtonclicked);
}

void MainMenu::Initialize() {
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

void MainMenu::on_newButtonClicked() {}

void MainMenu::on_loadButtonclicked() {}

void MainMenu::on_exitButtonclicked() {}

MainMenu::~MainMenu() {
  delete ui;
  delete m_newGamebutton;
  delete m_loadButton;
  delete m_exitButton;
  delete m_menuLayout;
}
