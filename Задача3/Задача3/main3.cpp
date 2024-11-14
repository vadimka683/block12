#include<iostream>
#include<cassert>
using namespace std;

float travelTime(float distance, float speed) {
	assert(distance > 0 && speed > 0);
	float time;
	time = distance / speed;
	return time;
}
int main() {
	float speed, distance;
	cout << "Input speed and distance: ";
	cin >> speed >> distance;
	float time = travelTime(distance, speed);
	cout << time;
}