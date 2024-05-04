#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    ifstream inputFile("lex_input.txt.txt");


    if (!inputFile) {
        cerr << "Error: Unable to open the file.\n";
        return 1;
    }


    string line;
    int lineNumber = 1;

    while (getline(inputFile, line)) {

        cout << "Line " << lineNumber << ": " << line << endl;


        if (line.find("int") != string::npos) {
            cout << "\t- Declaration of an integer variable.\n";
        }
        if (line.find("itn") != string::npos) {
            cout << "\t- Error: itn is not proper declaration of an integer variable.\n";
        }
        if (line.find("%") != string::npos) {
            cout << "\t- Modulus operator used to calculate remainder.\n";
        }
        if (line.find("=") != string::npos) {
            cout << "\t- Assignment operator used.\n";
        }
        if (line.find(";") != string::npos) {
            cout << "\t- Statement terminator used.\n";
        }
        if (line.find("if") != string::npos) {
            cout << "\t- Conditional statement.\n";
        }
        if (line.find("#") != string::npos) {
            cout << "\t- the # symbol is used to denote a preprocessor directive.\n";
        }
        if (line.find("iostream") != string::npos) {
            cout << "\t- provides basic input and output services for C++ programs.\n";
        }
        if (line.find("using namespace std") != string::npos) {
            cout << "\t-  imports all names from the std namespace into the current scope.\n";
        }
        if (line.find("main") != string::npos) {
            cout << "\t- declares the main function, which is the entry point of the C++ program.\n";
        }
        if (line.find("cout") != string::npos) {
            cout << "\t- cout is an object of the ostream class representing the standard output stream in C++.\n";
        }

        if (line.find("Welcome") != string::npos) {
            cout << "\t- it typically means displaying Welcome on the console.\n";
        }
        if (line.find("x") != string::npos) {
            cout << "\t- x is a variable type of integer.\n";
        }

        if (line.find("#") != string::npos) {
            cout << "\t- variable name can't start with #.\n";
        }


        lineNumber++;
    }


    inputFile.close();

    return 0;
}
