// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to find the average of the
// fourth power of first N natural numbers
double findAverage(int N)
{
	// Stores the sum of the fourth
	// powers of first N natural numbers
	double S = 0;

	// Calculate the sum of fourth power
	for (int i = 1; i <= N; i++) {
		S += i * i * i * i;
	}

	// Return the average
	return S / N;
}

// Driver Code
int main()
{
	int N = 3;
	cout << findAverage(N);

	return 0;
}
