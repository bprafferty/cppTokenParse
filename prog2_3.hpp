#ifndef __PARSER__
#define __PARSER__

#include <vector>
#include <string>

using namespace std;

class Parser {
public:
    Parser();
    ~Parser();
    bool Parse(vector<string> s);
};

#endif
