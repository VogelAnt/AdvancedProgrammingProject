#ifndef GAMEMENU_H
#define GAMEMENU_H

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

// Initial commit

class GameMenu : public QMainWindow {
  Q_OBJECT
public:
  explicit GameMenu(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // GAMEMENU_H
