#ifndef DOCUMENTREADER_H
#define DOCUMENTREADER_H
#include <QWidget>

namespace Ui {
class DocumentReader;
}

class DocumentReader : public QWidget
{
    Q_OBJECT

public:
    explicit DocumentReader(QWidget *parent = 0);
    ~DocumentReader();
    void paintEvent(QPaintEvent  *e);

private:
    Ui::DocumentReader *ui;
};

#endif // DOCUMENTREADER_H
