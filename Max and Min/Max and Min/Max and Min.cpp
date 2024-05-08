#include <iostream>
#include <cmath>
using namespace std;



int main()
{
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	cout << min(num1, min(num2, num3)) << " " << max(num1, max(num2, num3));


}
