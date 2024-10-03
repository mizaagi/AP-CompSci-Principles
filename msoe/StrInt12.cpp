#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

int main() {
    // Declare everything
    int len = 0;
    int currentWordNum = 0;
    vector<string> words {};
    string currentWord;
    int listLength = 0;
    string s;

    // Get string to analyze
    cout << "Enter a sentence with multiple words: ";
    getline(cin, s);
    cout << "length: " << s.length() << endl;

    // Figuring out what words there are, adding them to a vector
    for (int lcv = 0; lcv < s.length(); lcv++) {
        if (s[lcv] ==  ' ') {
            cout << "Word added: " << currentWord << endl;
            words.push_back(currentWord);
            currentWord = "";
            currentWordNum++;
        } else {
            currentWord = currentWord + s[lcv];
            cout << "Building word... " << currentWord << endl;
        }
    }
    cout << "Word added: " << currentWord << endl;
            words.push_back(currentWord);
            currentWord = "";
            currentWordNum++;
    string allWords;
    
    // Output
    cout << "Number of words: " << words.size() << endl;
    for (int lcv2 = words.size()-1; lcv2 >= 0; lcv2--) {
        allWords += words[lcv2];
        allWords += ' ';
    }
    cout << "All words, reversed: " << allWords;
}

