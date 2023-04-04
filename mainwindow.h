#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPaintEvent>
#include <QPainter>
#include <QPen>
#include <QRandomGenerator>
#include <iostream>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_draw_clicked();

    void drawHouse(QPainter *painter);

    void drawLake(QPainter *painter);

    void land(QPainter *painter, QPen *pen);

    void swan(QPainter *painter, int x, int y, QPen *pen);

    void drawStar(QPainter *painter, int count);

    void drawRect(QPainter *painter, int x, int y, int width, int height, QColor color);

    void drawTriangle(QPainter *painter, QColor color, int x0, int y0, int x1, int y1, int x2, int y2);

    void drawCircle(QPainter *painter, int x, int y, int width,int height, QColor color);
private:
    Ui::MainWindow *ui;




};

#endif // MAINWINDOW_H
