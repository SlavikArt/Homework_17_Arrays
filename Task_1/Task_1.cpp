#include <iostream>

int random(int min, int max)
{
	int k = max - min + 1;
	return rand() % k + min;
}

int main()
{
	const int rows = 5;
	const int cols = 4;

	int arr[rows][cols]{};

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = random(0, 100);
		}
	}

	std::cout << "Array:\n\n";

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << "\n";
	}
	std::cout << "\n";
}