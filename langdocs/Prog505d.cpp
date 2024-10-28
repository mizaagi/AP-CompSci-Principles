#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <ios>
using namespace std;

double ca(double n, double a) {
    return n / a;
}



int main() {
    int totalHits = 0;
    int monHits = 0;
    int tueHits = 0;
    int wedHits = 0;
    int thuHits = 0;
    int friHits = 0;
    int satHits = 0;
    int sunHits = 0;

    int mats = 0;
    int tats = 0;
    int wats = 0;
    int thats = 0;
    int fats = 0;
    int sats = 0;
    int suats = 0;

    int monAvg;
    int tueAvg;
    int wedAvg;
    int thuAvg;
    int friAvg;
    int satAvg;
    int sunAvg;

    ifstream f("prog505d.txt");
    if (f.is_open()) {
        string first, last;
        double n1,n2,n3,n4,n5,n6,n7,a1,a2,a3,a4,a5,a6,a7;
        while (f >> first >> last >> n1 >> a1 >> n2 >> a2 >> n3 >> a3 >> n4 >> a4 >> n5 >> a5 >> n6 >> a6 >> n7 >> a7) {
            cout << first << " " << last << "\t" << setprecision(3) << ca(n1,a1)
                                         << "\t" << setprecision(3) << ca(n2,a2)
                                         << "\t" << setprecision(3) << ca(n3,a3)
                                         << "\t" << setprecision(3) << ca(n4,a4)
                                         << "\t" << setprecision(3) << ca(n5,a5)
                                         << "\t" << setprecision(3) << ca(n6,a6)
                                         << "\t" << setprecision(3) << ca(n7,a7) << endl; 
            totalHits += n1+n2+n3+n4+n5+n6+n7;
            monHits += n1;
            tueHits += n2;
            wedHits += n3;
            thuHits += n4;
            friHits += n5;
            satHits += n6;
            sunHits += n7;

            mats += a1;
            tats += a2;
            wats += a3;
            thats += a4;
            fats += a5;
            sats += a6;
            suats += a7;

            monAvg = n1 / a1;
            tueAvg = n2 / a2;
            wedAvg = n3 / a3;
            thuAvg = n4 / a4;
            friAvg = n5 / a5;
            satAvg = n6 / a6;
            sunAvg = n7 / a7;
        } f.close();
        
    }
}