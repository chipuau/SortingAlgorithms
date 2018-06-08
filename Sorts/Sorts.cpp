// Sorts.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace SortingAlgorithm; 

int main()
{
	int userChoice = 0, algorithmChoice = 0;
	std::vector<int> userArray; 

	while (userChoice != 4)
	{
		Menu::PrintMainMenu();
		std::cin >> userChoice;

		switch (userChoice)
		{
			case 1:
				std::cout << "Please Enter an Integer" << std::endl;
				std::cout << std::endl;

				int toAdd;
				std::cin >> toAdd;
				userArray.push_back(toAdd);
				std::cout << toAdd << " has been added to the array." << std::endl;
				std::cout << std::endl; 
				break;

			case 2:
				if (userArray.size() == 0)
				{
					std::cout << "The array is currently empty." << std::endl;
				}

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

			case 3:
				Menu::PrintSortingMenu();
				std::cin >> algorithmChoice;

				if (algorithmChoice == 1)
				{
					SelectionSort::doSelectionSort(userArray);
				}

				break;

			case 4:
				break;

			default:
				std::cout << "Invalid User Selection" << std::endl;
		}
	}

    return 0;
}

