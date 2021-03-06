//
// Project by Jack Fenton
// Northeastern University Department of Computer and Electrical Engineering
// EECE2560 Introduction to Engineering Algorithms
// Project begun on 2020-05-27.
//

#ifndef PROJECT3_GRID_H
#define PROJECT3_GRID_H

#include <fstream>
#include "matrix.h"
#include <string>
//
//class called grid that reads the letters in the
//		grid from a file and stores them in a matrix
//

class grid
{
public:
    
    grid(); // constructor
    void readFile(std::string filename); // read in the file and store data
    int getRows(); // gets the number of rows
    int getCols(); // gets the number of columns
    
    std::string getChar(int r, int c); // get the characters a specific position
    
    matrix<std::string> theGrid; // matrix of characters

};


#endif //PROJECT3_GRID_H
