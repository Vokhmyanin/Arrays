#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	const int ROWS = 3;
	const int COLS = 3;
	int arr1[ROWS][COLS] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int arr2[ROWS][COLS] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int sum[ROWS][COLS] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int dif[ROWS][COLS] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr1[i][j] = rand() % 10;
			arr2[i][j] = rand() % 10;
			sum[i][j] = arr1[i][j] + arr2[i][j];
			dif[i][j] = arr1[i][j] - arr2[i][j];
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr1[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr2[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	cout << "Сумма матриц:" << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << sum[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	cout << "Разность матриц:" << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << dif[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	int SARRUS = 0;
	SARRUS = arr1[0][0] * arr1[1][1] * arr1[2][2] + arr1[0][1] * arr1[1][2] * arr1[2][0] + arr1[0][2] * arr1[1][0] * arr1[2][1] - arr1[0][2] * arr1[1][1] * arr1[2][0] - arr1[0][0] * arr1[1][2] * arr1[2][1] - arr1[0][1] * arr1[1][0] * arr1[2][2];
		cout << "Определитель матрицы: " << SARRUS;
}