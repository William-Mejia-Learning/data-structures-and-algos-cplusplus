#include <iostream>

using namespace std;

void printArray(int * arr, int n) {
    cout << "In Function " << sizeof(arr) << endl;
    arr[0] = 100;

//    n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}

int main() {

//    int marks[100] = {0};
//
//    int n;
//    cout << "Enter the no of students ";
//
//    cin >> n;
//
//    for(int i=0; i<n; i++){
//        cin >> marks[i];
//
//        marks[i] = marks[i]*2;
//    }
//
//    for(int i=0; i<100; i++){
//        cout << marks[i] << " ,";
//    }

//    cout << endl;

    // There is no garbage collection in C++

    int arr[] = {1, 2, 3, 4, 5, 6};

    int n = sizeof(arr) / sizeof(int);

    cout << "In Main " << sizeof(arr) << endl;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    printArray(arr, n);



    return 0;
}
