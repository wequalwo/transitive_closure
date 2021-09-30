#pragma once
#include <iostream>
#include <vector>
class Relation
{
private:
	bool** matrix;
	int can;
public:
	Relation();
	void transitive_closure();
	void out_matrix();
	~Relation();
};

