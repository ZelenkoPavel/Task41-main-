#include <iostream>

using namespace std;

#define size 100


void random_init_matrix(int matrix[size][size], int max, int min, int entered_size);
string convert_matrix_to_string(int matrix[size][size], int entered_size);

bool symmetric_matrix(int matrix[size][size], int entered_size);

int main() {

	int max, min;
	int matrix[size][size];
	int entered_size;

	do {
		system("cls");
		cout << "Input size of matrix, min and max number of matrix: ";
		cin >> entered_size >> min >> max;
	} while (size <= 0);

	random_init_matrix(matrix, max, min, entered_size);

	cout << convert_matrix_to_string(matrix, entered_size) << endl;

	string result = symmetric_matrix(matrix, entered_size)
		? "Yes, there is symmetric matrix" : "No, there isn't symmetric matrix";

	cout << "Result - " << result << endl;

	return 0;
}