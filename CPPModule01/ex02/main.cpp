#include <iostream>

int	main( void ) {
	std::string		str = "HI THIS IS BRAIN";
	std::string		*strPTR = &str; // указатель
	std::string		&strREF = str; //ссылка 

	std::cout << &str << std::endl;
	std::cout << strPTR << std::endl;
	std::cout << &strREF << std::endl;
	
	std::cout << *strPTR << std::endl;
	std::cout << strREF << std::endl;
}