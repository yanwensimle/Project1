#include<iostream>
#include<string>
using namespace std;
//冒泡排序法
//定义一个hero结构体
struct hero
{
	string name;
	int age;
	string sex;
};
//定义一个冒泡函数
//数组作为函数参数时，传入的是数组的首地址
void maopaosort(hero* arr, int len)
{
	for (int i = 0; i < len - 1; i++)//排序总轮数为元素个数-1
	{
		for (int j = 0; j < len - 1 - i; j++)//每轮的比较次数为元素个数-排序轮数-1
			//虽然数组传入的是地址，但仍可以使用数组元素的查看方式
			if (arr[j].age > arr[j + 1].age)//比较相邻的两个元素大小，如果前一个元素大于后一个元素，则交换它们两个的位置
			{
				hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
	}
}
void outarry(hero* arr, int len)
{
	for (int i = 0; i < len; i++)//遍历数组里的所有值
	{
		cout << "姓名：" << arr[i].name << "，年龄：" << arr[i].age << "，性别：" << arr[i].sex << endl; 
	}
}
int main()
{
	hero arry[5] =
	{
		{"刘备",25,"男"},
		{"张飞",24,"男"},
		{"关羽",26,"男"},
		{"赵云",20,"男"},
		{"貂蝉",18,"女"}
	};
	int len = sizeof(arry) / sizeof(arry[0]);
	/*
		比较相邻两个元素，如果第一个比第二个大就交换他们的位置
		每一对相邻元素做同样的工作，整型完毕后，找到第一个最大值。
		重复以上的步骤，每次比较次数-1，直到不需要比较
	*/
	maopaosort(arry, len);
	outarry(arry, len);
	system("pause");
	return 0;
}