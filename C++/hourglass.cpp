#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
	vector<vector<int>> matrix(6, vector<int>(6, 0));
	for (int i = 0; i < 6; ++i) {
		for (int j = 0; j <= 5; ++j) {
			std::cin >> matrix.at(i).at(j);
		}
	}

	int maxSum{INT_MIN};
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			int sum{}, row{1};
			for (int ii = i; ii < i + 3; ++ii) {
				int col{1};
				for (int jj = j; jj < j + 3; ++jj) {
					if (row != 2) {
						sum += matrix.at(ii).at(jj);
					} else {
						if (col == 2) {
							sum += matrix.at(ii).at(jj);
						}
					}
					++col;
				}
				++row;
			}
			if (sum > maxSum) {
				maxSum = sum;
			}
		}
	}
	cout << maxSum << endl;
	/*
	1 1 1 0 0 0
	0 1 0 0 0 0
	1 1 1 0 0 0
	0 0 2 4 4 0
	0 0 0 2 0 0
	0 0 1 2 4 0	
	*/
	/*
	for (auto row: matrix) {
		for (auto col: row) {
			cout << col << " ";
		}
		cout << endl;
	}
	*/
	return 0;
}