#include "stdafx.h"
#include "BubbleSort.h"

namespace SortingAlgorithm
{
	BubbleSort::BubbleSort()
	{
	}


	BubbleSort::~BubbleSort()
	{
	}

	void BubbleSort::doBubbleSort(std::vector<int> userArray)
	{
		//Check to make sure the array is not empty: 
		if (userArray.size() == 0)
		{
			std::cout << "No Elements to Sort" << std::endl; 
			std::cout << std::endl; 
			return; 
		}

		int temp = 0;
		auto tempArray = userArray; 
		 
		//Traverse throught the array: 
		for (int j = 0; j < tempArray.size(); j++)
		{
			for (int i = 1; i < tempArray.size(); i++)
			{
				//If the element in the current index is smaller
				//than the element in the previous index, swap values: 
				if (tempArray[i] < tempArray[i - 1])
				{
					temp = tempArray[i - 1];
					tempArray[i - 1] = tempArray[i];
					tempArray[i] = temp;
				}
			}
		}

		//Print Sorted Array: 			
		for (auto l : tempArray)
		{
			std::cout << l << " ";
		}

		std::cout << std::endl;
		
		return; 
	}
}

