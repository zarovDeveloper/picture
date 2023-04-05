#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //set input data
    ui->spinBox_inputStar->setButtonSymbols(QAbstractSpinBox::NoButtons);
    ui->spinBox_inputStar->setRange(0, 100000);
}

MainWindow::~MainWindow()
{
    delete ui;
}


//functions draw


void MainWindow::drawRect(QPainter *painter, int x, int y, int width, int height, QColor color) //draw rectangle
{
    QRect rectangle = QRect(x, y, width, height); //coord
    QBrush brush(color);
    painter->setBrush(brush); //color
    painter->drawRect(rectangle); //draw
}

void MainWindow::drawTriangle(QPainter *painter, QColor color, int x0, int y0, int x1, int y1, int x2, int y2) //draw triangle
{
    QBrush brush(color); //set color
    painter->setBrush(brush);

    QPoint points[3]; //3 vertices of the triangle

    //first vertex
    points[0].setX(x0);
    points[0].setY(y0);

    //second vertex
    points[1].setX(x1);
    points[1].setY(y1);

    //thrid vertex
    points[2].setX(x2);
    points[2].setY(y2);

    painter->drawPolygon(points,3,Qt::OddEvenFill); //draw
}

void MainWindow::drawCircle(QPainter *painter, int x, int y, int width, int height, QColor color) //draw circle
{
    QBrush brush(color); //set color
    painter->setBrush(brush);
    painter->drawEllipse(QPointF(x, y), width, height); //draw
}

void MainWindow::drawStar(QPainter *painter, int count) //star with count
{
    QLinearGradient gradient(0, 0, 0, 255); //set gradient color
    gradient.setColorAt(0, Qt::yellow);
    gradient.setColorAt(1, Qt::blue);
    QBrush brush(gradient);

    QPainterPath star; //crate path for star

    int x, y;  //coord star

    for (int i = 0; i < count; i++)
    {
        //random coord star
        x = 0 + rand() % 900;
        y = 0 + rand() % 300;


        //draw star in path
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


        //draw star in widget
        painter->setPen(Qt::yellow);
        painter->setBrush(brush);
        painter->drawPath(star);

    }
}


//create and draw object from functions


void MainWindow::house(QPainter *painter) //create and draw house
{
    painter->setPen(Qt::black);
    drawRect(painter, 50, 200, 200, 150, QColor(160, 54, 35)); //rect of the walls of the house

    drawTriangle(painter, QColor(150, 75, 0),  150, 100, 50, 200, 250, 200); //roof

    drawRect(painter, 100, 250, 50, 100,  Qt::gray); //door in house

    drawCircle(painter, 110, 310, 5, 5, QColor(255, 215, 0)); //the handle on the door

    drawRect(painter, 175, 245, 50, 50, Qt::yellow); //window

    painter->drawLine(200, 245, 200, 295); //vertical line on the window
    painter->drawLine(175, 270, 225, 270); //horizontal line on the window
}

void MainWindow::lake(QPainter *painter) //crate and draw lake
{
    drawCircle(painter, 600, 425, 200, 50, QColor(0, 0, 255)); //draw lake
}

void MainWindow::land(QPainter *painter, QPen *pen) //create and draw land
{
    pen->setBrush(QColor(0, 150, 0)); //set color
    painter->setPen(*pen);
    drawRect(painter, 0, 350, 1000, 1000, QColor(0, 150, 0)); //draw
}

void MainWindow::sky(QPainter *painter, QPen *pen) //create and draw sky
{
    pen->setBrush(QColor(10, 8, 32)); //set color
    painter->setPen(*pen);
    drawRect(painter, 0, 0, 1000, 1000, QColor(10, 8, 32)); //draw
}

void MainWindow::swan(QPainter *painter, int x, int y) //create and draw swan
{
    painter->setPen(Qt::NoPen);
    drawCircle(painter, 57*3 + x, 72*3 + y, 8*3, 4*3, QColor(255,250,251)); //body
    drawCircle(painter, 63*3 + x, 68*3 + y ,2*3, 7*3, QColor(255,250,251)); //neck
    drawCircle(painter, 64*3 + x, 62*3 + y, 3*3, 2*3, QColor(255,250,251)); //head
    QPen *pen = new QPen;
    pen->setWidth(0);
    painter-> setPen(*pen);

    drawCircle(painter, 57*3 + x, 73*3 + y, 7*3, 3*3, QColor(255,250,200)); //wing
    painter->drawLine(50*3 + x ,73*3 + y, 57*3 + x, 73*3 + y);
    painter->drawLine(51*3 + x, 74*3 + y, 57*3 + x, 74*3 + y);
    painter->drawLine(51*3 + x, 72*3 + y, 57*3 + x, 72*3 + y);

    drawTriangle(painter, QColor(255, 102, 0), 67*3 + x, 61*3 + y, 67*3 + x, 63*3 + y, 69*3 + x, 62*3 + y); //beak
    drawCircle(painter, 64*3 + x, 61*3 + y, 1*3, 1*3, QColor(0,0,0)); //eye
    delete pen;
    pen = nullptr;
}

void MainWindow::moon(QPainter *painter) //create and draw moon
{
    drawCircle(painter, 750, 100, 100 * 2/4, 100 * 2/4, QColor(128, 128, 128));
}

void MainWindow::rabbit(QPainter *painter) //create and draw rabbit on the moon
{
    drawCircle(painter, 740, 70, 10 * 2/4, 20 * 2/4, QColor(92, 92, 92));  //left ear
    drawCircle(painter, 760, 70, 10 * 2/4, 20 * 2/4, QColor(92, 92, 92));  //right ear
    drawCircle(painter, 750, 110, 30 * 2/4, 40 * 2/4, QColor(92, 92, 92)); //body
    drawCircle(painter, 750, 80, 25 * 2/4, 25 * 2/4, QColor(92, 92, 92));  //head
    drawCircle(painter, 735, 130, 15 * 2/4, 10 * 2/4, QColor(92, 92, 92)); //left leg
    drawCircle(painter, 765, 130, 15 * 2/4, 10 * 2/4, QColor(92, 92, 92)); //right leg
    drawCircle(painter, 735, 95, 10 * 2/4, 10 * 2/4, QColor(73, 77, 78)); //left paw
    drawCircle(painter, 765, 95, 10 * 2/4, 10 * 2/4, QColor(73, 77, 78)); //right paw
}

//button

void MainWindow::on_pushButton_draw_clicked()
{

    //create image
    int w = ui->widget->width();
    int h = ui->widget->height();

    ui->widget->setImageSize(w, h);

    QImage *img = ui->widget->image; //pointer to the image on which the widget draws
    //create painter and pen
    QPainter *painter = new QPainter(img);
    QPen *pen = new QPen;

    //customization pen
    pen->setWidth(0);
    painter->setPen(*pen);

    //draw
    sky(painter, pen);
    land(painter, pen);
    lake(painter);
    drawStar(painter, ui->spinBox_inputStar->value());

    house(painter);
    moon(painter);
    rabbit(painter);

    swan(painter, 400, 200);
    swan(painter, 450, 220);

    //end draw and repaint
    painter->end();
    ui->widget->repaint();

    //clear memory
    delete pen;
    delete painter;

    pen = nullptr;
    painter = nullptr;
}
