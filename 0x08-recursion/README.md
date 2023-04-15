C - Recursion
wildcmp
Here's the implementation of the wildcmp function in C using recursion:

The idea is to compare the current character of s1 with the current character of s2. If they match, we continue recursively comparing the next characters. If they don't match and there's no star in s2 to replace the character, the strings don't match. If we encounter a star, we can either skip it and compare s1 with the rest of s2, or we can skip the first character of s1 and compare the rest of s1 with s2. We return true if we reach the end of both strings simultaneously, meaning they match.

palindrome recursion
This code is a C program that checks whether a given string is a palindrome or not using recursion. The main function calls the is_palindrome function with different strings to check if they are palindromes.

The is_palindrome function first calculates the length of the string using the _print_str_len function and then calls the _check_palindrome function with the leftmost and rightmost indices of the string. The _check_palindrome function checks if the string is a palindrome recursively by comparing the characters at the leftmost and rightmost indices of the string and then moving towards the center of the string.

If the characters at the leftmost and rightmost indices are the same, the function calls itself again with the indices moved towards the center of the string. If the characters are not the same, the function returns 0 indicating that the string is not a palindrome.

If the _check_palindrome function has successfully compared all the characters of the string, the function returns 1 indicating that the string is a palindrome.

The program then prints the results of the is_palindrome function for different strings.
