#pragma once
#include"Counter.h"

class User
{
public:
	void KillMonster()
	{
		m_Counter.counting();
	}

	Counter m_Counter; //객체를 만들어야 위에 식처럼 사용 할 수 있다.
};