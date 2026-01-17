#include <iostream>

using namespace std;

/**
 * Checks if a given string is a palindrome using a two-pointer approach.
 * 
 * @param str The string to be checked.
 * @param len The length of the string.
 * @return true if the string is a palindrome, false otherwise.
 */
bool isPalindrome(string str, int len) {
    int left = 0, right = len - 1;

    // Compare characters from both ends moving towards the center
    while (left < right) {
        // If characters at current positions do not match, it's not a palindrome
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    // If the loop completes, the string is a palindrome
    return true;
}

int main() {
    // Input string to check
    string str = "ABCDCBA";

    // Calculate the length of the string
    int len = str.length();

    // Call the function and store the result
    bool result = isPalindrome(str, len);

    // Output the result (1 for true, 0 for false)
    cout << result << endl;

    return 0;
}