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

    // File -> Exit
    exitAct = new QAction(tr("E&xit"), this);
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
