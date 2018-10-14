#include "prog2_1.hpp"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    ifstream userFile(argv[1]);
    Tokenizer t;
    int lineCounter = 1;
    string currLine;

    cout << "Assignment #2-2, Brian Rafferty, bprafferty03@gmail.com" << endl;

    while (getline(userFile, currLine)){
        try{
            t.Tokenize(currLine);
        }
        catch(string error){
            cout << "Error on line " << lineCounter << ": " << error << endl;
            exit(0);
        }
        lineCounter++;
    }

    for(int n = 0; n < lineCounter - 1; n++){
        vector<string> tokens = t.GetTokens();
        for (int i = 0; i < (tokens.size()-1); i++){
            cout << tokens[i] << ",";
        }
        cout << tokens[tokens.size()-1] << endl;
    }

}
