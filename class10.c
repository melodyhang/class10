#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main()
{
	/*常用内置函数*/



	//常用内置函数-0表示假，非0表示真

/*
	printf("%d\n", isupper('a'));
	printf("%d\n", islower('a'));
	printf("%d\n", isalpha('-'));	//返回的字符是否为字母
	//如果传入的是数字，表示的事ascii码
	printf("%d\n", isdigit(9));		//返回的字符是否为数字
	//转换大小写
	printf("大写：%c", toupper('9'));
*/

/*
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
*/

/*
	int i;
	//打印所有的ASCII码对应的字符
	for (i = 0; i < 127; i++)
	{
		printf("%c\t", i);
	}
*/


/*
	//ceil - 进一法		floor - 去尾法
	//如果是负数，规律相反
	double test = -789.567;
	printf("%lf的绝对值是：%lf\n", test, fabs(test));
*/

/*
	printf("这里是普通文字，非常普通！\n");
	system("color 4E");		//改变背景颜色
	system("cls");			//清屏——可以做简单的动画效果
	system("shutdown /r /t 1800");	//1800s后自动关机
	system("shutdown /a");			//取消自动关机
*/

	//内置函数补充
	//malloc()		//动态内存分配:编译的时候没有内存，程序运行后，再分配内存
	//calloc()		使用的时候会初始化数组元素
	int i;
	int* ptr_nums;
	ptr_nums = (int*)malloc(sizeof(int) * 5);	//为前面的指针动态分配了20个字节的空间
	//ptr_nums = calloc(5, sizeof(int));
	//等价于：int nums[5]
	//尾指针动态分配空间后，指针就变成了数组
	
	for (i = 0; i < 5; i++)
	{
		printf("请输入第%d个元素：", i + 1);
		scanf_s("%d", ptr_nums + i);
	}
	printf("数组元素为：\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d\t", *(ptr_nums + i));
	}
	free(ptr_nums);	//释放动态分配的内存
	ptr_nums = NULL;	//良好的编程习惯


	return 0;
}