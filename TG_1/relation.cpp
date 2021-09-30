#include "relation.h"

Relation::Relation()
{
	std::cout << "Enter the cardinality: ";
	std::cin >> can;
	matrix = new bool* [can];
	for (int i = 0; i < can; i++)
	{
		matrix[i] = new bool[can] {0};
	}
	std::cout << "Enter your " << can << "x" << can << " matrix:\n";
	for (int i = 0; i < can; i++)
	{
		for (int j = 0; j < can; j++)
		{
			std::cin >> matrix[i][j];
		}
	}
}
void Relation::out_matrix()
{
	for (int i = 0; i < can; i++)
	{
		for (int j = 0; j < can; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << "\n";
	}
}
void Relation::transitive_closure()
{
	std::cout << "WFI:\n";
	for (int k = 0; k < can; k++) 
	{
		for (int i = 0; i < can; i++)
		{
			for (int j = 0; j < can; j++)
			{
				matrix[i][j] = matrix[i][j] || matrix[i][k] && matrix[k][j];
			}
		}
	}
	out_matrix();
}

Relation::~Relation()
{
	std::cout << "\nDestructor!\n";
	for (int i = 0; i < can; i++)
	{
		delete[] matrix[i];
	}
	delete matrix;
}
