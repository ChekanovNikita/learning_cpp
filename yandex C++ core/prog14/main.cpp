#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> seats(n);

    for (size_t guest = 1; guest <= seats.size(); ++guest) {
        int seat;
        cin >> seat;
        seats[seat - 1] = guest;
    }

    for (int guest : seats) {
        cout << guest << " ";
    }
    cout << "\n";

    return 0;
}
