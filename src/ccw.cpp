#include "ccw.h"
#include <cstring>
#include <sstream>

ccw::ccw()
{
	command = new char[strlen("ccw 1")+1]; //최소단위 1
	strcpy(command, "ccw 1");
}

ccw::ccw(int _value)
{
	std::stringstream sstream;
	sstream<< "ccw" << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}
double ccw::get_delay()
{ 
	return 5; //딜레이 5초
}