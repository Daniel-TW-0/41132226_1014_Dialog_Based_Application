#ifndef BYTERCONVERTER_H
#define BYTERCONVERTER_H

#include <QDialog>

class QLineEdit;

class ByteConverter : public QDialog
{
    Q_OBJECT

public:
    ByteConverter(QWidget *parent = 0);
    ~ByteConverter();

private slots:
    void decChanged(const QString&);
    void hexChanged(const QString&);
    void binChanged(const QString&);

private:
    QLineEdit* decEdit;
    QLineEdit* hexEdit;
    QLineEdit* binEdit;
};

#endif // BYTERCONVERTER_H