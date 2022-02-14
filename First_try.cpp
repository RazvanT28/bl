// First_try.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;



	void filtrareElementeMaiMari2(const int* valori, int nrValori, int valoarePrag, int** valoriMaiMari) {

		int* newArray = new int[nrValori+ 1];
	
		

		 
			
		int k = 0, ok = 0;
		for (int i = 0; i < nrValori; i++)
			if (valori[i] >= valoarePrag) {
				ok = 1;
				newArray[k++] = valori[i];
			
			}
		
		newArray[k++] = '\0';
		if (ok == 1)
			(*valoriMaiMari) = newArray;
		



	}



int main()
{
	int valori[100];
	int nr = 5, prag;
	cout << "Prag:";
	cin >> prag;
	for (int i = 0; i <nr; i++)
		cin >> valori[i];
	int* dynamicValues = nullptr;
	int noDynamicArrayValues = 0;

	//dynamicValues = (int*)malloc(100 * sizeof(int));
	noDynamicArrayValues = nr;
	dynamicValues = new int[noDynamicArrayValues];
 filtrareElementeMaiMari2(valori, nr, prag, &dynamicValues);
	for (int i = 0; i < nr; i++)
		cout << dynamicValues[i] << " ";


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
   