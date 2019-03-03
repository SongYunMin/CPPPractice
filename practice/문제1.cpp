//#include <iostream>
//
//void calcBasic(int &x, int &y)
//{
//	std::cout <<"add: "<< x + y << std::endl;
//	std::cout <<"sub: "<< x - y << std::endl;
//	std::cout <<"mul: "<< x * y << std::endl;
//}
//
//void printHeader(void)
//{
//	std::cout << "[input]" << std::endl;
//}
//
//void printMiddle(void)
//{
//
//	std::cout << "[result]" << std::endl;
//}
//
//void printFooter(void)
//{
//	std::cout << "[end]" << std::endl;
//}
//
//void calcDiv(int &x, int &y)
//{
//	std::cout << "div: " << x / y << "." << x % y << std::endl;
//}
//
//int main(void)
//{
//	int num1 = 0;
//	int num2 = 0;
//
//	printHeader();
//
//	std::cout << "input#1: "; std::cin >> num1;
//	std::cout << "input#2: "; std::cin >> num2;
//	
//	printMiddle();
//
//	calcBasic(num1, num2);
//	calcDiv(num1, num2);
//	
//	printFooter();
//	return 0;
//}