
// C++ program to demonstrate Segmentation Fault
#include <iostream>
using namespace std;
 
// Driver Code
int main()
{
    // An array of size 100
    int arr[100] = { 0 };
 
    // When we try to access the array out
    // of bound, it will give Segmentation Fault
    cout << arr[100001];
    return 0;
}
