#include <iostream>
using namespace std;
int main()
{
	int n,tong = 0;
	cout << "Tinh tong so chan tu 1 den N";
	cout << "\nNhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
	if ( i % 2 == 0)
		tong += i;
	}
	cout << "Tong la: " << tong;
	return 0;
}