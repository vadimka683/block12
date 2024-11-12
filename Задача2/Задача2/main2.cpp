#include<iostream>
using namespace std;

int main() {
	float array[15];
	for (int i = 0; i < 15; i++) {
		cout << "Input " << i + 1 << " array number";
		cin >> array[i];
	}
	cout << "Your array:\n";
	int count = 0;
	for (int g = 0; g < 15; g++) {
		count++;
		bool F = false;
		for (int i = 0; i < 15; i++) {
			if (array[i] < array[i + 1]) {
				swap(array[i], array[i + 1]);
				F = true;
			}
			count++;
		}
		if (!F) {
			break;
		}
	}
	cout << count << "\n";
	for (int i = 0; i < 15; i++) {
		cout<< i + 1 << ". " << array[i] << "\n";
	}
}