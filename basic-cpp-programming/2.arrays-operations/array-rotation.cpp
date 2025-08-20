#include <iostream>

using namespace std;

int main(void) {

	int vector1[7] = {4, 7, 2, 8, 1, 3, 0};
	int vector2[7];
	int vectorSize = sizeof(vector1) / sizeof(vector1[0]);
	int vectorSizeLastPosition = vectorSize - 1;

	for(int i = 0; i < vectorSize; i++){
	    vector2[i] = vector1[vectorSizeLastPosition - i];
	}

	for(int i = 0; i < vectorSize; i++)
		cout << vector2[i] << ' ';
	cout << endl;
	return 0;
}