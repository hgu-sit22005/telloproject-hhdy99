#include "up.h"
#include <cstring>
#include <sstream>

up::up()
{
	command = new char[strlen("up 20")+1]; //최소단위 20
	strcpy(command, "up 20");
}

up::up(int _value)
{
	std::stringstream sstream;
	sstream<< "up" << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}
double up::get_delay()
{ 
	return 5; //딜레이 5초
}