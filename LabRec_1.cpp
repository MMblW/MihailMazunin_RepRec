#include <iostream>
#include <cmath>
using namespace std;
float sum(float n, int x)
{
    {
        float S;
        S = pow(-1, n+1) * ((pow(x, (2*n)+1))/((4*n*n)-1));
        if (n > 1)
        {
            S += sum(n-1, x);
        }
        return S;
    }
}
int main()
{
    float n, c;
    c = sum(5, 2);
    cout << c << endl;
    int x = 2;
    c = 0;
    for (n = 5; n > 0; n--)
    {
        c += pow(-1, n+1) * ((pow(x, (2*n)+1))/((4*n*n)-1));
    }
    cout << c;
    return 0;
}




