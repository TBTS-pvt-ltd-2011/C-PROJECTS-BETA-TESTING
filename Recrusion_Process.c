
// C program for the above approach

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Function to reverse the digits of
// the given integer
int reverse(int N)
{
	return ((N <= 9))
			? N
			: reverse(N / 10)
					+ ((N % 10)
						* (pow(10,
							(floor(log10(
								abs(N)))))));
}

// Utility function to reverse the
// digits of the given integer
void reverseUtil(int N)
{
	// Stores reversed integer
	int result = reverse(N);

	// Print reversed integer
	printf("%d", result);
}

// Driver Code
int main()
{
	// Given integer N
	int N = 123;

	// Function Call
	reverseUtil(N);

	return 0;
}
