#include <iostream>

using namespace std;

int main()
{
	int n,k;
	int num;
	int count = 0;
	cin >> n >> k;
	for(int i = 0; i < n; i++)
	{
		cin >> num;
		if(num % k == 0)
		{
			count++;
		}
	}
	cout << count;
}
