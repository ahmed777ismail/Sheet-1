#include <iostream>
using namespace std;


int main()
{
	int A, B, C;
	char S, E;
	cin >> A >> S >> B >> E >> C;

	if (S == '+')
	{
		if (A + B == C)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << A + B;
		}

	}
	else if (S == '-')
	{
		if (A - B == C)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << A - B;
		}
	}

	else if (S == '*')
	{
		if (A * B == C)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << A * B;
		}
	}
}

