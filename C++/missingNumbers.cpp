#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

int main(){
	set <int> missing;
	int n, m, x;
	cin >> n;
	multiset <int> arr;
	for (int i = 0; i < n; ++i){
		cin >> x;
		arr.insert(x);
	}
	cin >> m;
	multiset <int> brr;
	for (int i = 0; i < m; ++i){
		cin >> x;
		brr.insert(x);
	}
	set <int> actual {brr.begin(), brr.end()};
	for (auto itr: actual){		
		if (arr.find(itr) == arr.end() || arr.count(itr) != brr.count(itr))
			missing.insert(itr);
	}
	for (auto itr: missing)
		cout << itr << ' ';
	cout << endl;

	return 0;
}