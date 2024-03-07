
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

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

// Utility function to reverse the digits of the given integer
void reverseUtil(int N)
{
	// Stores the reversed integer
	int result = reverse(N);

	// Print reversed integer
	printf("%d", result);
}

// The code for the driver
int main()
{
	int N = 123;
	reverseUtil(N);

	return 0;
}
