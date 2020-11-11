#include <iostream>
#include <Eigen/Dense>
#include <gmpxx.h>

#include "io.h"

using namespace std;
using namespace Eigen;

int main(){

	Matrix<mpz_class, Dynamic, Dynamic> m = readMatrix("data/dim40seed0");	
        for(int y = 0; y < m.rows(); ++y){
		for(int x = 0; x < m.cols(); ++x)
			cout << m(y,x).get_str(10) << " ";
	
	cout << endl;
	}
	return 0;
}
