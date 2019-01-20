#include "AbstractDemo.h"

AbstractDemo::AbstractDemo( RankDemo*  pRankD )
{
	m_pRankD = pRankD;
	if ( NULL != m_pRankD )
	{
		attachRankDemo();
	}
}


AbstractDemo::~AbstractDemo()
{
}

void AbstractDemo::attachRankDemo()
{
	m_pRankD->addDemoIntoList(this);
}