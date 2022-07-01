#include <iostream>

int random(int min, int max)
{
	int k = max - min + 1;
	return rand() % k + min;
}

int main()
{
	const int rows = 5;
	const int cols = 5;

	char arr[rows][cols]{};

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = '*';
		}
	}

	std::cout << "A:\n";

	for (int y = 0; y < rows; y++)
	{
		for (int x = 0; x < cols; x++)
		{
			if (x <= cols - 1 - y)
			{
				std::cout << arr[y][x];
			}
		}
		std::cout << "\n";
	}

	std::cout << "B:\n";

	for (int y = 0; y < rows; y++)
	{
		for (int x = 0; x < cols; x++)
		{
			if (x >= y)
			{
				std::cout << arr[y][x];
			}
			else
			{
				std::cout << " ";
			}
		}
		std::cout << "\n";
	}
}