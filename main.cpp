#include <iostream>
#include <vector>

using namespace std;

// Kadane's Algorithm O(N)
int maximum_subarray_sum(int arr[], int n) {
    int cs = 0;
    int largest = 0;

    for(int i = 0; i<n; i++){
        cs =cs + arr[i];
        if(cs < 0){
            cs = 0;
        }
        largest = max(largest, cs);
    }
    return largest;
}

int main() {
    //Demo Vector
    //vector<int> arr = //{1,2,10,12,15};

    //Fill Constructor
    vector<int> arr(10,7);

    //Fill
    vector<int> visited(100,0);


    //Pop_back
    arr.pop_back();

    // Push_Back O(1)
    arr.push_back(16);

    //Print all the elements
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << endl;
    }


//    //size of the vector
//    cout << arr.size() << endl;
//
//    //Capacity of the vector
//    cout << arr.capacity() << endl;

    return 0;
}
