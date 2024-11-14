#include<iostream>
using namespace std;
int main() {
	int numbers[15] = { 114, 111, 106, 107, 107, 105, 115, 108, 110, 109, 112, 113, 116, 117, 118 };
	int sum_array = 0;
	for (int i = 0; i < 15; i++) {
		sum_array += numbers[i];
	}
	int sum_array_new = 0; int min = 105;
	for (int i = 0; i < 15; i++) {
		sum_array_new += min++;
	}
	cout << min - (sum_array_new - sum_array) - 1;
}