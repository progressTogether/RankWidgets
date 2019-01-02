#include "RealRank.h"

#include "RankStrategyDirect.h"
#include "RankStrategyBubble.h"

RealRank::RealRank()
{
	m_rankType = 1;
	m_pDetailRank = NULL;
}

RealRank::~RealRank()
{
}

void RealRank::setRankType(int type)
{
	m_rankType = type;
}

int RealRank::SortAlgorithm(QList<int> InputL, QList<int>& OutputL)
{
	int errorCode;
	if (m_rankType == 1)
	{
		m_pDetailRank = new RankStrategyDirect();
		errorCode = m_pDetailRank->SortAlgorithm(InputL, OutputL);
	}
	else if (m_rankType == 2)
	{
		m_pDetailRank = new RankStrategyBubble();
		errorCode = m_pDetailRank->SortAlgorithm(InputL, OutputL);
	}
	else
	{
		m_pDetailRank = new RankStrategyDirect();
		errorCode = m_pDetailRank->SortAlgorithm(InputL, OutputL);
	}

	delete m_pDetailRank;
	m_pDetailRank = NULL;

	return errorCode;
}