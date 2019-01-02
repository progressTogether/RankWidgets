/********************************************************************************
** Form generated from reading UI file 'RankWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANKWIDGET_H
#define UI_RANKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RankWidgetClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QTableWidget *DisPalyTW;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *GenPBton;
    QSpacerItem *horizontalSpacer;
    QPushButton *SortPBton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *RankWidgetClass)
    {
        if (RankWidgetClass->objectName().isEmpty())
            RankWidgetClass->setObjectName(QStringLiteral("RankWidgetClass"));
        RankWidgetClass->resize(811, 517);
        centralWidget = new QWidget(RankWidgetClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 91, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        DisPalyTW = new QTableWidget(centralWidget);
        DisPalyTW->setObjectName(QStringLiteral("DisPalyTW"));

        verticalLayout->addWidget(DisPalyTW);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        GenPBton = new QPushButton(centralWidget);
        GenPBton->setObjectName(QStringLiteral("GenPBton"));

        horizontalLayout->addWidget(GenPBton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        SortPBton = new QPushButton(centralWidget);
        SortPBton->setObjectName(QStringLiteral("SortPBton"));

        horizontalLayout->addWidget(SortPBton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 90, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        RankWidgetClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(RankWidgetClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 811, 26));
        RankWidgetClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(RankWidgetClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        RankWidgetClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(RankWidgetClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        RankWidgetClass->setStatusBar(statusBar);

        retranslateUi(RankWidgetClass);

        QMetaObject::connectSlotsByName(RankWidgetClass);
    } // setupUi

    void retranslateUi(QMainWindow *RankWidgetClass)
    {
        RankWidgetClass->setWindowTitle(QApplication::translate("RankWidgetClass", "RankWidget", Q_NULLPTR));
        GenPBton->setText(QApplication::translate("RankWidgetClass", "\347\224\237\346\210\220", Q_NULLPTR));
        SortPBton->setText(QApplication::translate("RankWidgetClass", "\346\216\222\345\272\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RankWidgetClass: public Ui_RankWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANKWIDGET_H
