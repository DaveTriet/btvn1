#include <iostream>
// We shouldn't use <bits/stdc.h> and using namespace std;
// https://stackoverflow.com/questions/31816095/why-should-i-not-include-bits-stdc-h
// https://stackoverflow.com/questions/1452721/why-is-using-namespace-std-considered-bad-practice
bool is_prime(long long number) // more descriptve name
{
    // this will give correct result when number == 1
    if(number < 1) return false;
    if(number == 2 || number == 3) return false;

    if(n % 2 == 0 || n % 3 == 0) return false;
    for(int i = 5; i * i <= n; i += 6) // sqrt(n) takes lots of tie to compute
        if(number % i==0 || number%(i+2)==0) 
            return false;
    return true;
}
int main()
{
    long long input;
    std::cin >> input;
    // use a do-while loop to avoid a input++; line
    do
    {
        ++input;
    }
    while (!is_prime(input));
    std::cout << input;
}
