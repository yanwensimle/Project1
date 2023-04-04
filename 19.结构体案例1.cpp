//#include<iostream>
//#include<string>
//using namespace std;
////定义一个student结构体，结构体参数为name,age,score
//struct student
//{
//	string name;
//	int score;
//};
////结构体中嵌套结构体时，所要用的的结构体要定义在嵌套之前
////teacher结构体中的属性包括name ,学生数组sarry
//struct teacher
//{
//	string name;
//	student sarry[5];
//};
////定义一个函数统计老师信息和他所带的学生的信息
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
////定义一个函数输出老师及其所带的学生的信息
//void outinfo(teacher* tarry, string* tname)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "教师姓名：" << tarry[i].name << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t学生姓名：" << tarry[i].sarry[j].name << ",学生成绩：" << tarry[i].sarry[j].score << endl;
//		}
//	}
//}
//int main()
//{
//	//生成一个随机数种子
//	srand((unsigned int)time(0));
//	//定义两个结构体数组，存储老师和学生的信息
//	teacher tarry[3];
//	student sarry[5];
//	//定义一个字符串数组
//	string tname[3] = {"张老师","王老师","刘老师"};
//	info(tarry, tname);
//	outinfo(tarry, tname);
//	system("pause");
//	return 0;
//}