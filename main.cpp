#include <iostream>

using namespace std;

int main() {

    int marks[100] = {0};

    int n;
    cout << "Enter the no of students ";

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> marks[i];

        marks[i] = marks[i]*2;
    }

    for(int i=0; i<100; i++){
        cout << marks[i] << " ,";
    }

    cout << endl;

    // There is no garbage collection in C++

    return 0;
}
