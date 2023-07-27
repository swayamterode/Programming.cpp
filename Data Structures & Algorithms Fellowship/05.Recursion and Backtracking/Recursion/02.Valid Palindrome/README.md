# Valid Palindrome

## Problem Description

A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string `s`, return `true` if it is a palindrome, or `false` otherwise.

**Example 1:**

```js
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
```

**Example 2:**

```js
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
```

**Example 3:**

```js
Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
```

**Constraints:**

- `1 <= s.length <= 2 * 10^5`
- `s consists only of printable ASCII characters.`

## Solutions

- <details>

    <summary>My Code</summary>

    <br>

  ```cpp
  // A palindrome is a word, phrase, number, or other sequence of characters that reads the same backward as forward.
  // The function uses two pointers technique to compare characters from the beginning and end of the string.

  class Solution {
  public:
      bool isPalindrome(string s) {
          if(s.length() <= 1) return true; // If the string has 0 or 1 character, it is considered a palindrome.

          int st = 0, en = s.length() - 1; // Initialize two pointers, st points to the start of the string and en points to the end.

          while(st < en) {
              // Skip non-alphanumeric characters from the start of the string.
              while(st < en && !isalnum(s[st])) st++;

              // Skip non-alphanumeric characters from the end of the string.
              while(st < en && !isalnum(s[en])) en--;

              // Compare the characters at the current positions (ignoring case).
              // If they are not the same, the string is not a palindrome.
              if(tolower(s[st]) != tolower(s[en])) return false;

              st++; // Move the start pointer forward.
              en--; // Move the end pointer backward.
          }

          // If the loop completes without finding any mismatch, the string is a palindrome.
          return true;
      }
  };

  ```

    </details>

- <details>

    <summary>Editorial</summary>

  ### Approach 1: Compare with Reverse

  **`Intuition:`**

  A palindrome is a word, phrase, or sequence that reads the same backwards as forwards. e.g. madam

  A palindrome, and its reverse, are identical to each other.

  **`Algorithm:`**

  We'll reverse the given string and compare it with the original. If those are equivalent, it's a palindrome.

  Since only alphanumeric characters are considered, we'll filter out all other types of characters before we apply our algorithm.

  Additionally, because we're treating letters as case-insensitive, we'll convert the remaining letters to lower case. The digits will be left the same.

  ```cpp
    class Solution {
    public:
    bool isPalindrome(string s) {
        string filtered_string, reversed_string;

        for (auto ch : s) {
        if (isalnum(ch))
            filtered_string += tolower(ch);
        }

        reversed_string.resize(filtered_string.size());
        reverse_copy(filtered_string.begin(), filtered_string.end(),
                    reversed_string.begin());

        return filtered_string == reversed_string;
    }
    };
  ```

  ### Approach 2: Two Pointers

  **Intuition**

  If you take any ordinary string, and concatenate its reverse to it, you'll get a palindrome. This leads to an interesting insight about the converse: every palindrome half is reverse of the other half.

  Simply speaking, if one were to start in the middle of a palindrome, and traverse outwards, they'd encounter the same characters, in the exact same order, in both halves!

  **Recursion Algorithm:**

  Since the input string contains characters that we need to ignore in our palindromic check, it becomes tedious to figure out the real middle point of our palindromic input.

  - Instead of going outwards from the middle, we could just go inwards towards the middle!
  - So, if we start traversing inwards, from both ends of the input string, we can expect to see the same characters, in the same order.

  **The resulting algorithm is simple:**

  - Set two pointers, one at each end of the input string
  - If the input is palindromic, both the pointers should point to equivalent characters, at all times. [^note-1]
  - If this condition is not met at any point of time, we break and return early. [^note-2]
  - We can simply ignore non-alphanumeric characters by continuing to traverse further.
  - Continue traversing inwards until the pointers meet in the middle.

    ```cpp
    class Solution {
    public:
    bool isPalindrome(string s) {
        if(s.length()<=1) return true;
        int st = 0, en = s.length()-1;
        while(st<en){
        while(st<en && !isalnum(s[st])) st++;
        while(st<en && !isalnum(s[en])) en--;
        if(tolower(s[st]) != tolower(s[en])) return false;
        st++;
        en--;
        }
        return true;
        }
    };
    ```

    </details>

</details>

</details>
