#include<iostream>
#include<string>
using namespace std;
//ð������
//����һ��hero�ṹ��
struct hero
{
	string name;
	int age;
	string sex;
};
//����һ��ð�ݺ���
//������Ϊ��������ʱ���������������׵�ַ
void maopaosort(hero* arr, int len)
{
	for (int i = 0; i < len - 1; i++)//����������ΪԪ�ظ���-1
	{
		for (int j = 0; j < len - 1 - i; j++)//ÿ�ֵıȽϴ���ΪԪ�ظ���-��������-1
			//��Ȼ���鴫����ǵ�ַ�����Կ���ʹ������Ԫ�صĲ鿴��ʽ
			if (arr[j].age > arr[j + 1].age)//�Ƚ����ڵ�����Ԫ�ش�С�����ǰһ��Ԫ�ش��ں�һ��Ԫ�أ��򽻻�����������λ��
			{
				hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
	}
}
void outarry(hero* arr, int len)
{
	for (int i = 0; i < len; i++)//���������������ֵ
	{
		cout << "������" << arr[i].name << "�����䣺" << arr[i].age << "���Ա�" << arr[i].sex << endl; 
	}
}
int main()
{
	hero arry[5] =
	{
		{"����",25,"��"},
		{"�ŷ�",24,"��"},
		{"����",26,"��"},
		{"����",20,"��"},
		{"����",18,"Ů"}
	};
	int len = sizeof(arry) / sizeof(arry[0]);
	/*
		�Ƚ���������Ԫ�أ������һ���ȵڶ�����ͽ������ǵ�λ��
		ÿһ������Ԫ����ͬ���Ĺ�����������Ϻ��ҵ���һ�����ֵ��
		�ظ����ϵĲ��裬ÿ�αȽϴ���-1��ֱ������Ҫ�Ƚ�
	*/
	maopaosort(arry, len);
	outarry(arry, len);
	system("pause");
	return 0;
}