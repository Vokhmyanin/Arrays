#include<iostream>
using namespace std;
#define tab "\t"
//#define SORTING

//#define RANGE_70_80
void main()
{
	setlocale(LC_ALL, "");
#ifdef SORTING
	const int n = 5;
	int arr[n];
	int minRand;
	int maxRand;	
		cout << "Введите минимально возможное случайное число: "; cin >> minRand;
		cout << "Введите максимально возможное случайное число: "; cin >> maxRand;
	
	if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand - maxRand < 10)
	{
		maxRand = minRand + 10;
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	int buf;         // Сортировка
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n-1; i++)
		{
			if (arr[i] > arr[i+1])
			{
				buf = arr[i];
				arr[i] = arr[i+1];
				arr[i + 1] = buf;
			}
		}
	}
	cout << "Отсортированный массив: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif

#ifdef RANGE_70_80
	const int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 5;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		bool met_before = false; //
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true; //запоминаем что число встречалось ранее
				break; //прерывает текущую итерацию и все последующие
			}
		}
		if (met_before)continue;// прерывает текущую итерацию и переходит к следующей
		// поиск повторений
		int count = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count)printf("Значение %d повторяется %d раз\n", arr[i], count);
	}
	
#endif
}