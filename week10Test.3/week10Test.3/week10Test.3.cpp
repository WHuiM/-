// week10Test.3.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "week10Test.3.h"


// ���ǵ���������һ��ʾ��
WEEK10TEST3_API int nweek10Test3=0;

// ���ǵ���������һ��ʾ����
WEEK10TEST3_API int fnweek10Test3(void)
{
    return 42;
}
WEEK10TEST3_API int factorial(int n)
{
	if (n == 0)return 1;
	else return factorial(n - 1)*n;
}
// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� week10Test.3.h
Cweek10Test3::Cweek10Test3()
{
    return;
}

float FAC::convert(float deg)
	{
		return (3.14159/180)*deg;
	};

