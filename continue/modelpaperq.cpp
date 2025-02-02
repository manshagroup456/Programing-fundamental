#include<iostream>
#include<conio.h>

using namespace std;
int main() {
	int b = 3, c = 2;
	if ((b++ == 7) || (++c == 5)) {
		b*=c  ;
		cout << ++b << endl;
	}
	else
		cout << b-- << ++c << endl;
	for (int i = b;i <= c;i++)
		cout << "00dec2019" << endl;
	return 0;
}