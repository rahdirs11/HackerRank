#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main(){	
	int n;
	cin >> n;
	string dummy;
	getline(cin, dummy);
	for (int i = 0; i < n; ++i){
		string input;
		getline(cin, input);
		sort(input.begin(), input.end());
		// cout << input << endl;
		set<char> alphas(begin(input), end(input));		
		cout << (alphas.size() == 26? "Yes": "No") << endl;
	}
	return 0;
}
