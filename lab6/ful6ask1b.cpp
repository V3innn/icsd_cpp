#include <iostream>
using namespace std;

int main() {
    int num;
    int *listPtr;
    int *temp;
    listPtr = new int[5];
    num = 8;

    temp = listPtr;
    for (int j = 0; j < 5; j++) {
    	*listPtr = num;
    	num = num + 2;
    	listPtr++;
    }

    listPtr = temp;
    for (int k = 0; k < 5; k++) {
    	*temp = *temp + 3;
    	temp++;
    }

    for (int k = 0; k < 5; k++) {
    	cout << *listPtr << " ";
    	listPtr ++;
    }

    cout << endl;
}
