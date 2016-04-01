/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QFrame *aTop;
    QHBoxLayout *horizontalLayout_3;
    QFrame *aLogo;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QFrame *bSteps;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *aFiles;
    QPushButton *bWatermark;
    QPushButton *cExport;
    QPushButton *dLog;
    QFrame *cNext;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *Next;
    QFrame *bBottom;
    QHBoxLayout *horizontalLayout_2;
    QFrame *aLeftMenu;
    QFrame *bContent;
    QVBoxLayout *verticalLayout_3;
    QFrame *DragFiles;
    QVBoxLayout *verticalLayout_4;
    QFrame *Remove;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1184, 649);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QStringLiteral("padding:0;margin:0;"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral("padding:0;margin:0;border:none;"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QStringLiteral("padding:0;margin:0;border:none;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        aTop = new QFrame(frame);
        aTop->setObjectName(QStringLiteral("aTop"));
        aTop->setStyleSheet(QStringLiteral("max-height:70px;background:#1883d7;"));
        aTop->setFrameShape(QFrame::StyledPanel);
        aTop->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(aTop);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        aLogo = new QFrame(aTop);
        aLogo->setObjectName(QStringLiteral("aLogo"));
        aLogo->setStyleSheet(QStringLiteral("max-width:200px"));
        aLogo->setFrameShape(QFrame::StyledPanel);
        aLogo->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(aLogo);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(aLogo);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral(""));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);


        horizontalLayout_3->addWidget(aLogo);

        bSteps = new QFrame(aTop);
        bSteps->setObjectName(QStringLiteral("bSteps"));
        bSteps->setStyleSheet(QStringLiteral(""));
        bSteps->setFrameShape(QFrame::StyledPanel);
        bSteps->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(bSteps);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        aFiles = new QPushButton(bSteps);
        aFiles->setObjectName(QStringLiteral("aFiles"));
        aFiles->setFont(font);
        aFiles->setStyleSheet(QLatin1String("background:#0084cc;\n"
"margin:5px;\n"
"border-bottom:2px solid #005a8b;\n"
"-webkit-border-radius: 3px;\n"
"-moz-border-radius: 3px;\n"
"border-radius: 3px;\n"
""));

        horizontalLayout_5->addWidget(aFiles);

        bWatermark = new QPushButton(bSteps);
        bWatermark->setObjectName(QStringLiteral("bWatermark"));
        bWatermark->setFont(font);
        bWatermark->setStyleSheet(QLatin1String("margin:5px;\n"
"border:1px solid #0865af;\n"
"color:#003755;\n"
"-webkit-border-radius: 3px;\n"
"-moz-border-radius: 3px;\n"
"border-radius: 3px;\n"
""));

        horizontalLayout_5->addWidget(bWatermark);

        cExport = new QPushButton(bSteps);
        cExport->setObjectName(QStringLiteral("cExport"));
        cExport->setFont(font);
        cExport->setStyleSheet(QLatin1String("margin:5px;\n"
"border:1px solid #0865af;\n"
"color:#003755;\n"
"-webkit-border-radius: 3px;\n"
"-moz-border-radius: 3px;\n"
"border-radius: 3px;\n"
""));

        horizontalLayout_5->addWidget(cExport);

        dLog = new QPushButton(bSteps);
        dLog->setObjectName(QStringLiteral("dLog"));
        QFont font1;
        font1.setPointSize(13);
        dLog->setFont(font1);
        dLog->setAutoFillBackground(false);
        dLog->setStyleSheet(QStringLiteral("max-width:70px;color:#003755;"));

        horizontalLayout_5->addWidget(dLog);


        horizontalLayout_3->addWidget(bSteps);

        cNext = new QFrame(aTop);
        cNext->setObjectName(QStringLiteral("cNext"));
        cNext->setStyleSheet(QStringLiteral("max-width:250px;min-width:150px;background:#005a8b;"));
        cNext->setFrameShape(QFrame::StyledPanel);
        cNext->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(cNext);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Next = new QPushButton(cNext);
        Next->setObjectName(QStringLiteral("Next"));
        Next->setStyleSheet(QStringLiteral("font-size:48px;color:#00334f;"));

        horizontalLayout_4->addWidget(Next);


        horizontalLayout_3->addWidget(cNext);


        verticalLayout->addWidget(aTop);

        bBottom = new QFrame(frame);
        bBottom->setObjectName(QStringLiteral("bBottom"));
        bBottom->setStyleSheet(QStringLiteral("padding:0;margin:0;"));
        bBottom->setFrameShape(QFrame::StyledPanel);
        bBottom->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(bBottom);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        aLeftMenu = new QFrame(bBottom);
        aLeftMenu->setObjectName(QStringLiteral("aLeftMenu"));
        aLeftMenu->setStyleSheet(QStringLiteral("max-width:220px;min-width:220px;background:#535353;"));
        aLeftMenu->setFrameShape(QFrame::StyledPanel);
        aLeftMenu->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(aLeftMenu);

        bContent = new QFrame(bBottom);
        bContent->setObjectName(QStringLiteral("bContent"));
        bContent->setStyleSheet(QStringLiteral("background:#2c2c2c;"));
        bContent->setFrameShape(QFrame::StyledPanel);
        bContent->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(bContent);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        DragFiles = new QFrame(bContent);
        DragFiles->setObjectName(QStringLiteral("DragFiles"));
        DragFiles->setStyleSheet(QStringLiteral(""));
        DragFiles->setFrameShape(QFrame::StyledPanel);
        DragFiles->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(DragFiles);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        Remove = new QFrame(DragFiles);
        Remove->setObjectName(QStringLiteral("Remove"));
        Remove->setStyleSheet(QStringLiteral("margin:170%;padding:20px;border:2px dashed #1c1c1c;color:#1c1c1c;"));
        Remove->setFrameShape(QFrame::StyledPanel);
        Remove->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(Remove);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(Remove);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font2;
        font2.setPointSize(26);
        font2.setStyleStrategy(QFont::PreferDefault);
        label_2->setFont(font2);
        label_2->setStyleSheet(QStringLiteral("border:none;margin:0;padding:0;"));
        label_2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_5->addWidget(label_2);

        frame_3 = new QFrame(Remove);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setStyleSheet(QStringLiteral("margin:0;padding:0;border:none;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_3);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        pushButton_6 = new QPushButton(frame_3);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(false);
        font3.setWeight(50);
        pushButton_6->setFont(font3);
        pushButton_6->setStyleSheet(QLatin1String("margin:0 auto;\n"
"max-width:200px;\n"
"border:none;\n"
"border-bottom:2px solid #ccc;\n"
"background:#fff;\n"
"padding:8px;\n"
"\n"
"-webkit-border-radius: 2px;\n"
"-moz-border-radius: 2px;\n"
"border-radius: 2px;"));
        pushButton_6->setText(QStringLiteral("Or select files"));

        horizontalLayout_6->addWidget(pushButton_6);


        verticalLayout_5->addWidget(frame_3);


        verticalLayout_4->addWidget(Remove);


        verticalLayout_3->addWidget(DragFiles);


        horizontalLayout_2->addWidget(bContent);


        verticalLayout->addWidget(bBottom);


        horizontalLayout->addWidget(frame);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "Watermark-Image", 0));
        aFiles->setText(QApplication::translate("MainWindow", "Files", 0));
        bWatermark->setText(QApplication::translate("MainWindow", "Watermark", 0));
        cExport->setText(QApplication::translate("MainWindow", "Export", 0));
        dLog->setText(QApplication::translate("MainWindow", "Log", 0));
        Next->setText(QApplication::translate("MainWindow", "Next", 0));
        label_2->setText(QApplication::translate("MainWindow", "Drag and drop images here", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
