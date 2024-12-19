#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
using namespace std;

map<char, string> initMap(map<char, string> morseList) {
    // https://cplusplus.com/forum/beginner/192939/2/
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
    return morseList;
}

string toMorse(string input, map<char, string> m) {
    // used https://stackoverflow.com/questions/9438209/for-every-character-in-string to figure out how to iterate thru chars in a string
    string morseStr = "";
    for (char & c : input) {
        string current = m[c];
        morseStr += current;
        morseStr += "|";
    }
    return morseStr;
}

string toText(string input, map<char, string> m) {
    string morseWord;
    string text;
    vector<string> mKeys;
    // https://stackoverflow.com/questions/110157/how-to-retrieve-all-keys-or-values-from-a-stdmap-and-put-them-into-a-vector
    std::vector<char> vKeys;
    for(auto const& imap: m)
        vKeys.push_back(imap.first);
    // --------------------------------------------
    int ss1 = 0;
    int ss2 = 0;
    for (ss2; ss2 < input.length();) {
        while (input[ss2] != '|')
            ss2++;
        morseWord = input.substr(ss1, ss2);
        for (char k : vKeys) {
            if (k == morseWord)
                text += k;

        }
        ss1 = ss2;
    }
    return text;

    


    /* search for key from value: just gonna have to do this
    for (char k : m.keys) {
        if (m[k] == morseWord)
            return k;    
    }
    */
}