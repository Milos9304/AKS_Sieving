aks: src/main.cc src/io.h src/io.cc 
	gcc -std=c++14 -I /usr/include/eigen3 -o aks src/main.cc src/io.cc -lm -lstdc++ -lgmp
