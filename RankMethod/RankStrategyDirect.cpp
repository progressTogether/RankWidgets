#include "RankStrategyDirect.h"
#include<qDebug>


RankStrategyDirect::RankStrategyDirect()
{
}


RankStrategyDirect::~RankStrategyDirect()
{
}


int RankStrategyDirect::SortAlgorithm(QList<int> InputL, QList<int>& OutputL)
{
	int errorCode = 0;
	if (InputL.size() ==  0)
	{
		errorCode = -1;
		return errorCode;
	}
	OutputL.clear();
	int IndexV = -1;
	int minValue = 0;
	qDebug() << "size:" << InputL.size();
	int size = InputL.size();
	for (size_t i = 0; i < size; i++)
	{
		IndexV = FindMinValueIndex(InputL);
		minValue = InputL[IndexV];
		OutputL.append(minValue);
		InputL.removeAt(IndexV);
	}
	return errorCode;
}

int RankStrategyDirect::FindMinValueIndex(QList<int> inPut)
{
	int outIntex = -1;
	int tmpV = inPut[0];
	for (int i = 0; i < inPut.size(); i++)
	{
		if ( tmpV >= inPut[i] )
		{
			outIntex = i;
			tmpV = inPut[i];
		}
	}
	return outIntex;
}
