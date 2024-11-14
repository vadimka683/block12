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
	float lenght_array = 14;

	while (lenght_array > 1) {
		for (int g = 0; g+lenght_array < 15; g++) {
			if (array[g] < array[g + (int)lenght_array]) {
				swap(array[g], array[g + (int)lenght_array]);
			}
			count++;
		}
		lenght_array /= 1.247;
	}
	for (int i = 0; i < 15; i++) {
		bool F = false;
		count++;
		for (int g = 0; g < 15; g++) {
			if (array[g] < array[g + 1]) {
				swap(array[g], array[g + 1]);
				F = true;
			}
			count++;
		}
		if (!F) {
			break;
		}
	}
	cout << count;
	for (int i = 0; i < 15; i++) {
		cout<< i + 1 << ". " << array[i] << "\n";
	}
}