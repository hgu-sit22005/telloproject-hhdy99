#include "right.h"
#include <cstring>
#include <sstream>

right::right()
{
	command = new char[strlen("right 20")+1]; //최소단위 20
	strcpy(command, "right 20");
}

right::right(int _value)
{
	std::stringstream sstream;
	sstream<< "right" << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}
double right::get_delay()
{ 
	return 5; //딜레이 5초
}