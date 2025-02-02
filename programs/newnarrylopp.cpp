#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int i, j, add;
	int num;
	cout << "Enter a number that you want to match with array  :";
	cin >> num;
	int arry[10];
	for (i = 1;i <= 10;i++)
	{
		cout << "Enter a value of array index { " << i << " }";
		cin >> arry[i];
		cout << endl;
	}
	for (j = 1;j <= 10;j++)
	{
		cout << "Addition of pair array [ " << j << " ] and [ " << j + 1 << " ] : ";
		add = arry[j] + arry[j + 1];
		cout << add;
        cout<<endl;
		if (add == num)
		{
            cout<<endl;
			cout << "Your value match at index [ " << j << " ] and [ " << j + 1 << " ] : ";
            cout<<endl;

		}
	}

	cin.get();
	return 0;
 }