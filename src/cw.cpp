#include "cw.h"
#include <cstring>
#include <sstream>

cw::cw()
{
	command = new char[strlen("cw 1")+1]; //최소단위 1
	strcpy(command, "cw 1");
}

cw::cw(int _value)
{
	std::stringstream sstream;
	sstream<< "cw" << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}
double cw::get_delay()
{ 
	return 5; //딜레이 5초
}