#include <stdio.h>

int main(void)
{
	//����ڷ� ���� 3������ �Է¹޾� �� �� ���� ū ���� ����ϴ� ���α׷�
	//if���� ����ϰ� �����̹� ������� �����
	//[�ִ� �� ���ϱ�]
	//int a, b, c;
	//int nMax;
	//printf("�� ������ �Է��Ͻÿ�");
	//scanf_s("%d %d %d", &a, &b, &c);
	//nMax = a;

	//if (nMax <= b)  //1 3 2
	//{
	//	nMax = b;
	//}
	//if (nMax <= c)
	//{
	//	nMax = c;
	//}
	//printf("%d", nMax);

	//[������ ���]
	//int price = 1000;
	//int age = 0;
	//float discount =0;

	//printf("���̸� �Է��Ͻÿ�\n", age);
	//scanf_s("%d", &age);


	//if (age < 20)
	//{
	//	discount = 0.75f;
	//	price = price * discount;
	//}
	//else
	//{
	//	discount = 1;
	//	price = price * discount;
	//}
	//printf("�Է��Ͻ� ���� : %d, ����� �� : %d�� �Դϴ�.\n", age, price);
	//



	////[���̿� ���� �з� �� ��ݰ��]
	//int price = 1000;
	//float discount;
	//int age;

	//printf("���̸� �Է��Ͻÿ�\n");
	//scanf_s("%d", &age);

	//if (age < 4)
	//{
	//	discount = 0;
	//}
	//else if (age < 13)
	//{
	//	discount = 0.5f;
	//}
	//else if (age < 20)
	//{
	//	discount = 0.75f;
	//}
	//else {
	//	discount = 1;
	//}

	//price = price * discount;
	//printf("���� : %d�� �̹Ƿ� \n ����� : %d �Դϴ�.", age, price);



	//[��ø��]

	/*int num= 0;
	scanf_s("%d", &num);

	if (num > 10)
	{
		int num = 19;
		printf("%d\n", num);
		if (num < 20)
		{
			int num = 30;
			printf("%d\n", num);
		}
	}
	printf("%d\n", num);*/

	//int price = 1000;
	//float discount;
	//int age = 0;
	//printf("���̸� �Է��Ͻÿ�\n");
	//scanf_s("%d", &age);
	//if (age > 64)
	//{
	//	discount = 0;
	//}
	//else
	//{
	//	if (age < 4)
	//	{
	//		discount = 0;
	//	}
	//	else if (age < 14)
	//	{
	//		discount = 0.5f;
	//	}
	//	else if (age < 20)
	//	{
	//		discount = 0.75f;
	//	}
	//	else
	//	{
	//		discount = 1;
	//	}
	//	
	//}
	//printf("���� ���� %d��\n ������ : %d��", age, (int)(price * discount));




	/*int nInput = 10, nData;
	scanf_s("%d", &nInput);
	if (nInput == 90)
	{
		nData = 10;
	}
	else if (nInput == 50)
	{
		nData = 5;
	}
	else if (nInput == 10)
	{
		nData = 1;
	}
	else
	{
		nData = 0;
	}



	double test;
	switch (nInput)
	{
	case 90:
		nData = 10;
		break;

	case 50:
		nData = 5;
		break;

	case 10:
		nData = 1;
		break;

	default:
		nData = 0;
		break;
	}*/





	//[Goto��]

	/*int nInput;

INPUT:
	printf("Input number : ");
	scanf_s("%d", &nInput);
	if (nInput < 0 || nInput>10)
	{
		goto INPUT;
	}
	puts("End");
*/


//[C���� goto���� ��Ȥ ���°��]
//ERROR�� ��ﶧ

int nAge = 0;
printf("���̸� �Է��ϼ��� : ");
scanf_s("%d", &nAge);

if (nAge < 0)
{
	goto ERROR;
}
printf("������\n");
	return 0;

ERROR:
	//����ó�� �ڵ�
	puts("ERROR!");
	return -1;

}