#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
	//常用内置函数
	printf("%d\n", isupper('a'));
	printf("%d\n", islower('a'));
	printf("%d\n", isalpha('-'));	//返回的字符是否为字母
	//如果传入的是数字，表示的事ascii码
	printf("%d\n", isdigit(9));		//返回的字符是否为数字
	return 0;
}