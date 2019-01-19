#pragma once
#include"../CommonType/MsgType.h"

#include<QDebug>
#include<QString>

/*
 本类中主要阐述了基本的位运算操作符
 1、基本的位运算操作符
	或、与、异或、
 2、通过掩码和锁表示更多的信息
 3、大小端知识
 4、定长协议和变长协议的处理
*/

/*
1、字节的基本知识
a、大小
	1字节等于8位
b、编码格式
	ASCII码：
		一个英文字母（不分大小写）占一个字节的空间
		一个二进制数字序列，在计算机中作为一个数字单元，一般为8位二进制数。
		换算为十进制 ，最小值-128，最大值127。如一个ASCII码就是一个字节。
	UTF-8编码
		一个英文字符等于一个字节，一个中文（含繁体）等于三个字节。
		中文标点占三个字节，英文标点占一个字节。
	Unicode编码
		一个英文等于两个字节，一个中文（含繁体）等于两个字节。
		中文标点占两个字节，英文标点占两个字节。
c、换算关系
	1B（byte，字节）= 8 bit；
	1KB（Kilobyte，千字节）=1024B= 10^3 B；
	1MB（Megabyte，兆字节，百万字节，简称“兆”）=1024KB= 10^6 B；
	1GB（Gigabyte，吉字节，十亿字节，又称“千兆”）=1024MB= 10^9 B；
	1TB（Terabyte，万亿字节，太字节）=1024GB= 10^12 B； 
d、基本操作
	按位取反(~)：
	把原来的二进制得到一个新的二进制，原来是0的则变为1,1的则变为0。

	补码：
	补码=符号位(最高位)以后按位取反再加1.
	负数是补码，正数原码就是补码啦
	计算机是以二进制补码来存储的

	按位与and(&)
	相同位的两个数字都为1，则为1；若有一个不为1，则为0。

	按位异或(^)
	相同位不同则为1，相同则为0

	按位或(|)：
	相同位只要一个为1即为1。

	右移(>>)
	2~1表示2的一次方 2~4表示2的四次方
	把1的位置向右移n位，超出的就舍掉
	右移1位即除以2~1；，并且取整。
	n>>4==n/(2~4)  
	15=	  0000 0000 0000 0000 0000 0000 0000 1111
	15>>1=0000 0000 0000 0000 0000 0000 0000 0111

	左移(<<)
	把1的位置向左移n位,超出的就舍掉
	左移1位即乘以21；，并且取整。
*/

struct MSG_INFO_TYPE
{
	COUInt32 info_a;
	COUInt32 info_b;
	COUInt32 info_c;
	COUInt32 info_d;

	COUInt32 info_e;
	COUInt32 info_f;
	COUInt32 info_g;
	COUInt32 info_h;

	COUInt32 info_w;
	COUInt32 info_q;
};

class ProcessMsg
{
public:
	ProcessMsg();
	~ProcessMsg();

	/*
	【in】具体的MSG_INFO_TYPE结构体信息，updateFlag那些位上的信息需要更新
	【out】那些位置的信息被更新了，因为m_lock的原因，所以updateFlag有可能不等于最后的返回值
	*/
	COInt32 updateInnerData( MSG_INFO_TYPE info, COInt32 updateFlag);
	
	void displayBitResult();
	//void outLogByBit( );
private: 
	COUInt32 m_mask;			//掩码，某位上的信息更新那么该位的就会被赋值为1
	COUInt32 m_lock;			//锁，当该位的标志设置为1表示该=位不会再被更新

	MSG_INFO_TYPE m_info;
};

