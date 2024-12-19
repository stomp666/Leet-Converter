#include <iostream>
#include "LeetConverter.h"
int main()
{
    LeetConverter leetObject;
    std::string input = "Hello World";
  
    std::string result = leetObject.ConvertToLeet(input);
    std::cout << "From: " << input << "\nTo: " << result;
  
    input = leetObject.ConvertFromLeet(result);
    std::cout << "\nFrom: " << result << "\nTo: " << input;
}
