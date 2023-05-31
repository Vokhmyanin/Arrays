#include<iostream>
//#define DVOICHNAYA
#define HEX
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
#ifdef DVOICHNAYA
	int decimal;
	
	cout << "Введите десятичное число: "; cin >> decimal;
	const int MAX_BIN_CAPACITY = 32; //максимально возможная разрядность числа
	bool bin[MAX_BIN_CAPACITY] = {}; //этот массив будет хранить разряды двоичного числа
	int i = 0;
	while (decimal)
	{
		bin[i++] = decimal % 2;// получаем двоичный разряд числа и сохраняем его в массив
		decimal /= 2; // убираем двоичный разряд из исходного числа
	}
	for (i--; i > 0; i--)
	{
		cout << bin[i];
	}
	cout << endl;
#endif DVOICHNAYA
	#ifdef HEX
	for (int i = 0; i < 256; i++) cout << i << "\t" << (char)i << endl;
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int MAX_HEX_CAPACITY = 8;	//максимально возможная разрядность шестнадцатеричного числа
	char hex[MAX_HEX_CAPACITY] = {};
	int i = 0;
	for (; decimal; decimal /= 16, i++)
	{
		hex[i] = decimal % 16;
		hex[i] += hex[i] < 10 ? 48 : 55;
	}
	for (i--; i >= 0; i--)
	{
		cout << hex[i];
	}
	cout << endl;
	
#endif HEX
}
