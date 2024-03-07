
#include <iostream>
using namespace std;
 
// The code for the driver
int main()
{
    int a = 1, b = 0;
 
    // Note: When we try to divide by zero it should give SIGFPE
    cout << a / b;
    return 0;
}
