#include "stdafx.h"
#include "Menu.h"

namespace SortingAlgorithm
{

	Menu::Menu()
	{
	}


	Menu::~Menu()
	{
	}

	void Menu::PrintMainMenu()
	{
		std::cout << "Please Select an Option" << std::endl;
		std::cout << "1. Add Element to the Array" << std::endl;
		std::cout << "2. Print Current Array" << std::endl;
		std::cout << "3. Select Sorting Algorithm" << std::endl;
		std::cout << "4. Exit" << std::endl;

	}

	void Menu::PrintSortingMenu()
	{
		std::cout << "Please Select a Sorting Algorithm: " << std::endl; 
		std::cout << "1. Selection Sort" << std::endl;
		std::cout << "2. Bubble Sort" << std::endl;
		std::cout << "3. Insertion Sort" << std::endl;
	}

}