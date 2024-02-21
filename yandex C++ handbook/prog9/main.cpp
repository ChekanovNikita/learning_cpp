#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    int tmp = 0;
    for(int i = -n + 2; i <= k; ++i)
    {
        if(i > 0) {
            cout << setw(2) << i;
        }
        else
        {
            cout << "  ";
        }

        ++tmp;

        if(tmp == 7) {
            cout << "\n";
            tmp = 0;
        }
        else
        {
            cout << " ";
        }
    }
    return 0;
}
