#include <stdio.h>

int main(void)
{
	//사용자로 부터 3정수를 입력받아 그 중 가장 큰 수를 출력하는 프로그램
	//if문을 사용하고 서바이벌 방식으로 만든다
	//[최대 값 구하기]
	//int a, b, c;
	//int nMax;
	//printf("세 정수를 입력하시오");
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

	//[버스비 계산]
	int price = 1000;
	int age = 0;
	float discount =0;

	printf("나이를 입력하시오\n", age);
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
	printf("입력하신 나이 : %d, 요금은 총 : %d원 입니다.\n", age, price);
	
		return 0;
}