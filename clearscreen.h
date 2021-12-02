// inclusion of libraries
#include <iostream>
#include <string>

/*	clrscr == clear screen; string of special characters that will translate to a clear screen command.		*/
void clearscreen()	{std::cout	<<	"\033[2J\033[1;1H";}
/**/
