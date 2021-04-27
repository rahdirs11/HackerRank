#include <iostream>
#include <vector>

using namespace std;

vector<int> circularRotation(vector<int> array, int k, vector<int> queries) {
    int length = static_cast<int>(array.size());
    k %= length;
    vector<int> newA, output;
    for (int i = length - k; i < length; ++i) {
        newA.push_back(array.at(i));
    }
    for (int i = 0; i < length - k; ++i) {
        newA.push_back(array.at(i));
    }
    for (auto q: queries) {
        output.push_back(newA.at(q));
    }
    return output;
}


int main() {

    return 0;
}