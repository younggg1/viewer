/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *DxdiagpushButton;
    QPushButton *RegeditpushButton;
    QPushButton *SysProAdpushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(303, 195);
        DxdiagpushButton = new QPushButton(Widget);
        DxdiagpushButton->setObjectName("DxdiagpushButton");
        DxdiagpushButton->setGeometry(QRect(40, 20, 93, 40));
        DxdiagpushButton->setMaximumSize(QSize(16777215, 82));
        RegeditpushButton = new QPushButton(Widget);
        RegeditpushButton->setObjectName("RegeditpushButton");
        RegeditpushButton->setGeometry(QRect(150, 20, 121, 40));
        SysProAdpushButton = new QPushButton(Widget);
        SysProAdpushButton->setObjectName("SysProAdpushButton");
        SysProAdpushButton->setGeometry(QRect(10, 70, 281, 51));
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 130, 264, 47));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "viewer", nullptr));
        DxdiagpushButton->setText(QCoreApplication::translate("Widget", "Dxdiag", nullptr));
        RegeditpushButton->setText(QCoreApplication::translate("Widget", "Regedit\346\263\250\345\206\214\350\241\250", nullptr));
        SysProAdpushButton->setText(QCoreApplication::translate("Widget", "SystemPropertiesAdvanced\347\216\257\345\242\203\345\217\230\351\207\217", nullptr));
        label->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">\347\202\271\344\270\200\346\254\241\345\260\261\345\245\275\344\270\215\350\246\201\351\207\215\345\244\215\347\202\271\345\207\273</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">Just click once, don't repeat clicking</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
