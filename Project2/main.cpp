#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include "library.hpp"
using namespace std;

int main() {
    vector<string> letters; 
    initMap();
    cout << "Morse code or plain text input? \n";
    cout << "";

}

void initMap() {
    // https://cplusplus.com/forum/beginner/192939/2/
    map<char, string> morseList;
    morseList[' '] = " ";
    morseList['0'] = "-----";
    morseList['1'] = ".----";
    morseList['2'] = "..---";
    morseList['3'] = "...--";
    morseList['4'] = "....-";
    morseList['5'] = ".....";
    morseList['6'] = "-....";
    morseList['7'] = "--...";
    morseList['8'] = "---..";
    morseList['9'] = "----.";
    morseList['a'] = ".-";
    morseList['b'] = "-...";
    morseList['c'] = "-.-.";
    morseList['d'] = "-..";
    morseList['e'] = ".";
    morseList['f'] = "..-.";
    morseList['g'] = "--.";
    morseList['h'] = "....";
    morseList['i'] = "..";
    morseList['j'] = ".---";
    morseList['k'] = "-.-";
    morseList['l'] = ".-..";
    morseList['m'] = "--";
    morseList['n'] = "-.";
    morseList['o'] = "---";
    morseList['p'] = ".--.";
    morseList['q'] = "--.-";
    morseList['r'] = ".-.";
    morseList['s'] = "...";
    morseList['t'] = "-";
    morseList['u'] = "..-";
    morseList['v'] = "...-";
    morseList['w'] = ".--";
    morseList['x'] = "-..-";
    morseList['y'] = "-.--";
    morseList['z'] = "--..";
}