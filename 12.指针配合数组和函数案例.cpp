//#include<iostream>
//using namespace std;
//void maopaosort(int* arr, int len)
//{
//	for (int i = 0; i < len - 1; i++)//����������ΪԪ�ظ���-1
//	{
//		for (int j = 0; j < len - 1 - i; j++)//ÿ�ֵıȽϴ���ΪԪ�ظ���-��������-1
//			if (arr[j] > arr[j + 1])//�Ƚ����ڵ�����Ԫ�ش�С�����ǰһ��Ԫ�ش��ں�һ��Ԫ�أ��򽻻�����������λ��
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//	}
//}
//void outarry(int* arr, int len)
//{
//	for (int i = 0; i < 9; i++)//���������������ֵ
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
//		�Ƚ���������Ԫ�أ������һ���ȵڶ�����ͽ������ǵ�λ��
//		ÿһ������Ԫ����ͬ���Ĺ�����������Ϻ��ҵ���һ�����ֵ��
//		�ظ����ϵĲ��裬ÿ�αȽϴ���-1��ֱ������Ҫ�Ƚ�
//	*/
//	maopaosort(arr, len);
//	outarry(arr, len);
//	system("pause");
//	return 0;
//}