#include <iostream>
using namespace std;
void Han(int n, int start, int temp, int point)
{
    if (n > 0)
    {
        Han(n-1, start, point, temp);
        cout << "N: " << n << " Start: " << start << " Point: " << point << " Temp: " << temp << endl;
        cout << start << "=>" << temp << endl;
        cout << "N: " << n << " Start: " << point << " Point: " << temp << " Temp: " << start << endl << endl;
        Han(n-1, point, temp, start);
    }
}
int main()
{
    int n;
    cin >> n;
    Han(n,1,3,2);
    return 0;
}


