#include "RankDemo.h"

RankDemo::RankDemo()
{
}

void RankDemo::addDemoIntoList( AbstractDemo* pAbDemo )
{
	m_demoList.push_back(pAbDemo);
}
