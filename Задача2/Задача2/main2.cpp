#include<iostream>
using namespace std;

int main() {
	float array[5];
	for (int i = 0; i < 5; i++) {
		cout << "Input " << i + 1 << " array number";
		cin >> array[i];
	}
	cout << "Your array:\n";

	// 5 7 8 2 3
	for (int g = 0; g < 5; g++) {
		for (int i = 0; i < 5; i++) {
			if (array[i] < array[i + 1]) {
				swap(array[i], array[i + 1]);
			}
		}
		for (int h = 4; h > 0; h--) {
			if (array[h] > array[h - 1]) {
				swap(array[h], array[h - 1]);
			}
		}
	}
	for (int i = 0; i < 5; i++) {
		cout<< i + 1 << ". " << array[i] << "\n";
	}
}