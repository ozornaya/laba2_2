/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QPushButton *clearButton;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *profName;
    QLabel *label_2;
    QLineEdit *studName;
    QPushButton *addButton;
    QLabel *label_3;
    QLineEdit *studNameFind;
    QPushButton *listButton;
    QLabel *label_4;
    QLineEdit *nameToDelete;
    QPushButton *deleteButton;
    QListView *listView;
    QPushButton *inputButton;
    QPushButton *outputButton;
    QTableView *tableView;
    QPushButton *saveButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(726, 598);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(145, 250, 223)"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        clearButton = new QPushButton(centralWidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(clearButton, 3, 1, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, label);

        profName = new QLineEdit(centralWidget);
        profName->setObjectName(QString::fromUtf8("profName"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(profName->sizePolicy().hasHeightForWidth());
        profName->setSizePolicy(sizePolicy1);
        profName->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, profName);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, label_2);

        studName = new QLineEdit(centralWidget);
        studName->setObjectName(QString::fromUtf8("studName"));
        sizePolicy1.setHeightForWidth(studName->sizePolicy().hasHeightForWidth());
        studName->setSizePolicy(sizePolicy1);
        studName->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, studName);

        addButton = new QPushButton(centralWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        sizePolicy1.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy1);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, addButton);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(5, QFormLayout::FieldRole, label_3);

        studNameFind = new QLineEdit(centralWidget);
        studNameFind->setObjectName(QString::fromUtf8("studNameFind"));
        sizePolicy1.setHeightForWidth(studNameFind->sizePolicy().hasHeightForWidth());
        studNameFind->setSizePolicy(sizePolicy1);
        studNameFind->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, studNameFind);

        listButton = new QPushButton(centralWidget);
        listButton->setObjectName(QString::fromUtf8("listButton"));
        sizePolicy1.setHeightForWidth(listButton->sizePolicy().hasHeightForWidth());
        listButton->setSizePolicy(sizePolicy1);

        formLayout_2->setWidget(8, QFormLayout::FieldRole, listButton);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setPointSize(11);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(10, QFormLayout::FieldRole, label_4);

        nameToDelete = new QLineEdit(centralWidget);
        nameToDelete->setObjectName(QString::fromUtf8("nameToDelete"));
        sizePolicy1.setHeightForWidth(nameToDelete->sizePolicy().hasHeightForWidth());
        nameToDelete->setSizePolicy(sizePolicy1);
        nameToDelete->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        formLayout_2->setWidget(12, QFormLayout::FieldRole, nameToDelete);

        deleteButton = new QPushButton(centralWidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        sizePolicy1.setHeightForWidth(deleteButton->sizePolicy().hasHeightForWidth());
        deleteButton->setSizePolicy(sizePolicy1);

        formLayout_2->setWidget(13, QFormLayout::FieldRole, deleteButton);

        listView = new QListView(centralWidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        sizePolicy1.setHeightForWidth(listView->sizePolicy().hasHeightForWidth());
        listView->setSizePolicy(sizePolicy1);
        listView->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        formLayout_2->setWidget(7, QFormLayout::FieldRole, listView);


        gridLayout_2->addLayout(formLayout_2, 0, 2, 3, 1);

        inputButton = new QPushButton(centralWidget);
        inputButton->setObjectName(QString::fromUtf8("inputButton"));
        sizePolicy1.setHeightForWidth(inputButton->sizePolicy().hasHeightForWidth());
        inputButton->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(inputButton, 0, 0, 1, 1);

        outputButton = new QPushButton(centralWidget);
        outputButton->setObjectName(QString::fromUtf8("outputButton"));
        sizePolicy.setHeightForWidth(outputButton->sizePolicy().hasHeightForWidth());
        outputButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(outputButton, 0, 1, 1, 1);

        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        sizePolicy1.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy1);
        tableView->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        gridLayout_2->addWidget(tableView, 1, 0, 2, 2);

        saveButton = new QPushButton(centralWidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        sizePolicy1.setHeightForWidth(saveButton->sizePolicy().hasHeightForWidth());
        saveButton->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(saveButton, 3, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        clearButton->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217 \320\277\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260", nullptr));
        addButton->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260", nullptr));
        listButton->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272 \321\203\321\207\320\260\321\201\321\202\320\275\320\270\320\272\320\276\320\262", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217 \320\277\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\217 \320\264\320\273\321\217 \321\203\320\264\320\260\320\273\320\265\320\275\320\270\321\217", nullptr));
        deleteButton->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        inputButton->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\260\320\271\320\273 \320\262\320\262\320\276\320\264\320\260", nullptr));
        outputButton->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\260\320\271\320\273 \320\262\321\213\320\262\320\276\320\264\320\260", nullptr));
        saveButton->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
