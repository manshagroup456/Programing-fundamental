#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
int main() {
	int panadol_stock, Kroff_stock, CaC_stock;
	char  s;
	cout << "If you want to kno about panadol stock then press (a)  " << endl;
	cout << "If you want to kno about Kroff stock then press (b)  " << endl;
	cout << "If you want to kno about Cac stock then press (c)  " << endl;
	cout << "Enter your tock first Alphaphet  ";
	cin >> s;
	do
	{
		if (s == 'a,A')
		{
			cout << "Enter panadol stock ";
			cin >> panadol_stock;
			if ((panadol_stock >= 1) && (panadol_stock <= 20))
			{
				cout << "Your stock is insufficient ";
			}
			else if ((panadol_stock >= 21) && (panadol_stock <= 100))
			{
				cout << "Your stock is Limited";
			}
			else
				cout << "Your stock is suffficient";
		}else if (s == 'b,B')
		{
			cout << "Enter Kroff stock ";
			cin >> Kroff_stock;
			if ((Kroff_stock >= 1) && (Kroff_stock <= 20))
			{
				cout << "Your stock is insufficient ";
			}
			else if ((Kroff_stock >= 21) && (Kroff_stock <= 100))
			{
				cout << "Your stock is Limited";
			}
			else
				cout << "Your stock is suffficient";
		}else if(s=='c,C')
		{
			cout << "Enter Cac stock ";
			cin >> CaC_stock;
			if ((CaC_stock >= 1) && (CaC_stock <= 20))
			{
				cout << "Your stock is insufficient ";
			}
			else if ((CaC_stock >= 21) && (CaC_stock <= 100))
			{
				cout << "Your stock is Limited";
			}
			else
				cout << "Your stock is suffficient";
		}
		else
			cout << "---------invalid stock---------";

	} while (((s > c) && (s < z)) || ((s > C) && (s < Z)))
		cout << "----------Thanks you-----------";

}
