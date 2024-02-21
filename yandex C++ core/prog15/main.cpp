#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<string> data {};
    string word;

    while(getline(cin, word)) {
        data.push_back(word);
    }

    sort(data.rbegin(), data.rend());

    for(string elem : data) {
        cout << elem << '\n';
    }

    return 0;
}
