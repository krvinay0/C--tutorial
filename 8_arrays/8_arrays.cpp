
#include <iostream>
#include <climits>
using namespace std;

// change by array
void changeArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * 2;
    }
}

// linear search
int linearSearch(int arr[], int size, int search)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == search)
        {
            return i;
        }
    }
    return -1;
}

// reverse array
void reverseArr(int arr[], int size){
   int start = 0;
    int end = size - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    cout << "The reversed array is: " arr
}

int main()
{
    int size = 6;
    int marks[6] = {10, 20, 30, 40, 50, 1};
    int smallest = INT_MAX;
    int smallestIndex = 0;
    int largest = INT_MIN;
    int largestIndex = 0;


    // ============ reverse array
    reverseArr(marks, size) ;

    // ============ linear search
    // int search = 50;
    // cout << "The element " << search << " is at index " << linearSearch(marks, size, search) << endl;

    // ============ pass by reference
    // changeArr(marks, size);

    // //   cout << "The marks are: ";
    // for (int i = 0; i < size; i++)
    // {
    //     cout << marks[i] << " ";
    // }
    // ============

    // ============
    // for (int i = 0; i < size; i++)
    // {
    //     // min(mark[i], smallest) = smallest, max(mark[i], largest) = largest

    //     if (marks[i] < smallest)
    //     {
    //         smallest = marks[i];
    //     }
    //     if (marks[i] > largest)
    //     {
    //         largest = marks[i];
    //     }
    // }
    // cout << "Smallest is " << smallest << " && Largest is " << largest << endl;
    // ============

    // ============
    // for (int i = 0; i < size; i++) {
    // // min(mark[i], smallest) = smallest, max(mark[i], largest) = largest

    //     if (marks[i] < smallest)
    //     {
    //         smallest = marks[i];
    //         smallestIndex = i;

    //     }
    //     if (marks[i] > largest)
    //     {
    //         largest = marks[i];
    //         largestIndex = i;
    //     }
    // }

    // cout << "Smallest value is " << smallest <<  " Index is " << smallestIndex <<
    // "\nLargest is " << largest << " Index is " << largestIndex << endl;
    // ============

    return 0;
}
