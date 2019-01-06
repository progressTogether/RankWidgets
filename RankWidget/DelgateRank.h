#pragma once

#include "RealRank.h"
class DelgateRank :
	public AbstractRank
{
public:

	DelgateRank();
	virtual ~DelgateRank();
	virtual void setRankType(int type);
	virtual int SortAlgorithm(QList<int> InputL, QList<int>& OutputL);

private:
	AbstractRank* m_pRealRank;
};

