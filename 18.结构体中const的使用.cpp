//#include<iostream>
//#include<string>
//using namespace std;
////定义一个student结构体，结构体参数为name,age,score
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
////函数的参数通过指针形式传递，可以减少内存空间，并且可以减少副本的产生
//void outputstu(const student* p)
//{
////	p->name = "张三";//使用const可以保证指针中的内容不被更改，防止我们误操作
//	cout << p->name << endl;
//}
//int main()
//{
//	//创建结构体变量
//	student stu = { "王五",45,78 };
//	cout << sizeof(string) << endl;
//	outputstu(&stu);//通过地址传递只需占用四个字节，而通过student结构体传递，结构体变量中的内容越多所占内存越大
//	system("pause");
//	return 0;
//}