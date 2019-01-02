#include "RankWidget.h"
#pragma execution_character_set("utf-8")
RankWidget::RankWidget(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	InitParameter();
	ConnectSignal();
}

void RankWidget::InitParameter()
{
	m_genNum = 5;
	m_pDelgateRank = NULL;
	m_generateList.clear();
	m_afterSortList.clear();
	m_pDelgateRank = new DelgateRank;

	m_sortMethodList.append("随机生成数字:");
	m_sortMethodList.append("直接排序:");
	m_sortMethodNum = m_sortMethodList.size();

}

void RankWidget::ConnectSignal()
{
	connect(ui.GenPBton, SIGNAL(clicked()),this, SLOT(generateRandomNumberSlot()));
	connect(ui.SortPBton, SIGNAL(clicked()), this, SLOT(sortRandomNumberSlot()));
}

void RankWidget::DisplayInfoInTableWidget(int column)
{
	//取消表头
	ui.DisPalyTW->verticalHeader()->setVisible(false);
	ui.DisPalyTW->horizontalHeader()->setVisible(false);

	ui.DisPalyTW->setColumnCount(column);
	ui.DisPalyTW->setRowCount(m_sortMethodNum);

	QTableWidgetItem *newItem = NULL;
	int tmpV = 0;
	for (int i = 0; i < m_sortMethodNum; i++)
	{
		for (int j = 0; j < m_genNum + 1; j++)
		{
			//如果是第一列
			if (0 == j)
			{
				if ( i <= m_sortMethodList.size() )
				{
					newItem = new QTableWidgetItem(m_sortMethodList[i]);
				}
				
			}
			else
			{
				//
				if (m_storyNumberMap.contains(i))
				{
					int m = j - 1;
					if (m < m_storyNumberMap[i].size())
					{
						tmpV = m_storyNumberMap[i].at(m);
						newItem = new QTableWidgetItem(tr("%1").arg(tmpV));
					}

				}
				else
				{
					continue;
				}

			}

			newItem->setTextAlignment(Qt::AlignJustify);
			newItem->setFlags(Qt::ItemIsEditable);
			newItem->setFont(QFont("Helvetica")); //设置字体
			newItem->setBackgroundColor(QColor(255, 255, 255)); //设置单元格背景颜色
			newItem->setTextColor(QColor(200, 111, 30)); //设置文字颜色

			ui.DisPalyTW->setItem(i,j, newItem);
		}
	}


	//for (short i = 1; i < column; i++)
	//{
	//	tmpV = m_generateList[i - 1];
	//	genItem = new QTableWidgetItem(tr("%1").arg(tmpV));
	//	genItem->setTextAlignment(Qt::AlignJustify);
	//	genItem->setFlags(Qt::ItemIsEditable);
	//	genItem->setFont(QFont("Helvetica")); //设置字体
	//	genItem->setBackgroundColor(QColor(255, 255, 255)); //设置单元格背景颜色
	//	genItem->setTextColor(QColor(200, 111, 30)); //设置文字颜色
	//
	//	tmpV = m_afterSortList[i - 1];
	//	sortItem = new QTableWidgetItem(tr("%1").arg(tmpV));
	//	sortItem->setTextAlignment(Qt::AlignJustify);
	////	sortItem->setFlags(Qt::ItemIsSelectable| Qt::ItemIsDropEnabled);
	//	sortItem->setFont(QFont("Helvetica")); //设置字体
	//	sortItem->setBackgroundColor(QColor(255, 255, 255)); //设置单元格背景颜色
	//	sortItem->setTextColor(QColor(200, 111, 30)); //设置文字颜色
	//
	//	ui.DisPalyTW->setItem(0, i, genItem);
	//	ui.DisPalyTW->setItem(1, i, sortItem);
	//}
}

void RankWidget::generateRandomNumberSlot()
{
	m_generateList.clear();
	qsrand(QTime(0, 0, 0).secsTo(QTime::currentTime()));
	for (int i = 0; i < m_genNum; i++)
	{
		int tmpV = qrand() % 100;
		m_generateList.append(tmpV);
	}
	m_storyNumberMap.insert(0, m_generateList);
}

void RankWidget::sortRandomNumberSlot()
{
	m_afterSortList.clear();
	m_pDelgateRank->setRankType(2);
	m_pDelgateRank->SortAlgorithm(m_generateList, m_afterSortList);
	m_storyNumberMap.insert(1, m_afterSortList);
	DisplayInfoInTableWidget(m_genNum +1 );
	
}
