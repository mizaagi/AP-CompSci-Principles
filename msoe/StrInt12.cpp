#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

int main() {
    cout << "Enter a string: ";
    int len = 0;
    string s;
    cin >> s;
    int currentWordNum = 0;
    vector<string> words {};
    string currentWord;
    int listLength = 0;
    for (int lcv = 0; lcv < s.length(); lcv++) {
        if (s[lcv] ==  ' ') {
            words.push_back(currentWord);
            currentWord = "";
            currentWordNum++;
        } else {
            currentWord = currentWord + s[lcv];
        }
    }
    string allWords;
    cout << words.size();
    for (int lcv2 = 0; lcv2 < words.size(); lcv2++) {
        allWords += words[lcv2];
        allWords += ' ';
    }
    cout << allWords;
}

