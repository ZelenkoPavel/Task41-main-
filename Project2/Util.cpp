#include <iostream>
#include <string>
#include <time.h>

using namespace std;

#define size 100


void random_init_matrix(int matrix[size][size], int max, int min, int entered_size) {
	srand(time(NULL));
	if (min > max) {
		int t = min;
		min = max;
		max = t;
	}
	if (entered_size <= 0 || entered_size > size) {
		return;
	}
	for (int i = 0; i < entered_size; i++) {
		for (int j = 0; j < entered_size; j++) {
			matrix[i][j] = rand() % (max - min + 1) + min;
		}
	}
}

string convert_matrix_to_string(int matrix[size][size], int entered_size) {
	if (entered_size <= 0 || entered_size > size) {
		return "Incorrect data was entered\n";
	}
	string msg = "";

	for (int i = 0; i < entered_size; i++) {
		for (int j = 0; j < entered_size; j++) {
			if (matrix[i][j] < 0) {
				msg += to_string(matrix[i][j]) + " ";
			}
			else if (matrix[i][j] >= 0 && matrix[i][j] < 10) {
				msg += " " + to_string(matrix[i][j]) + " ";
			}
			else {
				msg += to_string(matrix[i][j]) + " ";
			}
		}
		msg += "\n";
	}

	return msg;
}