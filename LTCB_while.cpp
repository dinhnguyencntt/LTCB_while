#include <iostream>
using namespace std;
int  main() {
	int i = 50, so,sodau,socuoi;
	int tong = 0;
	cout << "nhap so dau:";
	cin >> sodau;
	cout << "nhap so cuoi:";
	cin >> socuoi;
	cout << " vong lap while\n";
	while (sodau <= socuoi) 
	{
		cout << sodau << " ";
	    tong = tong + sodau;
	    sodau++;
	}
	cout << "\ntong=" << tong;
	return 0;
}