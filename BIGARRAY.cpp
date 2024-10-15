#include <iostream>
#include <random>
using namespace std;

int main() {
    // SETUP
    random_device rd;
    uniform_int_distribution<int> dist(20,90);
    int bigArray[19];
    for (int lcv = 0; lcv < 19; lcv++) {
        bigArray[lcv] = dist(rd);
    }

    // STEP 1: Print the array from beginning to end
    cout << "Step 1" << endl;
    for (int lcv = 0; lcv < 19; lcv++) {
        cout << bigArray[lcv] << " ";
    }

    cout << endl;

    // STEP 2: Print the array from beginning to end using a for-each loop
    cout << "Step 2" << endl;
    for (int v : bigArray) {
        cout << v << " ";
    }

    cout << endl;

    // STEP 3: What number is in the middle of the array?
    cout << "Step 3" << endl;
    cout << "Middle: " << bigArray[9];

    cout << endl;

    // STEP 4: What is the average of the first, middle, and last numbers of the array?
    cout << "Step 4" << endl;
    int avg = (bigArray[0] + bigArray[9] + bigArray[18]) / 3.0;
    cout << "Average: " << avg;

    cout << endl;

    // STEP 5: Find the smallest and largest numbers in the Array
    cout << "Step 5" << endl;
    int smallest = 100;
    int largest = 0;
    for (int n : bigArray) {
        if (n < smallest) smallest = n;
        if (n > largest)   largest = n;
    }
    cout << "Smallest: " << smallest << endl;
    cout << "Largest: "  << largest  << endl;

    cout << endl;

    // STEP 6: Switch the largest with the smallest number. Print the list.
    
}