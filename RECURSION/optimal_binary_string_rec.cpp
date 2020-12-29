
#include <iostream>
#include <string>
using namespace std;

// count all n-digit binary strings without any consecutive 1's
int countStrings(int n)
{
	int T[n+1][2];

	T[0][0] = 0, T[0][1] = 0;		// no digit is left
	T[1][0] = 2, T[1][1] = 1;		// if only one digit is left

	for (int i = 2; i <= n; i++)
	{
		// if last digit is 0, we can have both 0 and 1 at current position
		T[i][0] = T[i-1][0] + T[i-1][1];

		// if last digit is 1, we can have only 0 at current position
		T[i][1] = T[i-1][0];
	}

	return T[n][0];

}

// main function
int main()
{
	// given number of digits
	int n ;cin>>n;

	cout << countStrings(n)<<endl;
	return 0;
}