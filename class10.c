#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
	//常用内置函数-0表示假，非0表示真
	printf("%d\n", isupper('a'));
	printf("%d\n", islower('a'));
	printf("%d\n", isalpha('-'));	//返回的字符是否为字母
	//如果传入的是数字，表示的事ascii码
	printf("%d\n", isdigit(9));		//返回的字符是否为数字
	//转换大小写
	printf("大写：%c", toupper('9'));


	//思考题：如何将用户输入的小写数字持转成中文大写？
	int money;
	int	count = 0;
	int i = 0;
	int moneys[6]; //默认支持6位数字
	char unit[10][4] = { "零","壹","贰","叁","肆","伍","陆","柒","捌","玖" };
	//判断用户输入了几位数字？将每一位数字取出来
	printf("请输入金额：");
	scanf_s("%d", &money);
	while (money != 0)
	{
		moneys[i] = money % 10;
		money /= 10;	//去掉最后一位
		i++;
		count++;
	}
	printf("用户输入的数字一共有%d位！\n", count);
	printf("数组中的内容：\n");
	for (i = 0; i < count; i++)
	{
		printf("%d-%s\n", moneys[i], unit[moneys[i]]);

	}

/*
	int i;
	//打印所有的ASCII码对应的字符
	for (i = 0; i < 127; i++)
	{
		printf("%c\t", i);
	}
*/

	
	return 0;
}