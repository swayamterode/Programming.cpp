# Decode String

## Problem Description

Given an encoded string, return its decoded string.

The encoding rule is: k[encoded_string], where the encoded_string inside the square brackets is being repeated exactly k times. Note that k is guaranteed to be a positive integer.

You may assume that the input string is always valid; there are no extra white spaces, square brackets are well-formed, etc. Furthermore, you may assume that the original data does not contain any digits and that digits are only for those repeat numbers, k. For example, there will not be input like 3a or 2[4].

The test cases are generated so that the length of the output will never exceed `10^5`.

**Example 1:**

```js
Input: s = "3[a]2[bc]";
Output: "aaabcbc";
```

**Example 2:**

```js
Input: s = "3[a2[c]]";
Output: "accaccacc";
```

**Example 3:**

```js
Input: s = "2[abc]3[cd]ef";
Output: "abcabccdcdcdef";
```

## Solution

```cpp
class Solution {
public:
	string decodeString(string s) {
        string ans="";
        stack<char>st;
        for(int i=0;i<s.length();i++) {
            if(s[i]!=']')
                st.push(s[i]);
            else {
                string temp="";//for taking substring
                string num="";//for taking number
                while(st.empty()!=true && st.top()!='[') {
                    temp=st.top()+temp;
                    st.pop();
                }
                st.pop();
                while(st.empty()!=true && isdigit(st.top()))
                {
                    num=st.top()+num;
                    st.pop();
                }
                int k=stoi(num);
                while(k--) {
                    for(int p=0;p<temp.length();p++)
                        st.push(temp[p]);
                }
            }
        }
        while(st.empty()!=true) {
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
	}
};
```
