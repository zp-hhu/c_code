/*
Name: 判断年龄层
Copyright: 丘远艺
Author: 丘远艺
Date: 06/04/20 17:01
Description: 输入年龄，判断年龄层
*/
#include <stdio.h>
int main()
{
	int age, year;//定义两个变量，age代表年龄，year代表年龄段 
	printf("请输入你的年龄：");
	scanf("%d", &age);
	//进行输入是否正确的判断 
	if(age > 90)
	{
		printf("您的年龄超过了判断范围\n");
		printf("请重新输入你的年龄：");
		scanf("%d", &age);
	}
	year = age / 6;//把输入的年龄age换算成年龄段，在switch中使用 
	switch(year)
	{
		case 0 ... 2: printf("您现在是少年阶段");
				 break;
		case(3):
		case(4):
		case(5): printf("您现在是青年阶段");
				 break;
		case(6):
		case(7):
		case(8): printf("您现在是中年阶段");
				 break;
		case(9):
		case(10):
		case(11):
		case(12):
		case(13):
		case(14):
		case(15): printf("您现在是老年阶段");
				  break;
		default: printf("祝您长命百岁！！");
	}
	return 0;
}
