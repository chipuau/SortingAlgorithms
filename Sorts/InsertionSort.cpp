/*Implements Insertion Sort running in O(n^2) time*/

#include "stdafx.h"
#include "InsertionSort.h"

namespace SortingAlgorithm
{

	InsertionSort::InsertionSort()
	{
	}


	InsertionSort::~InsertionSort()
	{
	}

	void SortingAlgorithm::InsertionSort::doInsertionSort(std::vector<int> userArray, int arraysize)
	{
		int temp = 0, insertIndex = 0; 

		//Iterate through the array: 
		for (int i = 1; i < arraysize; i++)
		{
			//Store index to insert into and its data: 
			temp = userArray[i]; 
			insertIndex = i; 

			//Adjust insertion index until the element is in the right location: 
			while (insertIndex > 0 && userArray[insertIndex - 1] > temp)
			{
				userArray[insertIndex] = userArray[insertIndex - 1]; 
				insertIndex--; 
			}

			//Insert the element being sorted: 
			userArray[insertIndex] = temp; 
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