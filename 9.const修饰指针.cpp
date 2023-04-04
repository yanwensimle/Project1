//#include<iostream>
//using namespace std;
////const修饰指针，常量指针
////const修饰常量，指针常量
////const即修饰指针，又修饰常量
//int main()
//{
//	int a = 10;
//	int b = 89;
//	//const int * p,常量指针，指针可以修改，指针中的内容不能修改；
//	const int * p1 = &a;
//	p1 = &b;//正常执行
//	//*p = 100;会报错
//	//int * const p，指针常量：指针不可修改，指针中的内容可以修改
//	int* const p2 = &b;
//	//p = &a;报错
//	*p2 = 100;
//	//const int * const p,既修饰指针又修饰常量，指针和指针中的内容都不可更改
//	const int* const p3 = &a;
//	//p3 = &b;报错
//	//*p = 45;报错
//	cout << *p3 << endl;
//	system("pause");
//	return 0;
//}
