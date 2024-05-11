#include <iostream>
using namespace std;




int main()
{
	int number;
	cin >> number;
	short res = number / 1000;
	if (res % 2 == 0)
	{
		cout << "EVEN" << endl;
	}
	else {
		cout << "ODD" << endl;
	}
}

