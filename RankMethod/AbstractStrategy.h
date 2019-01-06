#pragma once
#include <QList>
class AbstractStrategy
{
public:

	AbstractStrategy()
	{
	}

	virtual ~AbstractStrategy()
	{
	}
	virtual int SortAlgorithm(QList<int> InputL, QList<int>& OutputL) = 0;
};

