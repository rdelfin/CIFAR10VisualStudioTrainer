// OneHiddenLayerANN.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
using namespace arma;

int _tmain(int argc, _TCHAR* argv[])
{
	ifstream file("cifar10/data_batch_1.bin", ifstream::in);

	cout << "Hello world!" << endl << "Testing matrix multiplication..." << endl;

	mat A, B;
	A.randn(5, 5);
	B.randn(5, 5);

	A.print("A: ");
	B.print("B: ");
	(A*B).print("AxB: ");

	cout << "Reading file..." << endl;
	
	uint8_t type;
	file >> type;

	cout << "Type of first image: " << (int)type << endl;

	file.close();

	cout << "Press Enter to Continue";
	cin.ignore(std::numeric_limits<streamsize>::max(), '\n');

	return 0;
}

