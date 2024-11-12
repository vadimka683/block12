#include<iostream>
using namespace std;

int main() {
	float array[15];
	for (int i = 0; i < 15; i++) {
		cout << "Input " << i + 1 << " array number";
		cin >> array[i];
	}
	cout << "Your array:\n";
	int left_Mark = 0;
	int Right_Marck = 15;
	bool F = false;
	int count = 0;
	for (int g = 0; left_Mark < Right_Marck; g++) {
		count++;
		if (!F) {
			for (int i = 0; i < Right_Marck; i++) {
				if (array[i] < array[i + 1]) {
					swap(array[i], array[i + 1]);
				}
				count++;
			}
			Right_Marck--;
			F = true;
		}
		else {
			for (int h = 15; h > left_Mark; h--) {
				if (array[h] > array[h - 1]) {
					swap(array[h], array[h - 1]);
				}
				count++;
			}
			left_Mark++;
			F = false;
		}
	}
	cout << count;
	for (int i = 0; i < 15; i++) {
		cout<< i + 1 << ". " << array[i] << "\n";
	}
}