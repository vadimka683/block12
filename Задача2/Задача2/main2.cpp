#include<iostream>
using namespace std;

int main() {
	float array[15];
	for (int i = 0; i < 15; i++) {
		cout << "Input " << i + 1 << " array number";
		cin >> array[i];
	}
	cout << "Your array:\n";

	// 5 7 8 2 3
	for (int g = 0; g < 15; g++) {
		bool F = false;
		for (int i = 0; i < 15; i++) {
			if (array[i] < array[i + 1]) {
				swap(array[i], array[i + 1]);
				F = true;
			}
		}
		if (!F) {
			break;
		}
	}
	for (int i = 0; i < 15; i++) {
		cout<< i + 1 << ". " << array[i] << "\n";
	}
}