//swap two numbers
# include <iostream>
using namespace std;
int main()
{
	int integer1, integer2, swap;
    // Input the two integers
    cout << "Enter first integer: ";
    cin >> integer1;
    cout << "Enter second integer: ";
    cin >> integer2;
    // Printing values before swap
    cout << "Before swapping:" << endl;
    cout << "Integer 1: " << integer1 << endl;
    cout << "Integer 2: " << integer2 << endl;
    // Swapping the values using a temporary variable
    swap = integer1;
    integer1 = integer2;
    integer2 = swap;
    // Printing values after swap
    cout << "After swapping:" << endl;
    cout << "Integer 1: " << integer1 << endl;
    cout << "Integer 2: " << integer2 << endl;
    return 0;

}
