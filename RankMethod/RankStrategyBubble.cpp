#include "RankStrategyBubble.h"



RankStrategyBubble::RankStrategyBubble()
{
}


RankStrategyBubble::~RankStrategyBubble()
{
}

int RankStrategyBubble::SortAlgorithm(QList<int> InputL, QList<int>& OutputL)
{
	int errorCode = -1;
	int size = InputL.size();
	if ( 0 == size )
	{
		return errorCode;
	}
	int tmpMax = 0;
	int tmpMin = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			tmpMin = InputL[j];
			tmpMax = InputL[j + 1];
			if ( tmpMin > tmpMax )
			{
				InputL.swap(j,j+1);
			}
		}
	}
	OutputL = InputL;
	return errorCode;
}
