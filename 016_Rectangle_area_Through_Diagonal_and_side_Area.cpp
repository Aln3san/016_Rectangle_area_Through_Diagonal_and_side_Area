// 016_Rectangle_area_Through_Diagonal_and_side_Area
#include <iostream>

int main()
{

    unsigned int side, diagonal;
	std::cout << "Please enter the side length of the rectangle ?" << std::endl;
	std::cin >> side;
	std::cout << "Please enter the diagonal length of the rectangle ?" << std::endl;
	std::cin >> diagonal;

	float Area = side * sqrt( pow(diagonal, 2) - pow(side, 2) );
	std::cout << "The area of the rectangle is: " << Area << std::endl;
	return 0;
}
