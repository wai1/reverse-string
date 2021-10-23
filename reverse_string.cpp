/*  This function reverses the string parameter by using the 
*   reverse algorithm. Complexity is linear in half the 
*   distance between first and last character in the string.
*/

#include "reverse_string.h"

namespace reverse_string {

	std::string reverse_string(const std::string& inputString)
	{
		// Use string constructor with two iterators
		std::string reverseS(inputString.crbegin(), inputString.crend());

		return reverseS;
	}
}
