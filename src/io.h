#ifndef IO_HEAD
#define IO_HEAD

#include <Eigen/Dense>
#include <fstream>
#include <string>
#include <Eigen/Core>
#include <gmpxx.h>

using namespace std;

using namespace Eigen;

Matrix<mpz_class, Dynamic, Dynamic> readMatrix(const char *filename);

#endif
