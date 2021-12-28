//避免野指针

//1.将指针初始化
//  若不知道初始化的值，就初始化为空（NULL）
#include <stdio.h>

int main()
{
	int a = 10;
	int* pa = &a;//初始化
	int* p = NULL;//NULL -- #define ((NULL *)0);
}

//2.小心指针越界
 
//3.指针指向的空间不再使用时，及时置成NULL（空）

int main()
{
	int a = 10;
	int* p = &a;
	*p = 20;
	//试用结束之后，即使置成null
	p = NULL;
}

//4.使用之前检查指针的有效性
int main()
{
	int a = 10;
	int* p = &a;
	*p = 20;
	p = NULL;
	if (p != NULL)
	{
      
	}
}