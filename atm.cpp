#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int cash = 0;
	double init;
	double result = 0;
	cin >> cash >> init;
	
	if(cash % 5 == 0 && cash < init)
	{
		result = init - cash - 0.50;
	}
	else
	{
		result = init;
	}
	cout << result << setprecision(3);
	
	return 0;		
}

