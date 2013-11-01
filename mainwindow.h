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
    void         about    ();
    void         login    ();
    void         logout   ();

private:
    void        createMenus();

    QMenu       *fileMenu;
    QMenu       *helpMenu;

    QAction     *aboutTC;
    QAction     *aboutQtAct;
    QAction     *exitAct;
    QAction     *loginAct;
    QAction     *logoutAct;
};

#endif // MAINWINDOW_H
