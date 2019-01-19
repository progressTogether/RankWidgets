#include "ProcessMsg.h"

ProcessMsg::ProcessMsg()
{
	m_mask = 0;
	m_lock = 0;
}


ProcessMsg::~ProcessMsg()
{
}

void ProcessMsg::displayBitResult()
{
	COInt32 member = 1;
	COInt32 invertMember = ~member;
	QString displayResult;
	QString invertDisplayResult;

	COInt16 tmp;
	for (size_t i = 0; i < 8 * sizeof(COInt32); i++)
	{
		tmp = (member >> i) & 1;
		displayResult.push_front(QString("%1").arg(tmp));

		tmp = (invertMember >> i) & 1;
		invertDisplayResult.push_front(QString("%1").arg(tmp));
	}
	//log输出
	//"00000000000000000000000000000001"因为1是正数，所以正数的原码就是补码
	//"11111111111111111111111111111110"因为-2是负数，所以它是通过补码的方式存储
	//-2的原码是
	//100000000000000000000000000000010

	//原码变补码：原码变补码去除符号位取反 再加1
	//原码变补码去除符号位取反
	//111111111111111111111111111111101
	//再加1
	//111111111111111111111111111111110

	//补码变原码：补码变原码去除符号位取反 再加1
	//在取反前减1和在取反后加1的效果是一样的。这就和-3-1=-（3+1）是一个道理

	qDebug() << displayResult<<endl<< invertDisplayResult;
}

COInt32 ProcessMsg::updateInnerData(MSG_INFO_TYPE info, COInt32 updateFlag )
{
	COInt32 update = 0;
	if ((0 != updateFlag & MSG_TYPE::MSG_TYPE_ONE) && (0 == m_lock & MSG_TYPE::MSG_TYPE_ONE))
	{
		m_info.info_a = info.info_a;
		update |= MSG_TYPE::MSG_TYPE_ONE;
		m_mask |= MSG_TYPE::MSG_TYPE_ONE;
	}

	return update;
}