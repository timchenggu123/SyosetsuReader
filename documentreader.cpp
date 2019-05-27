#include "documentreader.h"
#include "ui_documentreader.h"
#include "qpainter.h"

DocumentReader::DocumentReader(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DocumentReader)
{
    ui->setupUi(this);

}

DocumentReader::~DocumentReader()
{
    delete ui;
}

void DocumentReader::paintEvent(QPaintEvent  *e){
    QPainter painter(this);

    painter.drawText(100,100,"Hello World");


}
