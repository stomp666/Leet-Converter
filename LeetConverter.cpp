#include "LeetConverter.h"
bool LeetConverter::isBadSymbol(char input)
{
	// used in ConvertFromLeet
	char badSymbols[5] = { '-','2',']','<','>' };
	for (int i = 0; i < 5; i++) 
	{
		if (input == badSymbols[i]) return true;
	}
	return false;
}
std::string LeetConverter::ConvertToLeet(std::string input)
{
	std::string result{};
	bool letterInserted = false;
	std::transform(input.begin(), input.end(), input.begin(), ::toupper);
	for (int inp = 0; inp < input.length(); inp++)
	{
		letterInserted = false;
		for (int alpha = 0; alpha < 26; alpha++)
		{
			if (input[inp] == alphabet[alpha])
			{
				letterInserted = true;
				result.append(leetAlphabet[alpha]);
				break;
			}
		}
		if (!letterInserted) result.append(" ");
	}
	return result;
}
std::string LeetConverter::ConvertFromLeet(std::string input)
{
	std::string result{};
	bool letterInserted = false;
	std::string buf = "";
	for (int inp = 0; inp < input.length(); inp++)
	{
		if (input[inp] == ' ')
		{
			result += ' ';
			continue;
		}
		buf += input[inp];
		for (int alpha = 0; alpha < 26; alpha++)
		{
			if (buf == leetAlphabet[alpha] && 
				!isBadSymbol(input[static_cast<std::basic_string
					<char, std::char_traits<char>,
					std::allocator<char>>::size_type>(inp) + 1])) 
				// big ass if statement. too bad!
			{
				result += alphabet[alpha];
				buf = "";
				break;
			}
		}
	}
	return result;
}
