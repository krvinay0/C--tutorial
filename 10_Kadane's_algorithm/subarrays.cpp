    #include<iostream>
    #include <climits>
    using namespace std;


    // subarrays
    int main() {
        int n = 5;
        int arr[5] = {1, 2, 3, 4, 5};

        for (int start = 0; start < n; start++) {
            for (int end = start; end < n; end++) {
                for (int k = start; k <= end; k++) {
                    cout << arr[k] << " ";
                }
                cout << " ";
            }
            cout << endl;
        }

        return 0;
    }

    // Maximum Subarray Sum
    int main() {
        int n = 5;
        int arr[5] = {1, 2, 3, 4, 5};

        int maxSum = INT_MIN;
        for (int start = 0; start < n; start++) {
            for (int end = start; end < n; end++) {
                int sum = 0;
                for (int k = start; k <= end; k++) {
                    sum += arr[k];
                }
                maxSum = max(maxSum, sum);
            }
        }
        cout << maxSum << endl;
        return 0;
    }


    // // Kadane's Algorithm
    int main() {
        int n = 5;
        int arr[7] = {3, -4, 5, 4, -1, 7, -8};

        int maxSum = INT_MIN;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            if (sum < 0) {
                sum = 0;
            }
            maxSum = max(maxSum, sum);
        }
        cout << maxSum << endl;
        return 0;
    } 