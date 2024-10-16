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
    bool sixtyIn = false;
    for (int v : newArray) {
        if (v == 60) {
            sixtyIn = true;
            break;
        }
    }
    if (sixtyIn) cout << "Yes, there is at least one 60 in the list.";
    else cout << "There are no 60s in the list.";

    cout << endl << endl;

    // STEP 13:
    cout << "Step 13" << endl;
    int equals = 0;
    for (int lcv = 0; lcv < 20; lcv++) {
        if (newArray[lcv] == newArray[19-lcv]) {
            equals++;
        }
    }
    if (equals == 20) cout << "Numbers are the same when put in reversed order.";
    else cout << "The list isn't the same backwards and forwards.";

    cout << endl << endl;

    // STEP 14:
    cout << "Step 14" << endl;
    int gta = 0;
    for (int v : newArray) {
        if (v > avg) gta++;
    }
    cout << "There are " << gta << " numbers greater than the average of " << avg << "." << endl;

    cout << endl;

    // STEP 15:
    cout << "Step 15" << endl;
    int evens = 0;
    for (int v : newArray) {
        if (v % 2 == 0) evens++;
    }
    cout << "There are " << evens << " even numbers in the list." << endl;

    cout << endl;

    // STEP 16: 
    cout << "Step 16" << endl;
    int anoArray[20];
    for (int lcv = 19; lcv > -1; lcv--) {
        anoArray[19-lcv] = newArray[lcv];
    }
    cout << "Old Array: ";
    for (int v : newArray) {
        cout << v << " ";
    }
    cout << endl << "New Array: ";
    for (int v : anoArray) {
        cout << v << " ";
    }

    cout << endl << endl;

    // STEP 17:
    cout << "Step 17" << endl;
    int sadArray[20];   
    for (int lcv = 19; lcv > 0; lcv--) {
        sadArray[lcv] = anoArray[lcv-1];
    }
    sadArray[0] = anoArray[19];
    cout << "Old Array: ";
    for (int v : anoArray) {
        cout << v << " ";
    }
    cout << endl << "New Array: ";
    for (int v : sadArray) {
        cout << v << " ";
    }

    cout << endl << endl;

    // STEP 18:
    cout << "Step 18" << endl;
    int digitsum = 0;
    int currentnum;
    for (int v : sadArray) {
        currentnum = v;
        while (currentnum > 0) {
            int digit = currentnum%10;
            currentnum /= 10;
            digitsum += digit;
        }
    }
    cout << "The sum of all digits in the list is " << digitsum << endl;
     
}