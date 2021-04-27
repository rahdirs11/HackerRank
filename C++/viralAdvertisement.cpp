#include <iostream>
using namespace std;

int viralAdv(int n) {
    int day = 1, shared = 5;
    int liked{}, cumulative{};
    while (day <= n) {
        liked = shared / 2;
        cumulative += liked;
        shared = liked * 3;
        ++day;
    }
    return cumulative;
}


int main() {
    int n{};
    cin >> n;
    cout << viralAdv(n) << endl;
    return 0;
}