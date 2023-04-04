//函数与头文件建立联系
#include "swap.h"
void swap(int num1, int num2)
{
	cout << "交换前num1=" << num1 << endl;
	cout << "交换前num2=" << num2 << endl;
	int temp = 0;
	temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "交换后num1=" << num1 << endl;
	cout << "交换前num2=" << num2 << endl;
	//如果不需要返回值，return可以不写
}