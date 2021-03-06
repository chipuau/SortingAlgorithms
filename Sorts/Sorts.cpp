// Sorts.cpp : Defines the entry point for the console application.
//

/* Megan Chipman
   Sorting Algorithms
   06/08/2018 */


#include "stdafx.h"

using namespace SortingAlgorithm; 

int main()
{
	//Declare and Initialize Variables and Vector: 
	int userChoice = 0, algorithmChoice = 0;
	std::vector<int> userArray; 

	//Run Menu Until User Exits: 
	while (userChoice != 4)
	{
		//Print Menu and prompt User for Choice: 
		Menu::PrintMainMenu();
		std::cin >> userChoice;

		//Evaluate User Choice: 
		switch (userChoice)
		{
			//If 1 was selected, prompt User for an Integer: 
			case 1:
				std::cout << "Please Enter an Integer" << std::endl;
				std::cout << std::endl;

				//Fetch User Input: 
				int toAdd;
				std::cin >> toAdd;

				//Add Input to the Vector and print success message: 
				userArray.push_back(toAdd);
				std::cout << toAdd << " has been added to the array." << std::endl;
				std::cout << std::endl; 
				
				break;
			
			//If 2 was selected, check if Vector is empty: 
			case 2:
				if (userArray.size() == 0)
				{
					std::cout << "The array is currently empty." << std::endl;
				}

				//If Vector is not empty, then print all vector elements:  
				else
				{
					std::cout << "The current array is: ";

					for (auto i : userArray)
					{
						std::cout << i << " ";
					}

					std::cout << std::endl;
					std::cout << std::endl; 
				}

				break;

			//If 3 was selected, display Sorting Algorithm Menu and prompt user for choice: 
			case 3:
				Menu::PrintSortingMenu();
				std::cin >> algorithmChoice;

				//If the User selects 1, then run Selection Sorth: 
				if (algorithmChoice == 1)
				{
					SelectionSort::doSelectionSort(userArray);
				}

				else if (algorithmChoice == 2)
				{
					BubbleSort::doBubbleSort(userArray); 
				}

				else if (algorithmChoice == 3)
				{
					InsertionSort::doInsertionSort(userArray, userArray.size()); 
				}

				break;

			//If 4 was selected, then exit the while loop: 
			case 4:
				break;

			//Any other input should be treated as an invalid selection: 
			default:
				std::cout << "Invalid User Selection" << std::endl;
		}
	}

    return 0;
}

