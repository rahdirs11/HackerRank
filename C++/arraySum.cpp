#include <numeric>
#include <set>
#include <iostream>

using namespace std;

int main(){
	long long sum = 0;
	int n, x;
	cin >> n;
	set <int> numbers;
	for (int i = 0; i < n; ++i){
		cin >> x;
		sum += x;
		numbers.insert(x);
	}
	cout << sum << endl;
	return 0;
}