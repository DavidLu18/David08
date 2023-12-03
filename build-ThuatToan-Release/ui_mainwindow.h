/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *edgeListInput;
    QPushButton *drawGraphButton;
    QGraphicsView *graphView;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QPushButton *chuTrinhButton;
    QTextEdit *dataEdit;
    QFrame *line;
    QLabel *label;
    QFrame *line_2;
    QPushButton *findHamiltonPathButton;
    QPushButton *dijkstraButton;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(792, 737);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        edgeListInput = new QTextEdit(centralwidget);
        edgeListInput->setObjectName("edgeListInput");
        edgeListInput->setGeometry(QRect(40, 230, 141, 131));
        drawGraphButton = new QPushButton(centralwidget);
        drawGraphButton->setObjectName("drawGraphButton");
        drawGraphButton->setGeometry(QRect(60, 380, 91, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("SVN-Blade Runner")});
        font.setBold(false);
        drawGraphButton->setFont(font);
        drawGraphButton->setMouseTracking(false);
        graphView = new QGraphicsView(centralwidget);
        graphView->setObjectName("graphView");
        graphView->setGeometry(QRect(310, 160, 421, 371));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(10, 10, 171, 31));
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(310, 10, 171, 31));
        textBrowser_3 = new QTextBrowser(centralwidget);
        textBrowser_3->setObjectName("textBrowser_3");
        textBrowser_3->setGeometry(QRect(610, 10, 171, 31));
        chuTrinhButton = new QPushButton(centralwidget);
        chuTrinhButton->setObjectName("chuTrinhButton");
        chuTrinhButton->setGeometry(QRect(30, 60, 131, 51));
        dataEdit = new QTextEdit(centralwidget);
        dataEdit->setObjectName("dataEdit");
        dataEdit->setGeometry(QRect(310, 590, 421, 91));
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(-10, 540, 851, 41));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 590, 101, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Nirmala UI")});
        font1.setPointSize(16);
        font1.setBold(true);
        label->setFont(font1);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(-20, 125, 891, 31));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        findHamiltonPathButton = new QPushButton(centralwidget);
        findHamiltonPathButton->setObjectName("findHamiltonPathButton");
        findHamiltonPathButton->setGeometry(QRect(330, 60, 131, 51));
        dijkstraButton = new QPushButton(centralwidget);
        dijkstraButton->setObjectName("dijkstraButton");
        dijkstraButton->setGeometry(QRect(630, 60, 131, 51));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 190, 91, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Nirmala UI")});
        font2.setPointSize(12);
        font2.setBold(false);
        label_2->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 792, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        drawGraphButton->setText(QCoreApplication::translate("MainWindow", "V\341\272\275 \304\220\341\273\223 th\341\273\213", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700; color:#ff557f;\">EULER</span></p></body></html>", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700; color:#ff557f;\">HAMILTON</span></p></body></html>", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700; color:#ff557f;\">DIJKSTRA</span></p></body></html>", nullptr));
        chuTrinhButton->setText(QCoreApplication::translate("MainWindow", "GI\341\272\242I THU\341\272\254T", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "K\341\272\276T QU\341\272\242", nullptr));
        findHamiltonPathButton->setText(QCoreApplication::translate("MainWindow", "GI\341\272\242I THU\341\272\254T", nullptr));
        dijkstraButton->setText(QCoreApplication::translate("MainWindow", "GI\341\272\242I THU\341\272\254T", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Nh\341\272\255p \304\221\341\273\223 th\341\273\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
