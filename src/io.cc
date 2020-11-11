#include <iostream>
#include <gmpxx.h>
#include <queue>
#include "io.h"

using namespace std;

Matrix<mpz_class, Dynamic, Dynamic> readMatrix(const char *filename){

    queue<string> buff;

    // Read numbers from file into buffer.
    ifstream infile;
    infile.open(filename);

    int rows = 0;
    while(!infile.eof()){

	++rows;
        string line, s;
        getline(infile, line);

        stringstream stream(line);
        while(!stream.eof()){
            stream >> s;
	    if(s[0]!='\0')
	        buff.push(s);
	}

     }
   
    infile.close();
    rows--;

    // Populate matrix with numbers.
    Matrix<mpz_class, Dynamic, Dynamic> result(rows, rows);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < rows; j++){
	    result(i,j) = mpz_class(buff.front(), 10); //base=10
	    buff.pop();
	}
    return result;
 };
