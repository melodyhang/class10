#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
	//�������ú���-0��ʾ�٣���0��ʾ��
	printf("%d\n", isupper('a'));
	printf("%d\n", islower('a'));
	printf("%d\n", isalpha('-'));	//���ص��ַ��Ƿ�Ϊ��ĸ
	//�������������֣���ʾ����ascii��
	printf("%d\n", isdigit(9));		//���ص��ַ��Ƿ�Ϊ����
	//ת����Сд
	printf("��д��%c", toupper('9'));


	//˼���⣺��ν��û������Сд���ֳ�ת�����Ĵ�д��
	int money;
	int	count = 0;
	int i = 0;
	int moneys[6]; //Ĭ��֧��6λ����
	char unit[10][4] = { "��","Ҽ","��","��","��","��","½","��","��","��" };
	//�ж��û������˼�λ���֣���ÿһλ����ȡ����
	printf("�������");
	scanf_s("%d", &money);
	while (money != 0)
	{
		moneys[i] = money % 10;
		money /= 10;	//ȥ�����һλ
		i++;
		count++;
	}
	printf("�û����������һ����%dλ��\n", count);
	printf("�����е����ݣ�\n");
	for (i = 0; i < count; i++)
	{
		printf("%d-%s\n", moneys[i], unit[moneys[i]]);

	}

/*
	int i;
	//��ӡ���е�ASCII���Ӧ���ַ�
	for (i = 0; i < 127; i++)
	{
		printf("%c\t", i);
	}
*/

	
	return 0;
}