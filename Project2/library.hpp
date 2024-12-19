#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
using namespace std;

map<string, string> initMap(map<string, string> morseList) {
    // https://cplusplus.com/forum/beginner/192939/2/
    morseList[" "] = " ";
    morseList["0"] = "-----";
    morseList["1"] = ".----";
    morseList["2"] = "..---";
    morseList["3"] = "...--";
    morseList["4"] = "....-";
    morseList["5"] = ".....";
    morseList["6"] = "-....";
    morseList["7"] = "--...";
    morseList["8"] = "---..";
    morseList["9"] = "----.";
    morseList["a"] = ".-";
    morseList["b"] = "-...";
    morseList["c"] = "-.-.";
    morseList["d"] = "-..";
    morseList["e"] = ".";
    morseList["f"] = "..-.";
    morseList["g"] = "--.";
    morseList["h"] = "....";
    morseList["i"] = "..";
    morseList["j"] = ".---";
    morseList["k"] = "-.-";
    morseList["l"] = ".-..";
    morseList["m"] = "--";
    morseList["n"] = "-.";
    morseList["o"] = "---";
    morseList["p"] = ".--.";
    morseList["q"] = "--.-";
    morseList["r"] = ".-.";
    morseList["s"] = "...";
    morseList["t"] = "-";
    morseList["u"] = "..-";
    morseList["v"] = "...-";
    morseList["w"] = ".--";
    morseList["x"] = "-..-";
    morseList["y"] = "-.--";
    morseList["z"] = "--..";
    return morseList;
}

string toMorse(string input, map<string, string> m) {
    // used https://stackoverflow.com/questions/9438209/for-every-character-in-string to figure out how to iterate thru chars in a string
    string morseStr = "";
    for (int i = 0; i < input.length(); i++) {
        string current = m[string(1, input[i])];
        morseStr += current;
        if (i != input.length() - 1)
            morseStr += "|";
    }
    return morseStr;
}

string toText(string input, map<string, string> m) {
    string morseWord;
    string text;
    // https://stackoverflow.com/questions/110157/how-to-retrieve-all-keys-or-values-from-a-stdmap-and-put-them-into-a-vector
    vector<string> vKeys;
    for(auto const& imap: m)
        vKeys.push_back(imap.first);
    // --------------------------------------------
    int ss1 = 0;
    int ss2 = 0;
    for (int i = 0; ss2 < input.length()-1; i++) {
        while (input[ss2] != '|' && ss2 < input.length())
            ss2++;
        morseWord = input.substr(ss1, ss2-ss1);
        for (string k : vKeys) {
            if (m[k] == morseWord)
                text += k;
        }
        ss1 = ss2 + 1;
        ss2++;
    }
    return text;
}