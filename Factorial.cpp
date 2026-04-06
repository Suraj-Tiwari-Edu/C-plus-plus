#include<iostream>
using namespace std;

int main()
{
    int n;
    long long Fact = 1; // Use long long for larger numbers to prevent integer overflow

    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        for (int i = 1; i <= n; ++i) { // loop should start from 1 and not 0 
            Fact *= i;
        }
        cout << "Factorial of " << n << " is " << Fact << endl;
    }

    cin.ignore();
    cin.get();
    return 0;
}
