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
		
		//Traverse throught the array: 
		for (int j = 0; j < userArray.size(); j++)
		{
			for (int i = 1; i < userArray.size(); i++)
			{
				//If the element in the current index is smaller
				//than the element in the previous index, swap values: 
				if (userArray[i] < userArray[i - 1])
				{
					temp = userArray[i - 1];
					userArray[i - 1] = userArray[i];
					userArray[i] = temp;
				}
			}
		}

		//Print Sorted Array: 			
		for (auto l : userArray)
		{
			std::cout << l << " ";
		}

		std::cout << std::endl;
		
		return; 
	}
}

