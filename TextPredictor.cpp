//
// Created by Hans Dulimarta
//

#include <iostream>
#include "TextPredictor.h"
using namespace std;

TextPredictor::TextPredictor() {

}

void TextPredictor::scanWordsFrom(istream &input) {
    string curr_word, next_word, w;

    /* TODO add your own code here */

    input >> w;
    curr_word = lowercaseof(w);
    while (input >> w) {
        next_word = lowercaseof(w);
//        clog << next_word << " follows " << curr_word << endl;
        /* TODO add your own code here */
        curr_word = next_word;
    }

    /* TODO add your own code here */

}

vector<string> TextPredictor::wordsFromPrefix(const string &p) const {
    vector<string> res;

    /* TODO complete this function (less than 5 lines of code) */
    return res;
}

vector<string> TextPredictor::wordsAfter(const string &w) const {
    vector<string> res;
    /* TODO complete this function (less than 5 lines of code) */
    return res;

}

string TextPredictor::lowercaseof(const string& word) const {
    string out = word;
    for (int k = 0; k < word.length(); k++)
    {
        out[k] = tolower(word[k]);
    }
    return out;
}