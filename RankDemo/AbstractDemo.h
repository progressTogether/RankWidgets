#pragma once
#include"RankDemo.h"

class RankDemo;

class AbstractDemo
{
public:
	AbstractDemo( RankDemo*  pRankD );
	~AbstractDemo();



protected:
	virtual void executeTrigerComand() = 0;
	virtual void executeTrigerCyclicity() = 0;
	void attachRankDemo();

private:
	RankDemo*  m_pRankD;
};

