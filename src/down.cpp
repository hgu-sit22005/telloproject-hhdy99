#include "down.h"
#include <cstring>
#include <sstream>

down::down()
{
	command = new char[strlen("down 20")+1]; //최소단위 20
	strcpy(command, "down 20");
}

down::down(int _value)
{
	std::stringstream sstream;
	sstream<< "down" << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}
double down::get_delay()
{ 
	return 5; //딜레이 5초
}