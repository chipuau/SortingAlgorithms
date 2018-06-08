/*Selection Sort: Runs Selection Sort Algorithm with O(n^2) runtime*/

#pragma once
#include <vector>

namespace SortingAlgorithm
{
	class SelectionSort
	{
		public:
			SelectionSort();
			~SelectionSort();
			static void doSelectionSort(std::vector<int> userArray); 
	};

}

