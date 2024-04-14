//函数的调用:
//	传值调用
//		函数的形参和实参分别占有不同内存块，对形参的修改不会影响实参
//	传址调用
//		传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式。
//		这种传参方式可以让函数和函数外边的变量建立起正真的联系，也就是函数内部可以直接操作函数外部的变量。

#include <stdio.h>

int is_prime(int n)
{
	//2 -> n-1 之间的数字
	int j = 0;
	for (j = 2; j < n; j++)
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	//100 - 200之间的素数
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//判断i是否为素数
		if (is_prime(i) == 1)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}