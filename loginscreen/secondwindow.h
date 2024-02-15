// secondwindow.h

#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>

class SecondWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SecondWindow(QWidget *parent = nullptr);
    ~SecondWindow();

private:
    QLabel *welcomeLabel;
    QPushButton *logoutButton;

    void setupUi();

private slots:
    void logout(); // Declaration of the logout slot
};

#endif // SECONDWINDOW_H
