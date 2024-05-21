#include <iostream>
using namespace std;



int main()
{
	int a, b, c, d ;
	cin >> a >> b >> c >> d;
	a = a % 100;
	b = b % 100;
	c = c % 100;
	d = d % 100;

	long long z = a * b * c * d;
	int x = z %100 ;
	if (x<10) {
		cout << 0 << x;
	}
	else
	{
		cout << x;
	}

	

}

