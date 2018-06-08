/*Selection Sort: Runs Selection Sort Algorithm with O(n^2) runtime*/

#include "stdafx.h"
#include "SelectionSort.h"

namespace SortingAlgorithm
{
	SelectionSort::SelectionSort()
	{
	}


	SelectionSort::~SelectionSort()
	{
	}

	void SelectionSort::doSelectionSort(std::vector<int> userArray)
	{
		int smallest = 0, temp = 0; 
		
		//Check if User Array is Empty
		if (userArray.size() == 0)
		{
			std::cout << "No Elements to Sort" << std::endl;
			return; 
		}

		auto tempArray = userArray; 

		//Traverse the Array
		for (int i = 0; i < tempArray.size() - 1 ; i++)
		{
			//Set Index of Smallest Element to the Current Index
			smallest = i; 

			//Check for an Index Containing a Smaller Value
			for (int j = i + 1; j < tempArray.size(); j++)
			{
				if (tempArray[j] < tempArray[smallest])
				{
					smallest = j; 
				}
			}

			//Swap Current Value with Smaller Value If Found
			temp = tempArray[i]; 
			tempArray[i] = tempArray[smallest]; 
			tempArray[smallest] = temp; 
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