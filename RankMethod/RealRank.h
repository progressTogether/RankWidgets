#pragma once
#include "AbstractRank.h"
#include "AbstractStrategy.h"

#include "realrank_global.h"

class REALRANK_EXPORT RealRank :
	public AbstractRank
{
public:
	RealRank();
	~RealRank();
	virtual void setRankType( int type );
	virtual int SortAlgorithm(QList<int> InputL, QList<int>& OutputL);

private:
	int m_rankType;
	AbstractStrategy* m_pDetailRank;
};

