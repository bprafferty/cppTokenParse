#include "prog2_1.hpp"
#include <iostream>

using namespace std;

bool Checker(string fileLine);

Tokenizer::Tokenizer(){

}

Tokenizer::~Tokenizer(){

}

void Tokenizer::Tokenize(string fileLine){
    int head = 0;
    int tail;
    vector<string> tokens;

    while(true){
        tail = fileLine.find(" ", head);

        string substring;

        if(tail != string::npos){
            substring = fileLine.substr(head, tail - head);
            head = tail + 1;
        }
        else {
            substring = fileLine.substr(head);
        }

        if(Checker(substring) == true){
            tokens.push_back(substring);
        }
        else {
            throw ("Unexpected token: " + substring);
        }

        if(tail == string::npos){
            break;
        }
    }
    tokensQueue.push_back(tokens);
}

vector<string> Tokenizer::GetTokens(){
    vector<string> tokens = tokensQueue[0];

    tokensQueue.erase(tokensQueue.begin());

    if(tokensQueue.size() < 0){
        throw("No tokens");
        exit(1);
    }
    return tokens;
}

bool Checker(string fileLine){
    string valid_tokens[] = {"push","pop","add","sub","mul",
                            "div","mod","skip","save","get"};

    for(int i = 0; i < 10; i++){
        if(fileLine == valid_tokens[i]){
            return true;
        }
    }

    for(int i = 0; i < fileLine.length(); i++){
        if(fileLine[i] < '0' || fileLine[i] > '9'){
            return false;
        }

        string decimalCheck = fileLine;
        for (char& c : decimalCheck){
            if(c == '.'){
                return false;
            }
        }
        return true;
    }
}
