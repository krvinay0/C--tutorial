    #include <iostream>
    #include <vector>
    using namespace std;

    // int main()    {
    //     vector<int> vec = {1, 2, 3, 4, 5};
    //     vector<int> vec2(5, 3); // vec2 = {3 , 3, 3, 3, 3}
    //     vector<char> vecLoop = {'a', 'b', 'c', 'd', 'e'};

    //     // for (char i : vecLoop)
    //     // {
    //     //     cout << i << endl;
    //     // }
    //     // cout << "Hello World! \n" << vec[0] <<  "\n" << vec2[1] << endl;

    //     cout << vec.size() << endl;
    //     // Output == 5

    //     vec.push_back(6);
    //     cout << "After push_back: " << vec[0] << vec[1] << vec[2] << vec[3] << vec[4] << vec[5] << " " << vec.size() << "\n"
    //         << endl;
    //     // Output == After push_back: 123456 6

    //     vec.pop_back();
    //     cout << "After pop_back: " << vec[0] << vec[1] << vec[2] << vec[3] << vec[4] << " " << vec.size() << "\n"
    //         << endl;
    //     // Output == After pop_back: 12345 5

    //     vec.insert(vec.begin() + 2, 8);
    //     cout << "After insert: " << vec[0] << vec[1] << vec[2] << vec[3] << vec[4] << vec[5] << " " << vec.size() << "\n"
    //         << endl;
    //     // Output == After insert: 128345 6

    //     vec.erase(vec.begin() + 1);
    //     cout << "After erase: " << vec[0] << vec[1] << vec[2] << vec[3] << vec[4] << " " << vec.size() << "\n"
    //         << endl;
    //     // Output == After erase: 18345 5

    //     // vec.front();
    //     cout << "Front: give the front first value " << vec.front() << endl;
    //     // Output == Front: give the front first value 1

    //     // vec.back();
    //     cout << "Back: give the last value " << vec.back() << endl;
    //     // Output == Back: give the last value 5

    //     // vec.empty();
    //     cout << "Empty: check if the vector is empty " << vec.empty() << endl;
    //     // Output == Empty: check if the vector is empty 0

    //     // vec.at(2);
    //     cout << "At: give the value at the index " << vec.at(2) << endl;
    //     // Output == At: give the value at the index 3

    //     // vec.clear();
    //     cout << "After clear: " << vec[0] << vec[1] << vec[2] << vec[3] << vec[4] << " " << vec.size() << "\n"
    //         << endl;
    //     // Output == After clear: 18345 5

    //     return 0;
    // }


//  int main(){
//     vector<int> vec;

//     vec.push_back(6);
//     vec.push_back(7);
//     vec.push_back(8);
//     vec.push_back(9);
//     vec.push_back(10);


//     cout << "Size: " << vec.size() << endl;  // Output == 5
//     cout << "Capacity: " << vec.capacity() << endl; // Output == 8
//  }   


// single number
int main(){
    vector<int> vec = {1, 2, 3, 4, 5, 5, 3, 2, 1};

    int singleNumber = 0;
    for (int i : vec)
    {
        singleNumber ^= i;
    }

    cout << "Single Number: " << singleNumber << endl; // Output == 4
}


