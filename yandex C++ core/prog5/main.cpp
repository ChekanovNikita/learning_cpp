#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    short a1;
    short b1;

    short a2;
    short b2;

    cin >> a1;
    cin >> b1;
    cin >> a2;
    cin >> b2;

    if(b1 == b2 || a1 == a2)
    {
        cout << "YES";
    } else if(abs(a1 - a2) == abs(b1 - b2)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
