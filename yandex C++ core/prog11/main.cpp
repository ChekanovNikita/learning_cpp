#include <iostream>

using namespace std;

int main()
{
    int tmp, n;
    float sum = 0.0;

    cin >> n;
    tmp = 1;
    for(float i = 1; i <= n; i++)
    {
        if(tmp % 2 != 0)
        {
            sum = sum + (1 / i);
            ++tmp;
        }
        else
        {
            sum = sum - (1 / i);
            ++tmp;
        }
    }

    cout << sum;
    return 0;
}
