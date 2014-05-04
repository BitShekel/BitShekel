/********************************************************************************
** Form generated from reading UI file 'qrcodedialog.ui'
**
** Created: Sun Apr 27 11:12:54 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QRCODEDIALOG_H
#define UI_QRCODEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QRCodeDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *lblQRCode;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *chkReq;
    QHBoxLayout *horizontalLayout;
    QLabel *lblAm1;
    QLineEdit *lnReqAmount;
    QLabel *lblAm2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *lnLabel;
    QLabel *label_4;
    QLineEdit *lnMessage;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSaveAs;

    void setupUi(QDialog *QRCodeDialog)
    {
        if (QRCodeDialog->objectName().isEmpty())
            QRCodeDialog->setObjectName(QString::fromUtf8("QRCodeDialog"));
        QRCodeDialog->resize(320, 404);
        verticalLayout_3 = new QVBoxLayout(QRCodeDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lblQRCode = new QLabel(QRCodeDialog);
        lblQRCode->setObjectName(QString::fromUtf8("lblQRCode"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblQRCode->sizePolicy().hasHeightForWidth());
        lblQRCode->setSizePolicy(sizePolicy);
        lblQRCode->setMinimumSize(QSize(300, 300));
        lblQRCode->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lblQRCode);

        widget = new QWidget(QRCodeDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        chkReq = new QCheckBox(widget);
        chkReq->setObjectName(QString::fromUtf8("chkReq"));
        chkReq->setEnabled(true);
        chkReq->setStyleSheet(QString::fromUtf8("QWidget { color: violet; }"));

        verticalLayout->addWidget(chkReq);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblAm1 = new QLabel(widget);
        lblAm1->setObjectName(QString::fromUtf8("lblAm1"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblAm1->sizePolicy().hasHeightForWidth());
        lblAm1->setSizePolicy(sizePolicy1);
        lblAm1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(lblAm1);

        lnReqAmount = new QLineEdit(widget);
        lnReqAmount->setObjectName(QString::fromUtf8("lnReqAmount"));
        lnReqAmount->setEnabled(false);
        lnReqAmount->setMinimumSize(QSize(60, 0));
        lnReqAmount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(lnReqAmount);

        lblAm2 = new QLabel(widget);
        lblAm2->setObjectName(QString::fromUtf8("lblAm2"));
        sizePolicy1.setHeightForWidth(lblAm2->sizePolicy().hasHeightForWidth());
        lblAm2->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(lblAm2);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        lnLabel = new QLineEdit(widget);
        lnLabel->setObjectName(QString::fromUtf8("lnLabel"));
        lnLabel->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(lnLabel, 0, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        lnMessage = new QLineEdit(widget);
        lnMessage->setObjectName(QString::fromUtf8("lnMessage"));
        lnMessage->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(lnMessage, 1, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnSaveAs = new QPushButton(widget);
        btnSaveAs->setObjectName(QString::fromUtf8("btnSaveAs"));

        horizontalLayout_3->addWidget(btnSaveAs);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_3->addWidget(widget);

#ifndef QT_NO_SHORTCUT
        lblAm1->setBuddy(lnReqAmount);
        lblAm2->setBuddy(lnReqAmount);
        label_3->setBuddy(lnLabel);
        label_4->setBuddy(lnMessage);
#endif // QT_NO_SHORTCUT

        retranslateUi(QRCodeDialog);
        QObject::connect(chkReq, SIGNAL(clicked(bool)), lnReqAmount, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(QRCodeDialog);
    } // setupUi

    void retranslateUi(QDialog *QRCodeDialog)
    {
        QRCodeDialog->setWindowTitle(QApplication::translate("QRCodeDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        lblQRCode->setText(QApplication::translate("QRCodeDialog", "QR Code", 0, QApplication::UnicodeUTF8));
        chkReq->setText(QApplication::translate("QRCodeDialog", "Request Payment", 0, QApplication::UnicodeUTF8));
        lblAm1->setText(QApplication::translate("QRCodeDialog", "Amount:", 0, QApplication::UnicodeUTF8));
        lblAm2->setText(QApplication::translate("QRCodeDialog", "BSH", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QRCodeDialog", "Label:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QRCodeDialog", "Message:", 0, QApplication::UnicodeUTF8));
        btnSaveAs->setText(QApplication::translate("QRCodeDialog", "&Save As...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QRCodeDialog: public Ui_QRCodeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QRCODEDIALOG_H
