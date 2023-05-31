#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
		const int n= 10;
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
}