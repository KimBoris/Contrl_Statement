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
	int price = 1000;
	int age = 0;
	float discount =0;

	printf("���̸� �Է��Ͻÿ�\n", age);
	scanf_s("%d", &age);


	if (age < 20)
	{
		discount = 0.75f;
		price = price * discount;
	}
	else
	{
		discount = 1;
		price = price * discount;
	}
	printf("�Է��Ͻ� ���� : %d, ����� �� : %d�� �Դϴ�.\n", age, price);
	
		return 0;
}