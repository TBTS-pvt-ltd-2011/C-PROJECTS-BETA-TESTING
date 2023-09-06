
// C++ program to demonstrate
// Floating Point Error
#include <iostream>
using namespace std;
 
// Driver Code
int main()
{
    int a = 1, b = 0;
 
    // When we try to divide by zero
    // it should give SIGFPE
    cout << a / b;
    return 0;
}
