#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	setlocale(LC_ALL, "Rus");
	int n, k, l, i = 0;
	int h = 1, a = 1;
	int r, b = 1000;
	char q;
	do
	{
		printf("�������� 1 ��� 2 ����� \n");
		scanf("%d", &n);
	} while (n < 1 || n > 2);
	srand((unsigned int)time(0));
	if (n == 1)
	{
		printf("���������� �������� k, ������� ����� �� 1 �� 1000 \n");
		k = a + rand() % b;
		while (1)
		{
			i++;
			scanf("%d", &l);
			if (l < k)
				printf("k ������ \n");
			else if (l > k)
				printf("k ������ \n");
			else
			{
				printf("����� ������� \n");
				break;
			}
		}
		printf("����������� ������� %d \n", i);
	}
	if (n == 2)
	{
		do
		{
			printf("��������� ������������ ����� �� 1 �� 1000 � ������� ��� \n");
			scanf("%d", &r);
		} while (r < 1 || r > 1000);
		k = rand() * (b - a) / RAND_MAX + a;
		printf("�����, ��������� ����������� %d \n", k);
		while (1)
		{
			scanf("%c", &q);
			if (q == '<')
			{
				b = k;
				k = rand() * (b - a) / RAND_MAX + a;
				printf("�����, ��������� ����������� %d \n", k);
				h++;
			}
			else if (q == '>')
			{
				a = k;
				k = rand() * (b - a) / RAND_MAX + a;
				printf("�����, ��������� �����������  %d \n", k);
				h++;
			}
			else if (q == '=')
			{
				printf("����� ������� \n");
				break;
			}
		}
		printf("����������� ������� %d \n", h);
	}
}



