#include <iostream>
#include<iomanip>
using namespace std;


int main()
{
	double PI = 3.141592653;
	double r;
	cin >> r;
	cout << fixed << setprecision(9) << (r * r * PI) << endl;
}

