#ifndef MAINMENU_H
#define MAINMENU_H
#include "GameMenu.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainMenu;
}
QT_END_NAMESPACE

class MainMenu : public QMainWindow {
  Q_OBJECT

public:
  MainMenu(QWidget *parent = nullptr);
  ~MainMenu();

  void InitializeMainMenu();

public slots:
  void on_newButtonClicked();
  void on_loadButtonclicked();
  void on_exitButtonclicked();

private:
  Ui::MainMenu *ui;
  QWidget *m_centralWidget = nullptr;
  QVBoxLayout *m_menuLayout = nullptr;
  QPushButton *m_newGamebutton = nullptr;
  QPushButton *m_loadButton = nullptr;
  QPushButton *m_exitButton = nullptr;
  GameMenu *m_gameMenu = nullptr;
};
#endif // MAINMENU_H
