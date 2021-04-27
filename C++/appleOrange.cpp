#include <iostream>
using namespace std;

int incrementCount(int distance, int s, int t){
	return (distance >= s && distance <= t);
}

int main() {
	int s, t, a, b, m, n;
	cin >> s >> t >> a >> b >> m >> n;	
	int appleCount{}, orangeCount{};
	for (int i = 0; i < m; ++i){
		cin >> apples[i];		
		appleCount += incrementCount(apples[i] + a, s, t);
	}
	for (int i = 0; i < n; ++i){
		cin >> oranges[i];
		orangeCount += incrementCount(oranges[i] + b, s, t);
	}
	cout << appleCount << endl << orangeCount << endl;
}