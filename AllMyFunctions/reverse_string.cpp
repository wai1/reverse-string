/*  Author: Walt Iddings
*   This function reverses the string parameter by using the 
*   reverse algorithm. Complexity is linear in half the 
*   distance between first and last character in the string.
*	
*/

#include "reverse_string.h"
#include <algorithm>
#include <string>

namespace reverse_string {
	
	// Version submitted
	std::string reverse_string(const std::string& inputString)
	{
		std::string reverseS(inputString.crbegin(), inputString.crend());

		return reverseS;
	}

/*******************************************************************************************/
	// Version using value type parameter and string reverse function
	std::string reverse_string(std::string inputString)
	{
		std::reverse(inputString.begin(), inputString.end());

		return inputString;
	}
	
/*******************************************************************************************/
	std::string reverse_string(const std::string& inputString)
	{

		std::string reverseS;
		reverseS.reserve(inputString.size());

		std::reverse(reverseS.begin(), reverseS.end());

		return reverseS;
	}

/*******************************************************************************************/

/*  This function reverses the string parameter by using the
*   string reverse iterator. 
* 
* #include "reverse_string.h"
* #include <string>
* 
*  std::string reverse_string(const std::string& inputString)
{
    std::string reverseS("");

    for (auto rit = inputString.crbegin(); rit != inputString.crend(); ++rit)
        reverseS += *rit;

    return reverseS;
*/

/*******************************************************************************************/

/*  This function has a string parameter which is the string
*   to reverse. The characters of the string are pushed onto
*   a stack. To build the reverse string, each character at
*   the top of the stack is appended to the reverse string.
*	Note: This was not solved properly since I was supposed 
*   to use the standard C++ facilities.
* 
* #include "reverse_string.h"
* #include <stack>
* #include <string>
* 
* std::string reverse_string(std::string inputString)
	{
		std::string reverseString;
		std::stack<char> charStack;
		
		// Fill stack with characters from the input string
		for (int i = 0; i < inputString.size(); i++)
			charStack.push(inputString[i]);

		// Read top character of stack and append to string
		while (!charStack.empty())
		{
			reverseString += charStack.top();
			charStack.pop();
		}

		return reverseString;
	}
*/
	

}  // namespace reverse_string
