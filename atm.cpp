#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int cash = 0;
	double init;
	double result = 0;
	cin >> cash >> init;
	
	if(cash < 0 || cash > 2000)
	{
		cout << setprecision(2) << fixed << init;
		return 0;
	}

	if(init < 0 || init > 2000)
	{
		cout << setprecision(2) << fixed << init;
		return 0;
	}

	if(cash > init - 0.50)
	{
		cout << setprecision(2) << fixed << init;
		return 0;
	}
	
	if(cash % 5 == 0 && cash < init)
	{
		result = init - cash - 0.50;
	}
	else
	{
		result = init;
	}
	cout << setprecision(2) << fixed << result;
	
	return 0;		
}

