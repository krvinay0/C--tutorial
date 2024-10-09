#include <iostream>
#include <vector>
using namespace std;

// pair sum
vector<int> pairSum(vector<int> arr, int size, int sum)
{
    vector<int> ans = {};

    for (int i = 0; i < size; i++)    {
        for (int j = i + 1; j < size; j++){
            if (arr[i] + arr[j] == sum){

                // push
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);

                return ans;
            }
        }
    }
    return ans;
};

// optimize pair sum
vector<int> optimizePairSum(vector<int> arr, int size, int sum){
    vector<int> ans = {};
    int i = 0, j = size - 1;

    while (i < j){
        if (arr[i] + arr[j] < sum){
            i++;
        }
        else if (arr[i] + arr[j] > sum){
            j--;
        }
        else{
            // push
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
            return ans;
        }
    };
    return ans;
};

int main(){
    vector<int> marks = {10, 20, 30, 40, 50, 1};
    int sizeOfMarks = sizeof(marks) / sizeof(marks[0]);
    int sum = 70;

    vector<int> ansOfPairSum = pairSum(marks, sizeOfMarks, sum);
    cout << ansOfPairSum[0] << ", " << ansOfPairSum[1] << " pairSum" << endl;

    vector<int> ansOfOptimizePairSum = optimizePairSum(marks, sizeOfMarks, sum);
    cout << ansOfOptimizePairSum[0] << ", " << ansOfOptimizePairSum[1] << " optimizePairSum" << endl;

    return 0;
}