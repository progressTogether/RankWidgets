#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_RankWidget.h"

#include<qDebug>
#include<QTime>
#include<QStringList>
#include<QMap>

#include "DelgateRank.h"
class RankWidget : public QMainWindow
{
	Q_OBJECT

public:
	RankWidget(QWidget *parent = Q_NULLPTR);

private:
	void InitParameter();
	void ConnectSignal();
	void DisplayInfoInTableWidget(int column);
public slots:
	void generateRandomNumberSlot();
	void sortRandomNumberSlot();
private:
	Ui::RankWidgetClass		ui;
	int						m_genNum;
	DelgateRank*			m_pDelgateRank;
	QList<int>				m_generateList;
	QList<int>				m_afterSortList;
	short					m_sortMethodNum;
	QStringList				m_sortMethodList;
	QMap<int, QList<int>>	m_storyNumberMap;
};
