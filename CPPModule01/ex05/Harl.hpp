#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
private:
	/* data */
 	
	void info( void );
	void warning( void );
	void error( void );
	void debug( void );

public:
	void complain( std::string level );
	Harl(/* args */);
	~Harl();
};

#endif
