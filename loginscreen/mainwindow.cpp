// mainwindow.cpp

#include "mainwindow.h"
#include "secondwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    usernameEdit = new QLineEdit(this);
    usernameEdit->setPlaceholderText("Username");
    usernameEdit->setGeometry(50, 50, 200, 30);

    passwordEdit = new QLineEdit(this);
    passwordEdit->setPlaceholderText("Password");
    passwordEdit->setEchoMode(QLineEdit::Password);
    passwordEdit->setGeometry(50, 100, 200, 30);

    loginButton = new QPushButton("Login", this);
    loginButton->setGeometry(50, 150, 200, 30);
    connect(loginButton, &QPushButton::clicked, this, &MainWindow::handleLogin);

    statusLabel = new QLabel(this);
    statusLabel->setGeometry(50, 200, 200, 30);
}

MainWindow::~MainWindow()
{
}

void MainWindow::handleLogin()
{
    QString username = usernameEdit->text();
    QString password = passwordEdit->text();

    // Check username and password
    if (username == "admin" && password == "admin") {
        //statusLabel->setText("Login successful!");
        SecondWindow *secondWindow = new SecondWindow;
        secondWindow->show();
        this->close(); // Close current window
    } else {
        statusLabel->setText("Invalid username or password!");
    }
}
