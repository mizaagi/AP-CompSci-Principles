#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;


int getPoints(int booksRead) {
    int total = 0;
    for (int b = 1; b <= booksRead; b++) {
        if (b >= 1 && b <= 3) total += 10;
        else if (b >= 4 && b <= 6) total += 15;
        else total += 20;
    }
    return total;
}

int main() {
    string line;
    int points;
    cout << "Reading Contest" << endl;
    cout << "Name\t\tBooks\tPoints" << endl;
    ifstream f("prog505a.dat");
    if (f.is_open()) {
        string first, last;
        int books;
        while (f >> first >> last >> books){
            points = getPoints(books);
            cout << first << " " << last << "\t" << books << "\t" << points << endl;
        } f.close();
    }
    // while (getline(f, line)) {
    //     points = getPoints(sscanf(line.substr(line.length()-1,1)));
    //     cout << line << "\t" << points << endl;
    // }

}