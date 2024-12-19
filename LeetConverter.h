#ifndef __L33T
#define __L33T
#include <string>
#include <algorithm>
class LeetConverter
{
private:
	char alphabet[26] = {'A','B','C','D','E','F','G'
	,'H','I','J','K','L','M','N','O','P','Q','R','S'
	,'T','U','V','W','X','Y','Z'};
	std::string leetAlphabet[26] = { "4", "|3", 
		"(", "|]", "3", "|=", "6", "|-|", "|",
		"]", "|<", "1", "|77", "/\\/", "0", 
		"|>", "0,", "|2", "5", "7", "[_]", 
		"\\/","\\Y/","}{","`/", "2"};
	bool isBadSymbol(char input);
public:
	std::string ConvertToLeet(std::string input);
	std::string ConvertFromLeet(std::string input);
};
#endif
