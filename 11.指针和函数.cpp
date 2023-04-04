//#include<iostream>
//using namespace std;
////对于地址层面的值传递，实参也会随之改变
//void swap(int* a, int* b)
//{
//	cout << "交换前num1=" << *a << endl;
//	cout << "交换前num2=" << *b << endl;
//	int temp = 0;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//	cout << "交换后num1=" << *a << endl;
//	cout << "交换前num2=" << *b << endl;
//	//如果不需要返回值，return可以不写
//}
//int main()
//{
//	int a = 10;
//	int b = 45;
//	swap(&a, &b);
//	//因为是对地址层面的数值交换，所以a,b虽然是实参，a,b中的内容也会发生改变
//	cout << "a的值为：" << a << endl;
//	cout << "a的值为：" << b << endl;
//	return 0;
//}
