#include "GameMenu.h"

GameMenu::GameMenu(QWidget *parent) : QMainWindow(parent) {
  QString name = QInputDialog::getText(this, "Waiting for input ...",
                                       "Input your character's name !");
  // TODO: depending on which button is pressed don't go to the next menu
  m_player = new Player(100, name, true);
  InitializeGameMenu();
}

void GameMenu::InitializeGameMenu() {}
