#pragma once

#include "rankdemo_global.h"

#include<QList>
#include"AbstractDemo.h"

class AbstractDemo;
class RANKDEMO_EXPORT RankDemo
{
public:
	RankDemo();

	void addDemoIntoList( AbstractDemo* pAbDemo );
private:
	QList<AbstractDemo*> m_demoList;
};
