#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main()
{
	/*�������ú���*/



	//�������ú���-0��ʾ�٣���0��ʾ��

/*
	printf("%d\n", isupper('a'));
	printf("%d\n", islower('a'));
	printf("%d\n", isalpha('-'));	//���ص��ַ��Ƿ�Ϊ��ĸ
	//�������������֣���ʾ����ascii��
	printf("%d\n", isdigit(9));		//���ص��ַ��Ƿ�Ϊ����
	//ת����Сд
	printf("��д��%c", toupper('9'));
*/

/*
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
*/

/*
	int i;
	//��ӡ���е�ASCII���Ӧ���ַ�
	for (i = 0; i < 127; i++)
	{
		printf("%c\t", i);
	}
*/


/*
	//ceil - ��һ��		floor - ȥβ��
	//����Ǹ����������෴
	double test = -789.567;
	printf("%lf�ľ���ֵ�ǣ�%lf\n", test, fabs(test));
*/

/*
	printf("��������ͨ���֣��ǳ���ͨ��\n");
	system("color 4E");		//�ı䱳����ɫ
	system("cls");			//���������������򵥵Ķ���Ч��
	system("shutdown /r /t 1800");	//1800s���Զ��ػ�
	system("shutdown /a");			//ȡ���Զ��ػ�
*/

	//���ú�������
	//malloc()		//��̬�ڴ����:�����ʱ��û���ڴ棬�������к��ٷ����ڴ�
	//calloc()		ʹ�õ�ʱ����ʼ������Ԫ��
	int i;
	int* ptr_nums;
	ptr_nums = (int*)malloc(sizeof(int) * 5);	//Ϊǰ���ָ�붯̬������20���ֽڵĿռ�
	//ptr_nums = calloc(5, sizeof(int));
	//�ȼ��ڣ�int nums[5]
	//βָ�붯̬����ռ��ָ��ͱ��������
	
	for (i = 0; i < 5; i++)
	{
		printf("�������%d��Ԫ�أ�", i + 1);
		scanf_s("%d", ptr_nums + i);
	}
	printf("����Ԫ��Ϊ��\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d\t", *(ptr_nums + i));
	}
	free(ptr_nums);	//�ͷŶ�̬������ڴ�
	ptr_nums = NULL;	//���õı��ϰ��


	return 0;
}