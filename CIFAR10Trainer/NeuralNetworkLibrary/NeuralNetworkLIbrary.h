// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the NEURALNETWORKLIBRARY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// NEURALNETWORKLIBRARY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef NEURALNETWORKLIBRARY_EXPORTS
#define NEURALNETWORKLIBRARY_API __declspec(dllexport)
#else
#define NEURALNETWORKLIBRARY_API __declspec(dllimport)
#endif

// This class is exported from the NeuralNetworkLIbrary.dll
class NEURALNETWORKLIBRARY_API CNeuralNetworkLIbrary {
public:
	CNeuralNetworkLIbrary(void);
	// TODO: add your methods here.
};

extern NEURALNETWORKLIBRARY_API int nNeuralNetworkLIbrary;

NEURALNETWORKLIBRARY_API int fnNeuralNetworkLIbrary(void);
