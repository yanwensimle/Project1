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
////结构体中嵌套结构体时，所要用的的结构体要定义在嵌套之前
//struct teacher
//{
//	string name;
//	int id;
//	int age;
//	student stu;
//};
//
//int main()
//{
//	//创建两个结构体变量
//	student stu = { "王五",45,78 };
//	teacher tec = { "张三",156880,45,stu };
//	cout << "老师姓名：" << tec.name << ",老师编号：" << tec.id << ",老师的年龄：" << tec.age
//		 << ",老师带的学生姓名："<<tec.stu.name<<",老师所带学生的成绩为："<<tec.stu.score<<endl;
//	system("pause");
//	return 0;
//}