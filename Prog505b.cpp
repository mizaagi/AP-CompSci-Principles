#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

string str(int i) {return to_string(i);}
string strf(float i) {return to_string(i);}
int As;
int Bs;
int Cs;
int Ds;
int Fs;

string getGrade(double percent) {
    if (percent >= 90) {As++; return "A";}
    else if (percent >= 80) {Bs++; return "B";}
    else if (percent >= 70) {Cs++; return "C";}
    else if (percent >= 60) {Ds++; return "D";}
    else {Fs++; return "F";}
}

string format(string f, string l, int s1, int s2, int s3, int s4, int s5) {
    double avg = (s1+s2+s3+s4+s5)/5.0;
    return f + " " + l + "\t" + str(s1) + "\t" + str(s2) + "\t" + str(s3) + "\t" + str(s4) + "\t" + str(s5) + "\t\t" + strf(avg) + "\t" + getGrade(avg) + "\n";
}

int main() {
    double t1, t2, t3, t4, t5;
    float tCount;
    string first, last;
    int s1, s2, s3, s4, s5;
    ifstream f("prog505b.dat");
    if (f.is_open()) {
        while (f >> first >> last >> s1 >> s2 >> s3 >> s4 >> s5) {
            cout << format(first, last, s1, s2, s3, s4, s5);
            t1 += s1; t2 += s2; t3 += s3; t4 += s4; t5 += s5;
            tCount++;
        }
        cout << "Test 1\t" << t1/tCount << "\tA " << As << endl;
        cout << "Test 2\t" << t2/tCount << "\tB " << Bs << endl;
        cout << "Test 3\t" << t3/tCount << "\tC " << Cs << endl;
        cout << "Test 4\t" << t4/tCount << "\tD " << Ds << endl;
        cout << "Test 5\t" << t5/tCount << "\tF " << Fs << endl;

    } f.close();
}