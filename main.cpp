#include <iostream>

using namespace std;

int largestSubarraySum1(int arr[], int n) {

    int largest_sum = 0;

    //Time O(n(N^3)

    for(int i = 0; i<n; i++){
        for(int j=i;j<n;j++){
            //cout << "(" << i << ", " << j <<"),";

            int subarraySum = 0;
            for(int k = i; k<=j; k++){
//                cout << arr[k] << ", ";
                subarraySum += arr[k];
            }

            //put a check is subarraySum > largest_sum
            largest_sum = max(largest_sum, subarraySum);
        }
    }
    return largest_sum;
}

// find out the largest sum of subarray
// Brute Force

int main() {

    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr) / sizeof(int);


    // Print all the elements

    cout << largestSubarraySum1(arr, n) << endl;

    return 0;
}
