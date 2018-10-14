#include "prog2_3.hpp"

#include <iostream>

using namespace std;

Parser::Parser(){

}

Parser::~Parser(){

}

bool Parser::Parse(vector<string> line){
    string single_inputs[] = {"pop","add","sub","mul",
                             "div","mod","skip"};
    string double_inputs[] = {"push","save","get"};

    for(int i = 0; i < 7; i++){
        if (line.front() == single_inputs[i] && line.size() == 1){
            return true;
        }
    }
    for (int i = 0; i < 3; i++){
        if (line.front() == double_inputs[i] && line.size() == 2){
            return true;
        }
    }
    return false;

}
