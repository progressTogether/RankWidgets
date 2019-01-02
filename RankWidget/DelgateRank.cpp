#include "DelgateRank.h"
#include "RealRank.h"

DelgateRank::DelgateRank()
{
	m_pRealRank = NULL;
	m_pRealRank = new RealRank;
}

DelgateRank::~DelgateRank()
{
	delete m_pRealRank;
	m_pRealRank = NULL;
}

void DelgateRank::setRankType(int type)
{
	m_pRealRank->setRankType(type);
}

int DelgateRank::SortAlgorithm(QList<int> InputL, QList<int>& OutputL)
{
	return m_pRealRank->SortAlgorithm(InputL, OutputL);
}