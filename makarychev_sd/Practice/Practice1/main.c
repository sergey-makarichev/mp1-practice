#include <stdio.h>
#include <locale.h>

void main()
{
	float h, d, w, m1, m2, m3, m4, m5, m, t1 = 0.005, t2 = 0.015, t3 = 0.01;
	float p1, p2, p3;
	int n;
	setlocale(LC_ALL, "Rus");
	printf("������� ��������� ���\n");
	scanf("%f", &p1);
	printf("������� ��������� ���\n");
	scanf("%f", &p2);
	printf("������� ��������� ������\n");
	scanf("%f", &p3);
	printf("������� ������ �� 80 �� 120 ����������� \n");
	scanf("%f", &w);
	printf("������� ������� �� 50 �� 90 ����������� \n");
	scanf("%f", &d);
	printf("������� ������ �� 180 �� 220 ����������� \n");
	scanf("%f", &h);
	if ((w < 80) || (w > 120) || (d < 50) || (d > 90) || (h < 180) || (h> 220))
	{
		printf("�������� ������ \n");
		return;
	}
	w /= 100;
	d /= 100;
	h /= 100;
	n = (h - 2 * t2) / (0.4 + t2);
	m1 = p1 * h * w * t1;
	m2 = 2 * p2 * d * t2 * (h + w);
	m3 = p3 * h * w * t3;
	m4 = n * p2 * (w - 2 * t2) * (d - t1) * t2;
	m = m1 + m2 + m3 + m4;
	printf("%d \n", n);
	printf("%f \n", m);
}
