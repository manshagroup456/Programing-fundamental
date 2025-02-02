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
        cout << "Enter your tock first Alphaphet  ";
	cin >> s;
		if (s == 'a')
		{
			cout << "Enter panadol stock "<<endl;
			cin >> panadol_stock;
			if ((panadol_stock >= 1) && (panadol_stock <= 20))
			{
				cout << "Your stock is insufficient "<<endl;
			}
			else if ((panadol_stock >= 21) && (panadol_stock <= 100))
			{
				cout << "Your stock is Limited"<<endl;
			}
			else
				cout << "Your stock is suffficient"<<endl;
		}else if (s == 'b')
		{
			cout << "Enter Kroff stock "<<endl;
			cin >> Kroff_stock;
			if ((Kroff_stock >= 1) && (Kroff_stock <= 20))
			{
				cout << "Your stock is insufficient "<<endl;
			}
			else if ((Kroff_stock >= 21) && (Kroff_stock <= 100))
			{
				cout << "Your stock is Limited"<<endl;
			}
			else
				cout << "Your stock is suffficient"<<endl;
		}else if(s=='c,C')
		{
			cout << "Enter Cac stock "<<endl;
			cin >> CaC_stock;
			if ((CaC_stock >= 1) && (CaC_stock <= 20))
			{
				cout << "Your stock is insufficient "<<endl;
			}
			else if ((CaC_stock >= 21) && (CaC_stock <= 100))
			{
				cout << "Your stock is Limited"<<endl;
			}
			else
				cout << "Your stock is suffficient"<<endl;
		}
		else
			cout << "---------invalid stock---------"<<endl;
            cout<<"If you want to exist then press (y) "<<endl;
        if (s=='y')
        {
            break;
        }

	} while (((s >= 'a') && (s <= 'c')) || ((s >= 'A') && (s <= 'C')));
		cout << "----------Thanks you-----------";

}
