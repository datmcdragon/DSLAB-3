#include <iostream>
using namespace std;

int Factorial(int n)
{
    int F = 1;

    for (int i = 1; i <= n; ++i)
    {
        F *= i; // Эквивалент F = F * i;
    }
    return F;
}
int main()
{
    int A1, A2, A3, C;
    int n = Factorial(4);
    int k1 = Factorial(4 - 1); // (n-m1)!
    int k2 = Factorial(4 - 2); // (n-m2)!
    int k3 = Factorial(4 - 3); // (n-m3)!
    A1 = n / k1;
    A2 = n / k2;
    A3 = n / k3;
    cout << "\nA1 = " << A1;
    cout << "\nA2 = " << A2;
    cout << "\nA3 = " << A3;
    C = A1 + A2 + A3;
    cout << "\nResult = " << C;
    return 0;
}
