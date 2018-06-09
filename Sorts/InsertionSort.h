#pragma once
#include "stdafx.h"

namespace SortingAlgorithm
{

	class InsertionSort
	{
	public:
		InsertionSort();
		~InsertionSort();
		static void doInsertionSort(std::vector<int> userArray, int arraysize); 
	};

}
