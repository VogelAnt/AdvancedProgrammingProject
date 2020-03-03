#include "MainMenu.h"

#include <QApplication>
#include <gtest/gtest.h>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  MainMenu w;
  w.show();
  testing::InitGoogleTest(&argc, argv);
  return a.exec();
}
