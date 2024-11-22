#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class CreditCardValidator {
private:
    QString cardNumber;

    bool isValidCreditCard() const;
    bool isNumeric() const;
    QString getCardType() const;

public:
    explicit CreditCardValidator(const QString& number);
    QString validate();
};

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_validateButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif
