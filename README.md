Brian Rafferty
bprafferty03@gmail.com

prog2_1.hpp
    Header class which includes all of the method declarations for tokenization of string inputs. Instantiates a 2D vector which will operate as the "queue-like" structure for holding all of the collected tokens.

prog2_1.cpp 
    Class that tokenizes input strings, separating them based upon a space delimiter. Each token is then processed using a boolean method called Checker, which compares the first token to the elements of an array containing every valid input. Next, the second token of the same line is processed and verified that it is an integer value. If both inputs return a true from the method, then the input string will be stored in a vector. The individual vector for each line will then be stored within another vector called tokensQueue. Any input that is incorrect will throw an error to the console. Another method called GetTokens is in this class, which serves the purpose of making the 2D vector behave as a queue by pulling the front vector off the structure, erasing the pulled vector's pointer, and then returning the contents of the pulled vector for more processing elsewhere.

prog2_2.cpp
    Driver class that operates by printing a header message, then continues by reading a file used in the initial command line argument. The driver calls methods within prog2_1.cpp to tokenize all of the data within the user's file. If there is an error during the tokenization process, the driver will print the following message: Error on line _: Unexpected token: _. If no errors occurred during the tokenization process, then all contents of the 2D vector will be printed one vector at a time in comma separated value format.

prog2_3.hpp
    Header class which inludes all of the method declarations in order to parse a vector containing string data.

prog2_3.cpp
    Class that parses a vector containing a string. It does so with a single boolean method that will return true if the input adheres to specific criteria. First, two arrays are instantiated which contain all valid inputs: one containing all of the inputs that must exist on their own line, and the other contains all of the inputs that require a single integer value to come after them. The first value within each vector will be compared to the data within the arrays, which will then determine if it also contains the corresponding correct size. Any incorrect input will immediately end the parsing process and will return false.

prog2_4.cpp
    Driver class that first prints a header, then reads the user's file line by line, tokenizing each input along the way. If there is a tokenization error, then an error message will be thrown and the program will end. If tokenization was successful, then the program will reread the file, parsing each line along the way. If there is a parsing error, then an error message will be thrown and the program will end. If both tokenization and parsing are successful, then the file will be reread for a third time, tokenizing the data line by line, creating the 2D vector structure. Afterwards, every vector will be printed in comma separated value format.

