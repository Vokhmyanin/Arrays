#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
#define DVOICHNAYA
//#define SHESTN
#ifdef DVOICHNAYA
	int n;
	int chastnoe;
	int ost;
	cout << "Введите десятичное число: "; cin >> n;
		do
		{
		chastnoe = n / 2;
		ost = n - (chastnoe * 2);
		n = chastnoe;
		cout << ost;				
		if (chastnoe == 1) cout << chastnoe;
		} while (chastnoe > 1);
#endif DVOICHNAYA
#ifdef SHESTN
		int n;
		int chastnoe;
		int ost;
		cout << "Введите десятичное число: "; cin >> n;
		do
		{
			chastnoe = n / 16;
			ost = n - (chastnoe * 16);
			n = chastnoe;
			cout << ost;
			if (chastnoe<16) cout << chastnoe;
			//if (ost == 10) cout <<"A";
			//if (ost == 11) cout <<"B";
			//if (ost == 12) cout <<"C";
			//if (ost == 13) cout <<"D";
			//if (ost == 14) cout <<"E";
			//if (ost == 15) cout <<"F";
		} while (chastnoe >16); 
#endif SHESTN
}
