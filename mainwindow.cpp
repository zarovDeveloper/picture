#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::drawRect(QPainter *painter, int x, int y, int width, int height, QColor color)
{
    QRect rectangle = QRect(x, y, width, height); //координаты
    QBrush brush(color);
    painter->setBrush(brush); //задаем цвет заполнения
    painter->drawRect(rectangle); //рисуем прямоугольник
}

void MainWindow::drawTriangle(QPainter *painter, QColor color, int x0, int y0, int x1, int y1, int x2, int y2)
{
    QBrush brush(color);
    painter->setBrush(brush);
    QPoint points[3];
    points[0].setX(x0);
    points[0].setY(y0);

    points[1].setX(x1);
    points[1].setY(y1);

    points[2].setX(x2);
    points[2].setY(y2);

    painter->drawPolygon(points,3,Qt::OddEvenFill);
}

void MainWindow::drawCircle(QPainter *painter, int x, int y, int width, int height, QColor color)
{
    QBrush brush(color);
    painter->setBrush(brush);
    painter->drawEllipse(QPointF(x, y), width, height);
}

void MainWindow::on_pushButton_draw_clicked()
{
    int w = ui->widget->width();
    int h = ui->widget->height();

    ui->widget->setImageSize(w, h);

    QImage *img = ui->widget->image;    // указатель на изображение, на котором рисует виджет

    QPainter *painter = new QPainter(img);

    QPen *pen = new QPen;

    pen->setWidth(0);
    painter->setPen(*pen);

    drawStar(painter, ui->lineEdit_inputStar->text().toInt());
    drawHouse(painter);
    land(painter, pen);
    drawLake(painter);

    painter->end();
    ui->widget->repaint();

    // не забываем освободить память
    delete pen;
    delete painter;

    pen = nullptr;
    painter = nullptr;
}

void MainWindow::drawHouse(QPainter *painter)
{
    painter->setPen(Qt::black);
    drawRect(painter, 50, 200, 200, 150, QColor(160, 54, 35)); //рисуем прямоугольник стен домика

    drawTriangle(painter, QColor(150, 75, 0),  150, 100, 50, 200, 250, 200); //roof

    drawRect(painter, 100, 250, 50, 100,  Qt::gray); //door in house

    drawCircle(painter, 110, 310, 5, 5, QColor(255, 215, 0)); //the handle on the door

    drawRect(painter, 175, 245, 50, 50, Qt::yellow); //window

    painter->drawLine(200, 245, 200, 295); // рисуем вертикальную линию на окне
    painter->drawLine(175, 270, 225, 270); // рисуем горизонтальную линию на окне

}

void MainWindow::drawLake(QPainter *painter)
{
    drawCircle(painter, 600, 425, 200, 50, QColor(0, 0, 255)); //draw lake
}

void MainWindow::drawStar(QPainter *painter, int count)
{
    QLinearGradient gradient(0, 0, 0, 255);
    gradient.setColorAt(0, Qt::yellow);
    gradient.setColorAt(1, Qt::red);
    QBrush brush(gradient);

    QPainterPath star;

    int x, y;

    //coord star

    for (int i = 0; i < count; i++)
    {
        x = 0 + rand() % 1000;
        y = 0 + rand() % 300;

        star.moveTo(x, y);
        star.lineTo(x + 5, y + 14);
        star.lineTo(x + 20, y + 14);
        star.lineTo(x + 6, y + 23);
        star.lineTo(x + 13, y + 37);
        star.lineTo(x, y + 28);
        star.lineTo(x - 13, y + 37);
        star.lineTo(x - 7, y + 23);
        star.lineTo(x - 20, y + 14);
        star.lineTo(x - 4, y + 14);
        star.lineTo(x, y);
        painter->setPen(Qt::yellow);
        painter->setBrush(brush);
        painter->drawPath(star);

    }
}

void MainWindow::land(QPainter *painter, QPen *pen)
{
    pen->setBrush(QColor(0, 200, 0));
    painter->setPen(*pen);
    drawRect(painter, 0, 350, 1000, 1000, QColor(0, 200, 0));

}

void MainWindow::swan(QPainter *painter, int x, int y, QPen *pen)
{
    pen->setBrush(Qt::black);
    painter->setPen(*pen);
    painter->setBrush(Qt::black);
    drawCircle(painter,570+x,725+y,80,40, QColor(255,250,251));//тело
    drawCircle(painter,630+x,680+y,20,70, QColor(255,250,251));// шея
    drawCircle(painter,645+x,620+y,30,15, QColor(255,250,251));//голова

    drawCircle(painter,570+x,725+y,70,30, QColor(255,250,200));//крыло
    painter->drawLine(500+x,725+y,570+x,725+y);
    painter->drawLine(505+x,735+y,570+x,735+y);
    painter->drawLine(505+x,715+y,570+x,715+y);

    drawTriangle(painter,QColor(255, 102, 0), 670+x,610+y,670+x,630+y,690+x,620+y);//клюв
    drawCircle(painter,637+x,613+y,3,3, QColor(0,0,0));//глаз
}
