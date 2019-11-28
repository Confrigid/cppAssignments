#include <iostream>

using namespace std;

void remover(char arr[], int& count);
void shiftLeft(char arr[], int count, int start);
void print(char arr[], int count);

int main(){
	char characters[45] = { 'a', 'b', 'c', 'd', 'f', 'e', 'a', 'c', 'c', 'd', 'd', 'e', 'a', 'f', 'g', 'h', 'c', 'c', 'h', 'c' };
	int charCount = 20;
	remover(characters, charCount);
	print(characters, charCount);
	cout << endl;
	system("pause");
	return 0;
}

void remover(char arr[], int& count){
	//Start the first for loop to iterate through the array.
	for (int i = 0; i < count; i++){
		//Start the second for loop to iterate through the array.
		for (int j = i + 1; j < count; j++){
			//Check if the item in the second for loop is equal to the item in the first for loop.
			if (arr[i] == arr[j]){
				shiftLeft(arr, count, j);
				j--;
				count--;
			}
		}
	}
}

//Shifts the array to the left to remove the unwanted duplicate.
void shiftLeft(char arr[], int count, int start) {
	for (int k = start; k < count - 1; k++) {
		arr[k] = arr[k + 1];
	}
}

//Prints the array.
void print(char arr[], int count){
	for (int i = 0; i < count; i++){
		cout << arr[i];
	}
}