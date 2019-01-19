#pragma once
#include"CommonType.h"

typedef enum _MSG_TYPE : COInt64
{
	MSG_TYPE_ONE = 1 << 1,
	MSG_TYPE_TWO = 1 << 2,
	MSG_TYPE_THREE = 1 << 3,
	MSG_TYPE_FOUR = 1 << 4,
	MSG_TYPE_FIVE = 1 << 5,
	MSG_TYPE_SIX = 1 << 6,
	MSG_TYPE_SEVEN = 1 << 7
} MSG_TYPE;