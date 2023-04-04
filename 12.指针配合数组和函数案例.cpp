//#include<iostream>
//using namespace std;
//void maopaosort(int* arr, int len)
//{
//	for (int i = 0; i < len - 1; i++)//排序总轮数为元素个数-1
//	{
//		for (int j = 0; j < len - 1 - i; j++)//每轮的比较次数为元素个数-排序轮数-1
//			if (arr[j] > arr[j + 1])//比较相邻的两个元素大小，如果前一个元素大于后一个元素，则交换它们两个的位置
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//	}
//}
//void outarry(int* arr, int len)
//{
//	for (int i = 0; i < 9; i++)//遍历数组里的所有值
//	{
//		cout << arr[i] << " ";
//	}
//}
//int main()
//{
//
//	int arr[9] = { 80,20,100,45,55,5,78,56,28 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	/*
//		比较相邻两个元素，如果第一个比第二个大就交换他们的位置
//		每一对相邻元素做同样的工作，整型完毕后，找到第一个最大值。
//		重复以上的步骤，每次比较次数-1，直到不需要比较
//	*/
//	maopaosort(arr, len);
//	outarry(arr, len);
//	system("pause");
//	return 0;
//}