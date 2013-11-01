#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMenu>
#include <QAction>
#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();

private slots:
    void         about   ();

private:
    void        createMenus();

    QMenu       *fileMenu;
    QMenu       *helpMenu;

    QAction     *aboutTC;
    QAction     *aboutQtAct;
    QAction     *exitAct;
};

#endif // MAINWINDOW_H
