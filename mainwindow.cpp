#include "mainwindow.h"
#include <QAction>
#include <QApplication>
#include <QFileDialog>
#include <QMenuBar>
#include <QMessageBox>
#include <QString>

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// MainWindow:
//
// Constructor. Responsible for constructing the main window.
//
MainWindow::MainWindow() {
    createMenus();
    QString appName = "The Compendium";
    QString version = "0.1 ALPHA";
    QString authors = "William Ma, Young Beom Ko, James Chou";
    QString title   = QString("%1 %2 - CSc322 Project by %3").arg(appName).arg(version).arg(authors);
    setWindowTitle(title);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// about:
//
// Function that is called when user clicks Help -> About.
//
void MainWindow::about() {
    QMessageBox about(this);
    about.setText("<b>The Compendium 0.1 ALPHA</b><br>City College of New York<br>CSc 332 Software Engineering - Professor Jie Wei<br><br><b>Project by:</b> William Ma, Young Beom Ko, James Chou");
    about.setIconPixmap(QPixmap(":/icons/images/compendium.jpg")); // hard coded
    about.exec();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// createMenus:
//
// Creates menus.
//
void MainWindow::createMenus() {
    fileMenu = menuBar()->addMenu(tr("&File"));

    // ----------------------------------------------------------------------------------
    // NOTE: Implement code that will check whether or not the user is logged in or not.
    // If user is logged in, show log out and vice versa. (To-do)
    // File -> Log In
    loginAct = new QAction(tr("Log In"), this);
    fileMenu->addAction(loginAct);
    connect(loginAct, SIGNAL(triggered()), this, SLOT(login()));

    // File -> Log Out
    logoutAct = new QAction(tr("Log Out"), this);
    logoutAct->setEnabled(0); // Gray out Log Out
    fileMenu->addAction(logoutAct);
    connect(logoutAct, SIGNAL(triggered()), this, SLOT(logout()));
    // ----------------------------------------------------------------------------------

    fileMenu->addSeparator();
    // File -> Exit
    exitAct = new QAction(tr("&Exit"), this);
    fileMenu->addAction(exitAct);
    connect(exitAct, SIGNAL(triggered()), this, SLOT(close()));

    helpMenu = menuBar()->addMenu(tr("&Help"));

    // Help -> About Compendium
    aboutTC = helpMenu->addAction(tr("&About Compendium"));
    connect(aboutTC, SIGNAL(triggered()), this, SLOT(about()));

    // Help -> About Qt
    aboutQtAct = helpMenu->addAction(tr("&About Qt"));
    connect(aboutQtAct, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// login:
//
// Prompts the user to log in and enters his/her credientials. If the user
// does not have an account. It will have a PushButton for the user to
// register. Not appearable to users who are already logged in.
//
void MainWindow::login() {
    // Enter Code Here (To-do)
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// logout:
//
// Logs the user out of the system. Only appearable to users who are
// already logged in.
//
void MainWindow::logout() {
    // Enter Code Here (To-do)
}
