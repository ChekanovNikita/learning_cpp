#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string password = "";
    int alph_n = 0;
    vector<int> points = {0, 0, 0, 0};

    cin >> password;

    if(password.size() >= 8 && password.size() <= 14) {
        for(char alph : password) {
            alph_n = alph;
            if(alph_n < 33 || alph_n > 126) {
                cout << "NO";
                return 0;
            } else if(alph_n >= 48 && alph_n <= 57) {
                points[0] = 1;
            } else if(alph_n >= 65 && alph_n <= 90) {
                points[1] = 1;
            } else if(alph_n >= 97 && alph_n <= 122) {
                points[2] = 1;
            } else {
                points[3] = 1;
            }
        }
    } else {
        cout << "NO";
        return 0;
    }

    if(points[0] + points[1] + points[2] + points[3] >= 3) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
