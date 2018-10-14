#ifndef __TOKENIZER__
#define __TOKENIZER__

#include <string>
#include <vector>

using namespace std;

class Tokenizer {
private:
    vector< vector<string> > tokensQueue;
public:
    Tokenizer();
    ~Tokenizer();
    void Tokenize(string fileLine);
    vector<string> GetTokens();
};

#endif
