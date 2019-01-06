#pragma once
#include <QList>

class AbstractRank
{
public:

	AbstractRank()
	{
	}

	virtual ~AbstractRank()
	{
	}
	virtual void setRankType(int type) = 0;
	virtual int SortAlgorithm(QList<int> InputL, QList<int>& OutputL) = 0;
};

