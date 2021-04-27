#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <climits>

using namespace std;

int gcd(int a, int b){
    // int m = *a, n = *b;
  while (b != 0){
    int temp = a;
    a = a % b;
    b = temp;
  }
  return a;
}

int main() {
  int n{}, val{};
  cin >> n;
  vector <int> numbers;
  for (int i = 0; i < n; ++i){
    cin >> val;
    numbers.push_back(val);
  }
  int maxLcm = 0, lcm{};
  sort(numbers.begin(), numbers.end());
  vector<int>::iterator it = numbers.begin();
  for ( ; it != numbers.end() - 1; ++it){
    cout << *it * *(it + 1);
    lcm = (*it * *(it+1)) / gcd(*max_element(it, it + 2), *min_element(it, it + 2));
    if (lcm >= maxLcm) maxLcm = lcm;
  }
  cout << maxLcm;
  cout << endl;
  return 0;
}
