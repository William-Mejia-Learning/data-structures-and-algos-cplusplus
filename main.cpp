#include <iostream>

using namespace std;

int printSubArrays(int arr[], int n) {

    //Time O(n(N^3)
    int sum;

    for(int i = 0; i<n; i++){
        for(int j=i;j<n;j++){
            //cout << "(" << i << ", " << j <<"),";
            for(int k = i; k<=j; k++){
                cout << arr[k] << ", ";
            }
            cout << endl;
        }
        cout << endl;
    }

}

//Print the sum of each subarray & finding out the largest sum

int main() {

    int arr[] = {10,20,30,40,50, 60};
    int n = sizeof(arr) / sizeof(int);


    // Print all the elements

    printSubArrays(arr, n);

    return 0;
}
