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
	//int price = 1000;
	//int age = 0;
	//float discount =0;

	//printf("나이를 입력하시오\n", age);
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
	//printf("입력하신 나이 : %d, 요금은 총 : %d원 입니다.\n", age, price);
	//



	////[나이에 따른 분류 및 요금계산]
	//int price = 1000;
	//float discount;
	//int age;

	//printf("나이를 입력하시오\n");
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
	//printf("나이 : %d살 이므로 \n 요금은 : %d 입니다.", age, price);



	//[중첩문]

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
	//printf("나이를 입력하시오\n");
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
	//printf("현재 나이 %d살\n 버스비 : %d원", age, (int)(price * discount));




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





	//[Goto문]

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


//[C언어에서 goto문을 간혹 쓰는경우]
//ERROR를 띄울때

int nAge = 0;
printf("나이를 입력하세요 : ");
scanf_s("%d", &nAge);

if (nAge < 0)
{
	goto ERROR;
}
printf("요금출력\n");
	return 0;

ERROR:
	//예외처리 코드
	puts("ERROR!");
	return -1;

}