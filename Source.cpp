#include<iostream>
#include "integer_vector.hpp"

int main()

{
	IntegerVector v;
	IntegerVectorInit(v);
	
	IntegerVectorRead(v, std::cin);
	IntegerVectorMycondition(v);
	
	std::cout << std::endl;

	IntegerVectorDestroy(v);
	
}
