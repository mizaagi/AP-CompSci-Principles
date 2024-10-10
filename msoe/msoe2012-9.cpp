#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

/*
The plan is to tackle this problem with vectors. I am going to iterate through the string of numerals
that the user inputs and then convert them to a list of numbers. Then, we can compare which of the numbers
are greater or lesser and figure out how to convert it to a normal integer.
*/

int main() {
    vector<int> nums;
    string romString;
    int total = 0;
    int run = 0;
    cout << "Enter roman numerals: ";
    cin >> romString;

    for (int lcv = 0; lcv < romString.length(); lcv++) {
        if (romString.substr(lcv, 1) == "I") {
            nums.push_back(1);
        } else if (romString.substr(lcv, 1) == "V") {
            nums.push_back(5);
        } else if (romString.substr(lcv, 1) == "X") {
            nums.push_back(10);
        } else if (romString.substr(lcv, 1) == "L") {
            nums.push_back(50);
        } else if (romString.substr(lcv, 1) == "C") {
            nums.push_back(100);
        } else if (romString.substr(lcv, 1) == "D") {
            nums.push_back(500);
        } else if (romString.substr(lcv, 1) == "M") {
            nums.push_back(1000);
        }
    }

    while (run < nums.size()) {
        if (nums[run] < nums[run+1]) {
            total += nums[run+1] - nums[run];
            run++;
            
        } else {
            total += nums[run];
        }
        run++;
    }

    cout << "Number: " << total;
}