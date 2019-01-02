#pragma once
#include "AbstractStrategy.h"
class RankStrategyBubble :
	public AbstractStrategy
{
public:
	RankStrategyBubble();
	virtual ~RankStrategyBubble();
	virtual int SortAlgorithm(QList<int> InputL, QList<int>& OutputL);
};

