/*
-> every time u need to traverse to the rest of the array
-> by brute force, itll be o(n^2)
-> what we can do is store another array of 1 and 0, 1 being odd and 0 being even wrt to the actual array position
-> use count to count number of 1's
*/
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector <int> array(n), parity(n);
	for (int i = 0; i < n; ++i){
		int num;
		cin >> num;
		array.at(i) = num;
		if (num % 2 == 0)
			parity.at(i) = 1;
	}
	// for (auto itr: array)
	// 	cout << itr << ' ';
	// cout << endl;
	// for (auto itr: parity)	cout << itr << ' ';
	for (int i = 0; i < array.size(); ++i){
		auto itr = find(parity.begin()+(i+1), parity.end(), 1);
		int oddDist = 0;
		while (itr != parity.end()){
			if (distance(parity.begin()+i, itr) % 2 != 0)
				++oddDist;
			itr = itr + 1;
		}
		cout << oddDist << ' ';
	}
	cout << endl;
	return 0;
}