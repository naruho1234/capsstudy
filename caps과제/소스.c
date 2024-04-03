#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;


	printf("중간고사와 기말고사 점수를 입력하세요\n: ");
	scanf("%d %d", &a, &b);

	float c = (((float)a + (float)b) / 2);

		if (c >= 90)
		{
			printf("평균과 학점: %f A", c);
	}
		else if (c >= 80)
		{
			printf("평균과 학점: %f B", c);
		}
		else if (c >= 70)
		{
			printf("평균과 학점: %f C", c);
		}
		else if (c >= 60)
		{
			printf("평균과 학점: %f D", c);
		}
		else
		{
			printf("평균과 학점: %f F", c);

		}

	

	return 0;


}