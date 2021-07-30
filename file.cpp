#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display_vector(vector <int> v) {
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}

int main() {
    // Empty vector of with elements of type "int"
    vector <int> lottery;
    lottery.push_back(3);   // vector is now {3}
    lottery.push_back(42);  // vector is now {3, 42}
    lottery.push_back(12);  // vector is now {3, 42, 12}
    lottery.push_back(19);  // vector is now {3, 42, 12, 19}
    lottery.push_back(30);  // vector is now {3, 42, 12, 19, 30}
    lottery.push_back(59);  // vector is now {3, 42, 12, 19, 30, 59}

    cout << "Before Sorting: ";
    display_vector(lottery); // display the vector

    sort(lottery.begin(), lottery.end()); // sort

    cout << "After Sorting: ";
    display_vector(lottery); // display the vector

    return 0;
}
