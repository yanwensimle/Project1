//#include<iostream>
//#include<string>
//using namespace std;
////����һ��student�ṹ�壬�ṹ�����Ϊname,age,score
//struct student
//{
//	string name;
//	int score;
//};
////�ṹ����Ƕ�׽ṹ��ʱ����Ҫ�õĵĽṹ��Ҫ������Ƕ��֮ǰ
////teacher�ṹ���е����԰���name ,ѧ������sarry
//struct teacher
//{
//	string name;
//	student sarry[5];
//};
////����һ������ͳ����ʦ��Ϣ����������ѧ������Ϣ
//void info(teacher* tarry, string* tname)
//{
//	string sname = "ABCDE";
//	for (int i = 0; i < 3; i++)
//	{
//		tarry[i].name = tname[i];
//		for (int j = 0; j < 5; j++)
//		{
//			tarry[i].sarry[j].name = "Stufent_";
//			tarry[i].sarry[j].name += sname[j];
//			int random = rand() % 41 + 60;
//			tarry[i].sarry[j].score = random;
//		}
//	}
//}
////����һ�����������ʦ����������ѧ������Ϣ
//void outinfo(teacher* tarry, string* tname)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "��ʦ������" << tarry[i].name << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\tѧ��������" << tarry[i].sarry[j].name << ",ѧ���ɼ���" << tarry[i].sarry[j].score << endl;
//		}
//	}
//}
//int main()
//{
//	//����һ�����������
//	srand((unsigned int)time(0));
//	//���������ṹ�����飬�洢��ʦ��ѧ������Ϣ
//	teacher tarry[3];
//	student sarry[5];
//	//����һ���ַ�������
//	string tname[3] = {"����ʦ","����ʦ","����ʦ"};
//	info(tarry, tname);
//	outinfo(tarry, tname);
//	system("pause");
//	return 0;
//}