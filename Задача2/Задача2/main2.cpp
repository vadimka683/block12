#include<iostream>
using namespace std;

float* input_array(float *array){
	for (int i = 0; i < 15; i++) {
		float a;
		cout << "input " << i + 1 << " number: ";
		cin >> a;
		*array = a;
		array++;
	}
	return array -= 15;
}
void read_array(float* array) {
	for (int i = 0; i < 15; i++) {
		cout << i + 1 << "\t" << *array++ << "\n";
	}
	return;
}
float* sort_array(float* array, float *new_array_flag) {
	float max = 0;
	int number_max = 0;
	for (int g = 0; g < 15; g++) {
		for (int i = 0; i < 15; i++) {
			if (array[i] > max) {
				max = array[i];
				number_max = i;
			}
		}
		array[number_max] = 0;
		*new_array_flag++ = max;
		max = 0;
	}
	return new_array_flag -= 15;
}
int main() {
	float array_base[15];
	float* array = array_base;
	array = input_array(array);

	float new_array[15];
	float* new_array_flag = &new_array[0];
	new_array_flag = sort_array(array,new_array_flag);
	read_array(new_array_flag);
}