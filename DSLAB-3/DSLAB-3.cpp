#include <iostream>
using namespace std;

long long Factorial(long long n)
{
    long long F = 1;

    for (int i = 1; i <= n; ++i)
    {
        F *= i; // Эквивалент F = F * i;
    }
    return F;
}
int main()
{
    cout << "4 * (13! / (3! * (13-3)!)) ";
    cout << "\n4 * (13! / (3! * 10!)) ";
    long long S, p, C;
    cout << "\n13! = " << Factorial(13);
    cout << "\n3! = " << Factorial(3);
    long long n = Factorial(13);   // n!
    long long m = Factorial(3);    // m!
    long long k = Factorial(13 - 3); // (n - m)!
    cout << "\n3! * 10! = " << k;
    p = k * m;
    S = n / p;
    cout << "\n13! / (3! * 10!) = " << S;
    C = 4 * S;
    cout << "\n4 * (13! / (3! * 10!)) " << C;
    return 0;
}
