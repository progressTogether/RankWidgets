#pragma once
#include "AbstractStrategy.h"
class RankStrategyDirect :
	public AbstractStrategy
{
public:
	RankStrategyDirect();
	virtual ~RankStrategyDirect();
	virtual int SortAlgorithm(QList<int> InputL, QList<int>& OutputL);

private:
	int FindMinValueIndex( QList<int> inPut );
};

