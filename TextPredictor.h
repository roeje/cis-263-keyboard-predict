//
// Created by Hans Dulimarta
//

#ifndef TEXTPREDICTOR_TEXTPREDICTOR_H
#define TEXTPREDICTOR_TEXTPREDICTOR_H

#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>

using namespace std;

class TextPredictor {
private:
    /* TODO: declare your data structures here */
public:
    TextPredictor();
    void scanWordsFrom (istream&);
    vector<string> wordsFromPrefix (const string& a_prefix) const;
    vector<string> wordsAfter (const string& a_word) const;
private:
    string lowercaseof (const string&) const;
    /* TODO add your private functions here */
};


#endif //TEXTPREDICTOR_TEXTPREDICTOR_H
