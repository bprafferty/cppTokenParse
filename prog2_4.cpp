#include "prog2_1.hpp"
#include "prog2_3.hpp"

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]){
    ifstream userFile(argv[1]);
    string currLine;
    int lineCounter = 1;
    Tokenizer t;
    Parser p;

    cout << "Assignment #2-4, Brian Rafferty, bprafferty03@gmail.com" << endl;

    while(getline(userFile, currLine)){
        try{
            t.Tokenize(currLine);
            vector<string> tokens = t.GetTokens();
        }

        catch(string error){
            cout << "Error on line " << lineCounter << ": " << error << endl;
            exit(0);
        }

        lineCounter++;
    }

    userFile.clear();
    userFile.seekg(0, userFile.beg);
    lineCounter = 1;

    while(getline(userFile, currLine)){
        t.Tokenize(currLine);
        vector<string> tokens = t.GetTokens();

        if(!p.Parse(tokens)){
            cout << "Parse error on line " << lineCounter << ": ";

            for(int i = 0; i < (tokens.size()-1); i++){
                cout << tokens[i] << " ";
            }
            cout << tokens[tokens.size()-1] << endl;
            exit(0);
        }
        lineCounter++;
    }

    userFile.clear();
    userFile.seekg(0,userFile.beg);

    while(getline(userFile, currLine)){
        t.Tokenize(currLine);
        vector<string> tokens = t.GetTokens();

        for(int i = 0; i<(tokens.size()-1); i++){
            cout << tokens[i] << ",";
        }
        cout << tokens[tokens.size()-1] << endl;
    }

    exit(0);
}
