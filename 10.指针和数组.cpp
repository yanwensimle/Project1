//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//利用指针访问数组中的元素
//	cout <<"第一个元素为："<< arr[0] << endl;
//	//利用指针访问数组中的第一个元素
//	int* p = arr;
//	cout << "第一个元素为：" << *p << endl;
//	p++;//指针向后偏移，32位操作系统为4个字节，64位操作系统为8个字节
//	cout << "第二个元素为：" << *p << endl;
//	//用指针遍历数组中的元素
//	int* p1 = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "第"<<i+1<<"个元素为：" << *p1 << endl;
//		p1++;
//	}
//	system("pause");
//	return 0;
//}
