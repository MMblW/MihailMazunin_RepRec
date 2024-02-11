#include <iostream>
using namespace std;
int fib(int i)
{
    if (i < 2)
        return 0;
    if (i < 4)
        return 1;
    else
    {
        i =  fib(i-1) + fib(i-2);
        return i;
    }
}
int main()
{
    int i;
    cin >> i;
    cout << fib(i);
    return 0;
}

