#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM_FILES 4

/*typedef struct FILES {
char*  name;
float size;
}names;
int size_cmp(const void * a, const void *b) {
return ((names*)a)->size - ((names*)b)->size;
}
void insert(a,n,)
{
int i, tmp, j;
for (i = 1; i < NUM_FILES; i++)
{
tmp = size[i];
j = i - 1;
while ((j >= 0) && (a[j] > tmp))
{
a[j + 1] = a[j];
a[j] = tmp;
j--;
}
}
for (i = 0; i < n; i++)
printf("%d", a[i]);
}
void main()
{
names persons[NUM_FILES] = {
{.name = "musik",.size = 68.9},
{.name = "games",.size = 182 },
{.name = "projects",.size = 180 },
{.name = "home",.size = 73.4 }
};
int i;
printf("\nUnsorted:\n");
for (i = 0; i < NUM_FILES; ++i)
printf("%s\t%.1f\t", persons[i].name, persons[i].size);
insert(persons, NUM_FILES, sizeof(names), size_cmp);
printf("\nSorted by height:\n");
for (i = 0; i < NUM_FILES; ++i)
printf("%s\t%.1f\t", persons[i].name, persons[i].size);
}
struct files
{
char* a[4];
int b[4];
}A;*/
void insert(int* b[], int n)
{
	int i, tmp, j;
	for (i = 1; i < n; i++)
	{
		tmp = *b[i];
		j = i - 1;
		while ((j >= 0) && (*b[j] > tmp))
		{
			*b[j + 1] = *b[j];
			*b[j] = tmp;
			j--;
		}
	}
}

void main()
{
	int i, j;
	char* a[4];
	int b[4];
	a[0] = "musik";
	a[1] = "games";
	a[2] = "projects";
	a[3] = "home";
	for (i = 0; i<4; i++)
		printf("%s\n", a[i]);
	b[0] = 12;
	b[1] = 44;
	b[2] = 6;
	b[3] = 94;
	for (j = 0; j<4; j++)
		printf("%d\n", b[j]);
	//insert(&b[0], NUM_FILES);
	for (i = 0; i<4; i++)
		printf("%s\n", b[i]);

}

/*#include <stdio.h>
#define N 5

void quick_sort(int a[], int n1 , int n2)
{
	int pidx = (n1 + n2) / 2;
	int i = n1, j = n2;
	void quick_split(int, int*, int*, int);
	for (i = 0; i < N; i++)
		scanf("%d", &(a[i]));
	quick_split(a, &i, &j, a[pidx]);
	if (i < n2)
		quick_sort(a, i, n2);
	if (j > n1)
		quick_sort(a, n1, j);
}
void quick_split(int a[], int *i, int *j, int p)
{
	do
	{
		while (a[*i] < p)
			*i++;
		while (a[*j] > p)
			*j--;
		if (*i < *j)
		{
			int tmp = a[*i];
			a[*i] = a[*j];
			a[*j] = tmp;
			*i++;
			*j--;
		}
	} while (*i < *j);
}
void main()
{
	int a[N], b = 0, e = N-1;
	quick_sort(a, b, e);
}

#include <stdio.h>
#define N 4

//выбором
void choose(int a[], int n)
{
int i, min, j, min_idx;
for (i = 0; i < n; i++)
scanf("%d", &(a[i]));
for (i = 0; i < n; i++)
{
min = a[i];
min_idx = i;
for (j = i + 1; j < n; j++)
{
if (a[j] < min)
{
min = a[j];
min_idx = j;
}
}
a[min_idx] = a[i];
a[i] = min;
}
for (i = 0; i < n; i++)
printf("%d", a[i]);
}
void main()
{
int a[N];
choose(a, N);
}

#include <stdio.h>
#define N 10
#define K 4

//подсчЄтомие. –ассмотренный алгоритм можно использовать только дл€ последовательностей,
которые не содержат одинаковых элементов! ƒл€ сортировки последовательностей,
содержащих одинаковые элементы, алгоритм необходимо модифицировать.

void count_sort(int a[], int n, int k)
{
	int count[K] = { 0 }, i, j, idx;
	for (i = 0; i < n; i++)
		scanf("%d", &(a[i]));
	for (i = 0; i < n; i++)
	{
		count[a[i]]++;
		idx = 0;
	}
	for (i = 0; i < k; i++)
	{
		for (j = 0; j < count[i]; j++)
		{
			a[idx++] = i;
		}
	}
	for (i = 0; i < n; i++)
		printf("%d", a[i]);
}
void main()
{
	int a[N];
	count_sort(a, N, K);
}


#include <stdio.h>
#define N 10

//пузырькова€
void bubble(int a[], int n)
{
	int i, j, tmp;
	for (i = 0; i < n; i++)
		scanf("%d", &(a[i]));
	for (i = 0; i < n; i++)
	{
		for (j = 1; j < n - i; j++)
		{
			if (a[j - 1] > a[j])
			{
				tmp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = tmp;
			}
		}
	}
	for (i = 0; i < n; i++)
		printf("%d", a[i]);
}
void main()
{
	int a[N];
	bubble(a, N);
}

/*#include <stdio.h>
#define N 10

void merge_sort(int a[], int l, int r)
{
if (l == r)
return;
int m = (l + r) / 2;
merge_sort(a, m + 1, r);
merge(a, l, m, r);
}
void merge(int a[], int l, int m, int r)
{
int i

}
void main()
{

}
#include <stdio.h>
#include <stdlib.h>
void merge(int *a, int n)
{
	int mid = n / 2; // находим середину сортируемой последовательности
	if (n % 2 == 1)
		mid++;
	int h = 1; // шаг
			   // выдел€ем пам€ть под формируемую последовательность
	int *c = (int*)malloc(n * sizeof(int));
	int step;
	while (h < n)
	{
		step = h;
		int i = 0;   // индекс первого пути
		int j = mid; // индекс второго пути
		int k = 0;   // индекс элемента в результирующей последовательности
		while (step <= mid)
		{
			while ((i < step) && (j < n) && (j < (mid + step)))
			{ // пока не дошли до конца пути
			  // заполн€ем следующий элемент формируемой последовательности
			  // меньшим из двух просматриваемых
				if (a[i] < a[j])
				{
					c[k] = a[i];
					i++; k++;
				}
				else {
					c[k] = a[j];
					j++; k++;
				}
			}
			while (i < step)
			{ // переписываем оставшиес€ элементы первого пути (если второй кончилс€ раньше)
				c[k] = a[i];
				i++; k++;
			}
			while ((j < (mid + step)) && (j<n))
			{  // переписываем оставшиес€ элементы второго пути (если первый кончилс€ раньше)
				c[k] = a[j];
				j++; k++;
			}
			step = step + h; // переходим к следующему этапу
		}
		h = h * 2;
		// ѕереносим упор€доченную последовательность (промежуточный вариант) в исходный массив
		for (i = 0; i<n; i++)
			a[i] = c[i];
	}
}
int main()
{
	int a[8];
	// «аполнение массива случайными числами
	for (int i = 0; i<8; i++)
		a[i] = rand() % 20 - 10;
	// ¬ывод элементов массива до сортировки
	for (int i = 0; i<8; i++)
		printf("%d ", a[i]);
	printf("\n");
	merge(a, 8); // вызов функции сортировки
				 // ¬ывод элементов массива после сортировки
	for (int i = 0; i<8; i++)
		printf("%d ", a[i]);
	printf("\n");
	getchar();
	return 0;
}*/







