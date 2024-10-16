#include <iostream>
#include <random>
#include "mylibrary.hpp"
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

    cout << endl << endl;

    // STEP 2: Print the array from beginning to end using a for-each loop
    cout << "Step 2" << endl;
    for (int v : bigArray) {
        cout << v << " ";
    }

    cout << endl << endl;

    // STEP 3: What number is in the middle of the array?
    cout << "Step 3" << endl;
    cout << "Middle: " << bigArray[9];

    cout << endl << endl;

    // STEP 4: What is the average of the first, middle, and last numbers of the array?
    cout << "Step 4" << endl;
    int avg = (bigArray[0] + bigArray[9] + bigArray[18]) / 3.0;
    cout << "Average: " << avg;

    cout << endl << endl;

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
    cout << "Step 6" << endl;
    int largLoc;
    int smalLoc;
    largLoc =  indexOf(bigArray, largest, sizeof(bigArray)/sizeof(bigArray[0]));
    cout << "largLoc = " << largLoc << endl;
    smalLoc = indexOf(bigArray, smallest, sizeof(bigArray)/sizeof(bigArray[0]));
    cout << "smalLoc = " << smalLoc << endl;
    bigArray[largLoc] = smallest;
    bigArray[smalLoc] = largest;
    cout << "Reprinted list: " << endl;
    for (int v : bigArray) {
        cout << v << " ";
    }

    cout << endl << endl;

    // STEP 7: Create a new random from 1 to 10 and insert it in the middle slot. Print the numbers.
    cout << "Step 7" << endl;
    uniform_int_distribution<int> newdist(1,10);
    int newArray[20];
    for (int lcv = 0; lcv < 10; lcv++) {
        newArray[lcv] = bigArray[lcv];
    }
    newArray[10] = newdist(rd);
    for (int lcv = 11; lcv < 21; lcv++) {
        newArray[lcv] = bigArray[lcv-1];
    }
    for (int v : newArray) {
        cout << v << " ";
    }
    cout << endl << endl;

    // STEP 8: 
    cout << "Step 8" << endl;
    for (int lcv = 0; lcv < sizeof(newArray)/sizeof(newArray[0]); lcv++) {
        newArray[lcv] = newArray[lcv] + 10;
    }
    for (int v : newArray) {
        cout << v << " ";
    }
    
    cout << endl << endl;

    // STEP 9:
    cout << "Step 9" << endl;
    int old3Val = newArray[2];
    newArray[2] = 5;
    cout << old3Val;

    cout << endl << endl;

    // STEP 10:
    cout << "Step 10" << endl;
    for (int v : newArray) {
        if (v >= 50 && v < 60) {
            cout << v << " ";
        }
    }

    cout << endl << endl;

    // STEP 11:
    cout << "Step 11" << endl;
    for (int v : newArray) {
        if (v % 4 == 0) {
            cout << v << " ";
        }
    }

    cout << endl << endl;

    // STEP 12:
    cout << "Step 12" << endl;
    for (int v : newArray) {
        if (v == 60) {
            cout << "Yes, there is at least one 60 in the list.";
            break;
        }
        cout << "No, there is not a 60 inside the list.";
    }

    cout << endl << endl;

    // STEP 13:
    cout << "Step 13" << endl;
    int equals = 0;
    for (int lcv = 0; lcv < 20; lcv++) {
        if (newArray[lcv] == newArray[19-lcv]) {
            equals++;
        }
    }
    
}