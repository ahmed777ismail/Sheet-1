#include <iostream>
using namespace std;



int main()
{


	int x, y, z;
	cin >> x >> y >> z;

	if (x >= y && y >= z)
	{
		cout << z << endl;
		cout << y << endl;
		cout << x << endl;
		cout << "\n";
		cout << x << endl;
		cout << y << endl;
		cout << z << endl;

	}
	else if (y >= x && x >= z)
	{
		cout << z << endl;
		cout << x << endl;
		cout << y << endl;
		cout << "\n";
		cout << x << endl;
		cout << y << endl;
		cout << z << endl;

	}
	else if (z >= y && y >= x)
	{
		cout << x << endl;
		cout << y << endl;
		cout << z << endl;
		cout << "\n";
		cout << x << endl;
		cout << y << endl;
		cout << z << endl;

	}
	else if (z >= x && x >= y)
	{
		cout << y << endl;
		cout << x << endl;
		cout << z << endl;
		cout << "\n";
		cout << x << endl;
		cout << y << endl;
		cout << z << endl;

	}
	else if (x >= z && z >= y)
	{
		cout << y << endl;
		cout << z << endl;
		cout << x << endl;
		cout << "\n";
		cout << x << endl;
		cout << y << endl;
		cout << z << endl;

	}
	else if (y >= z && z >= x)
	{
		cout << x << endl;
		cout << z << endl;
		cout << y << endl;
		cout << "\n";
		cout << x << endl;
		cout << y << endl;
		cout << z << endl;

	}


}

