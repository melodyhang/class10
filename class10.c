#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
	//�������ú���
	printf("%d\n", isupper('a'));
	printf("%d\n", islower('a'));
	printf("%d\n", isalpha('-'));	//���ص��ַ��Ƿ�Ϊ��ĸ
	//�������������֣���ʾ����ascii��
	printf("%d\n", isdigit(9));		//���ص��ַ��Ƿ�Ϊ����
	return 0;
}