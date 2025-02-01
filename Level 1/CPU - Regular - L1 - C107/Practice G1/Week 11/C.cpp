#include <bits/stdc++.h>

using namespace std;

long long sum_of_digits(long long n)
{
    if (n < 10)
        return n;
    return (n % 10) + sum_of_digits(n / 10);
}

long long superdigit(long long n)
{
    if (n < 10)
        return n;

    long long newsum = sum_of_digits(n);

    return superdigit(newsum);
}

int main()
{
    string n;
    long long k;
    cin >> n >> k;

    long long sum = 0;

    for (auto &d : n)
    {
        sum += d - '0'; // convert char to int
    }

    // concatenate the string n k times
    sum *= k;

    cout << superdigit(sum) << endl;

    return 0;
}