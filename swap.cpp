//������ͷ�ļ�������ϵ
#include "swap.h"
void swap(int num1, int num2)
{
	cout << "����ǰnum1=" << num1 << endl;
	cout << "����ǰnum2=" << num2 << endl;
	int temp = 0;
	temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "������num1=" << num1 << endl;
	cout << "����ǰnum2=" << num2 << endl;
	//�������Ҫ����ֵ��return���Բ�д
}