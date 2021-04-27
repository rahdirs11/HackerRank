#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	int n, k, x;
	cin >> n >> k;
	int arr[n];
	for (int i = 0; i < n; ++i){
		cin >> x;
		arr[i] = x;
	}
	int count = 0;
	sort(arr, arr + n);
	int i = 0, j = 1;
	while (j < n){
		int diff = arr[j] - arr[i];
		if (diff == k){
			++count;
			++j;
		} else if (diff > k)	++i;
		else	++j;
	}
	cout << count << endl;
	return 0;
}

