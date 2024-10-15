// Programmer: Mindy Chen & Avril Cao
// Date completed: 10.15.24
// Program for practice of streams 

#include <iostream> 
#include <fstream>
#include <string>

using namespace std;
 
int main ( ) 
{
    ifstream inFile; 
    ofstream outFile;

    //Set variables to the input and output stream files

    int intOne;
    int intTwo;
    char c; 
    string word;

    //Set variable to each of the lines in the file we need to read 

    inFile.open("inData.txt");
    outFile.open("outData.txt");

    //Open the files

    inFile >> intOne >> intTwo;
    outFile << "Sum: " << intOne + intTwo << endl;

    //Reads the first line in the file and outputs the sum of the two integers

    inFile >> c;
    outFile << "Ascii value: " << int (c) << endl;

    //Reads the second line and outputs the Ascii value of the charcter 

    inFile >> word;
    outFile << "Word:" << word << endl;

    //Reads the third line and outputs the string

    inFile.close();
    outFile.close();

    //Close the input and output files

     return 0; 
}
/*
Sum: 1007675648
Ascii value: 95
Word:BYeeee??!!!
*/