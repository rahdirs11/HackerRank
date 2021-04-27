#include <iostream>

using namespace std;

int grade(int mark){
	int diff = 5 - mark % 5, rounded = mark + diff;
	return (diff < 3)? (rounded >= 40? rounded: mark): mark;
}

int main(){
	int n, mark;
	cin >> n;
	while (n > 0){
		cin >> mark;
		cout << grade(mark) << endl;
		--n;
	}
	return 0;
}