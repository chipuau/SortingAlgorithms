/*BubbleSort: Implements Bubble Sort with O(n^2) runtime*/

#pragma once
#include "stdafx.h"

namespace SortingAlgorithm
{
	class BubbleSort
	{
		public:
			BubbleSort();
			~BubbleSort();
			static void doBubbleSort(std::vector<int> userArray); 
	};

}

