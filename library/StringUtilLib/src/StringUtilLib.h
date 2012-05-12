///////////////////////////////////////////
// Caleb Wherry
// StringUtilLib.h
// 5/12/2012
///////////////////////////////////////////

// Compiler Includes
#include <sstream>

//Local Inclues
//

// Concert anything with the << oprator defined to a string:
template<class T>
std::string toString(const T& obj)
{
	std::stringstream ss;
	ss << obj;
	return ss.str();
}
