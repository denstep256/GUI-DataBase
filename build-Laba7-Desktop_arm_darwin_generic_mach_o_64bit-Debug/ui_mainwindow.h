/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QPushButton *allDataViewButton;
    QPushButton *filterDataButton;
    QPushButton *filterDataButten2;
    QPushButton *pushButton_Add;
    QPushButton *pushButton_Rem;
    QLineEdit *lineEdit_Name;
    QLabel *label;
    QLineEdit *lineEdit_Uni;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_faculty;
    QLabel *label_4;
    QSpinBox *spinBox_course;
    QPushButton *sort_Button;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 580);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(0, 0, 605, 515));
        tableView->setStyleSheet(QString::fromUtf8(""));
        allDataViewButton = new QPushButton(centralwidget);
        allDataViewButton->setObjectName("allDataViewButton");
        allDataViewButton->setGeometry(QRect(620, 425, 150, 50));
        allDataViewButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color: #4CAF50;\n"
"    border: 1px solid #45a049;\n"
"    color: #ffffff; \n"
"    padding: 5px 10px;\n"
"}\n"
"\n"
"QPushButton hover {\n"
"    background-color: #45a049;\n"
"    color: #ffffff;\n"
"}\n"
""));
        filterDataButton = new QPushButton(centralwidget);
        filterDataButton->setObjectName("filterDataButton");
        filterDataButton->setGeometry(QRect(57, 530, 125, 35));
        filterDataButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;\n"
"    border: 1px solid #2e6da4;\n"
"    color: #ffffff;\n"
"    padding: 5px 10px;\n"
"}\n"
"\n"
"QPushButton hover {\n"
"    background-color: #2e6da4; \n"
"    color: #ffffff; \n"
"}\n"
""));
        filterDataButten2 = new QPushButton(centralwidget);
        filterDataButten2->setObjectName("filterDataButten2");
        filterDataButten2->setGeometry(QRect(239, 530, 125, 35));
        filterDataButten2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;\n"
"    border: 1px solid #2e6da4;\n"
"    color: #ffffff;\n"
"    padding: 5px 10px;\n"
"}\n"
"\n"
"QPushButton hover {\n"
"    background-color: #2e6da4; \n"
"    color: #ffffff; \n"
"}\n"
""));
        pushButton_Add = new QPushButton(centralwidget);
        pushButton_Add->setObjectName("pushButton_Add");
        pushButton_Add->setGeometry(QRect(620, 210, 150, 50));
        pushButton_Add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color: #5bc0de;\n"
"    border: 1px solid #46b8da;\n"
"    color: #ffffff;\n"
"    padding: 5px 10px;\n"
"}\n"
"\n"
"QPushButton hover {\n"
"    background-color: #46b8da;\n"
"    color: #ffffff;\n"
"}\n"
""));
        pushButton_Rem = new QPushButton(centralwidget);
        pushButton_Rem->setObjectName("pushButton_Rem");
        pushButton_Rem->setGeometry(QRect(620, 350, 150, 50));
        pushButton_Rem->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ff6666;\n"
"    border: 1px solid #ff3333;\n"
"    color: #ffffff;\n"
"    padding: 5px 10px;\n"
"}\n"
"\n"
"QPushButton hover {\n"
"    background-color: #ff3333; \n"
"    color: #ffffff; \n"
"}\n"
""));
        lineEdit_Name = new QLineEdit(centralwidget);
        lineEdit_Name->setObjectName("lineEdit_Name");
        lineEdit_Name->setGeometry(QRect(620, 25, 150, 25));
        lineEdit_Name->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(620, 0, 150, 25));
        lineEdit_Uni = new QLineEdit(centralwidget);
        lineEdit_Uni->setObjectName("lineEdit_Uni");
        lineEdit_Uni->setGeometry(QRect(620, 75, 150, 25));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(620, 50, 150, 25));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(620, 100, 150, 25));
        lineEdit_faculty = new QLineEdit(centralwidget);
        lineEdit_faculty->setObjectName("lineEdit_faculty");
        lineEdit_faculty->setGeometry(QRect(620, 175, 150, 25));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(620, 150, 150, 25));
        spinBox_course = new QSpinBox(centralwidget);
        spinBox_course->setObjectName("spinBox_course");
        spinBox_course->setGeometry(QRect(620, 125, 150, 25));
        spinBox_course->setMinimum(1);
        spinBox_course->setMaximum(5);
        sort_Button = new QPushButton(centralwidget);
        sort_Button->setObjectName("sort_Button");
        sort_Button->setGeometry(QRect(421, 530, 125, 35));
        sort_Button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #337ab7;\n"
"    border: 1px solid #2e6da4;\n"
"    color: #ffffff;\n"
"    padding: 5px 10px;\n"
"}\n"
"\n"
"QPushButton hover {\n"
"    background-color: #2e6da4; \n"
"    color: #ffffff; \n"
"}\n"
""));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        allDataViewButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \320\262\321\201\320\265", nullptr));
        filterDataButton->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\321\200\321\201 > 2", nullptr));
        filterDataButten2->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\321\200\321\201 = 2", nullptr));
        pushButton_Add->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        pushButton_Rem->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\243\320\275\320\270\320\262\320\265\321\200\321\201\320\270\321\202\320\265\321\202", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\321\200\321\201", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\272\321\203\320\273\321\214\321\202\320\265\321\202", nullptr));
        sort_Button->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
