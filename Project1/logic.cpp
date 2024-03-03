#include <iostream>

using namespace std;

#define size 100


bool symmetric_matrix(int matrix[size][size], int entered_size) {
	if (entered_size <= 0 || entered_size > size) {
		return false;
	}

	for (int i = 1; i < entered_size; i++) {
		for (int j = 0; j < i; j++) {
			if (matrix[i][j] != matrix[j][i]) {
				return false;
			}
		}
	}

	return true;
}