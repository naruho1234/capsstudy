#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;


	printf("�߰����� �⸻��� ������ �Է��ϼ���\n: ");
	scanf("%d %d", &a, &b);

	float c = (((float)a + (float)b) / 2);

		if (c >= 90)
		{
			printf("��հ� ����: %f A", c);
	}
		else if (c >= 80)
		{
			printf("��հ� ����: %f B", c);
		}
		else if (c >= 70)
		{
			printf("��հ� ����: %f C", c);
		}
		else if (c >= 60)
		{
			printf("��հ� ����: %f D", c);
		}
		else
		{
			printf("��հ� ����: %f F", c);

		}

	

	return 0;


}