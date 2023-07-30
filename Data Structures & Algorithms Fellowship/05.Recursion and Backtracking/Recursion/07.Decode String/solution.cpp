class Solution
{
public:
    string decodeString(string s)
    {
        string ans = "";
        stack<char> st;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ']')
                st.push(s[i]);
            else
            {
                string temp = ""; // for taking substring
                string num = "";  // for taking number
                while (st.empty() != true && st.top() != '[')
                {
                    temp = st.top() + temp;
                    st.pop();
                }
                st.pop();
                while (st.empty() != true && isdigit(st.top()))
                {
                    num = st.top() + num;
                    st.pop();
                }
                int k = stoi(num);
                while (k--)
                {
                    for (int p = 0; p < temp.length(); p++)
                        st.push(temp[p]);
                }
            }
        }
        while (st.empty() != true)
        {
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};