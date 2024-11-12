#include<iostream>
#include<string>
using namespace std;
int main() {
	string surname[10];
	for (int i = 1; i <= 10; ++i) {
		cout << "Input surname apartment tenant ¹ " << i << " :";
		cin >> surname[i - 1];
	}
	for (int i = 0; i < 3; i++) {
		int a = 0;
		cout << "Input apartment number: ";
		cin >> a;
		if (a > 0 && a <= 10) {
			cout << surname[a - 1] << "\n";
		}
		else {
			cout << "Invalid number\n";
		}
	}

}