// 物流管理系统 框架.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <cmath>
#include <exception>
#include <string.h>
#include <stdio.h>
#include <sstream>
#include <cstdio>
#include <string>

using namespace std;
string No[26] = { "a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z" };
string name[26] = { " " };
int count[26] = { 0 };
void in();//入库系统
void out();//出库系统
void manage();//仓库盘点系统

int main()
{
	printf("%s", "欢迎进入物流管理系统\n");
	printf("%s", "请选择你要进行的操作\n1.物品入库   2.物品出库   3.物品出库\n");
	int a;
	while (scanf_s("%d", &a))
	{
		if (a == 1)
			void in();
		else if (a == 2)
			void out();
		else if (a == 3)
			void manage();
		else
		{
			printf("%s", "输入错误，请重新输入\n");
			continue;
		}
		printf("%s", "\n\n\n请选择你要进行的操作\n1.物品入库   2.物品出库   3.物品出库\n");
	}
}

void in()
{
	string line;
	stringstream ss;
	printf("%s", "物品入库\n请输入需要入库的商品和数量（商品序号/名称 数量）\n");
	getline(cin, line);
	ss.str(line);
	//
}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
