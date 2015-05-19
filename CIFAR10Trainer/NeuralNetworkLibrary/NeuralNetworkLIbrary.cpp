// NeuralNetworkLIbrary.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "NeuralNetworkLIbrary.h"


// This is an example of an exported variable
NEURALNETWORKLIBRARY_API int nNeuralNetworkLIbrary=0;

// This is an example of an exported function.
NEURALNETWORKLIBRARY_API int fnNeuralNetworkLIbrary(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see NeuralNetworkLIbrary.h for the class definition
CNeuralNetworkLIbrary::CNeuralNetworkLIbrary()
{
	return;
}
