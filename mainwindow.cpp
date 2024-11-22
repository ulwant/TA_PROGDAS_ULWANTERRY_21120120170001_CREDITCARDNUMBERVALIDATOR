#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

CreditCardValidator::CreditCardValidator(const QString& number) : cardNumber(number) {}

bool CreditCardValidator::isValidCreditCard() const {
    int n = cardNumber.size();
    int sum = 0;
    bool isSecond = false;

    for (int i = n - 1; i >= 0; i--) {
        int digit = cardNumber[i].digitValue();

        if (isSecond) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }

        sum += digit;
        isSecond = !isSecond;
    }

    return (sum % 10 == 0);
}

bool CreditCardValidator::isNumeric() const {

    return !cardNumber.isEmpty() && std::all_of(cardNumber.begin(), cardNumber.end(), [](QChar c) {
        return c.isDigit();
    });
}

QString CreditCardValidator::getCardType() const {
    if (cardNumber.size() == 15 &&
        (cardNumber.startsWith("34") || cardNumber.startsWith("37"))) {
        return "AMEX";
    }
    else if ((cardNumber.size() == 16 || cardNumber.size() == 13) && cardNumber.startsWith("4")) {
        return "Visa";
    }
    else if (cardNumber.size() == 16 &&
             (cardNumber.startsWith("51") || cardNumber.startsWith("52") ||
              cardNumber.startsWith("53") || cardNumber.startsWith("54") ||
              cardNumber.startsWith("55"))) {
        return "MasterCard";
    }
    return "tidak terdeteksi";
}

QString CreditCardValidator::validate() {
    if (!isNumeric()) {
        return "Input Invalid! Hanya bisa memasukan angka numerikk.";
    }

    QString cardType = getCardType();
    if (isValidCreditCard()) {
        return "kartu kredit VALID.\nCard Type: " + cardType;
    } else {
        return "kartu kredit INVALID.\nCard Type: Unknown";
    }
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {

    this->setFixedSize(400, 300); // Set to your desired width and height


    this->setWindowFlags(this->windowFlags() & ~Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_validateButton_clicked() {
    QString cardNumber = ui->cardNumberInput->text();
    CreditCardValidator validator(cardNumber);
    QString result = validator.validate();
    QMessageBox::information(this, "Validation Result", result);
}




