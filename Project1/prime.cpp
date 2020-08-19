#include "prime.h"
#include <iostream>
#include<vector>
int PrimeNumber;
int n = 200000;
int Count;
int Numbers[20000];
void PrimeCalculator();
int Atplace = 0;
  void main()

  {

	  std::cout<< "Which prime number you want to know ";
	  std::cin >> PrimeNumber;
	  PrimeCalculator();
	  std::cout << Numbers[PrimeNumber-1];
	  
  }

  void PrimeCalculator()
  
  {

	  for (int i = 1; i <= n; i++)
	  {

		  for (int temp = i; temp > 0; temp--)
		  {
			  if (i % temp == 0)
			  {

				  Count++;
				  
			  }
		  }

		  if (Count == 2)
		  {
			  Numbers[Atplace] = i;
			  Atplace++;
			  
			  Count = 0;

		  }
		  else(Count = 0);

	  }

  }
