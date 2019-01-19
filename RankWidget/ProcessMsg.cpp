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
	//log���
	//"00000000000000000000000000000001"��Ϊ1������������������ԭ����ǲ���
	//"11111111111111111111111111111110"��Ϊ-2�Ǹ�������������ͨ������ķ�ʽ�洢
	//-2��ԭ����
	//100000000000000000000000000000010

	//ԭ��䲹�룺ԭ��䲹��ȥ������λȡ�� �ټ�1
	//ԭ��䲹��ȥ������λȡ��
	//111111111111111111111111111111101
	//�ټ�1
	//111111111111111111111111111111110

	//�����ԭ�룺�����ԭ��ȥ������λȡ�� �ټ�1
	//��ȡ��ǰ��1����ȡ�����1��Ч����һ���ġ���ͺ�-3-1=-��3+1����һ������

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