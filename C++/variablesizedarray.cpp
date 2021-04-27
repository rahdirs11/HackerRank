#include<iostream>
#include<vector>

using namespace std;

int main(){
	int n, q;
	cin >> n >> q;
	vector<int> vsa[n], output;
	for (int i = 0; i < n; ++i){
		int k;
		cin >> k;
		for (int j = 0; j < k; ++j){
			int x;
			cin >> x;
			vsa[i].push_back(x);			
		}
	}
	for (int i = 0; i < q; ++i){
		int I, J;
		cin >> I >> J;
		output.push_back(vsa[I][J]);
	}
	for (int num : output)
		cout << num << endl;
}