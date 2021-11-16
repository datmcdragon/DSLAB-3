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
    long long S, p, C;
    cout << "\n12! = " << Factorial(12);
    cout << "\n5! = " << Factorial(5);
    long long n = Factorial(12);   //n!
    long long m = Factorial(5);    //m!
    long long k = Factorial(12 - 5); // (n-m)!
    cout << "\n(12 - 5)! = " << k;
    p = k * m;
    cout << "\n7! * 5! = " << k;
    S = n / p;
    cout << "\n12! / (7! * 5!) = " << S;
    C = S * pow(8, 5) * pow(4, 7);
    cout << "\nС * 8^5 * 4^7 =" << C;
    return 0;
}
