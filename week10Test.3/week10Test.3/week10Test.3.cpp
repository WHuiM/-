// week10Test.3.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "week10Test.3.h"


// 这是导出变量的一个示例
WEEK10TEST3_API int nweek10Test3=0;

// 这是导出函数的一个示例。
WEEK10TEST3_API int fnweek10Test3(void)
{
    return 42;
}
WEEK10TEST3_API int factorial(int n)
{
	if (n == 0)return 1;
	else return factorial(n - 1)*n;
}
// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 week10Test.3.h
Cweek10Test3::Cweek10Test3()
{
    return;
}

float FAC::convert(float deg)
	{
		return (3.14159/180)*deg;
	};

