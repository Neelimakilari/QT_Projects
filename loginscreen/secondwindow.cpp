// secondwindow.cpp

#include "secondwindow.h"

SecondWindow::SecondWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setupUi();
}

SecondWindow::~SecondWindow()
{
}

void SecondWindow::setupUi()
{
    welcomeLabel = new QLabel("Welcome to the Second Window!", this);
    welcomeLabel->setGeometry(50, 50, 300, 30);

    logoutButton = new QPushButton("Logout", this);
    logoutButton->setGeometry(50, 100, 100, 30);

    connect(logoutButton, &QPushButton::clicked, this, &SecondWindow::logout);
}

void SecondWindow::logout()
{
    // Perform logout actions here
    //close the current window
    this->close();
}
