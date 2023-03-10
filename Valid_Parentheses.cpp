#include <stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack <char> stc;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='{'|| s[i]=='('|| s[i]=='[')
            {
                stc.push(s[i]); 
            }
            else if(s[i]=='}'|| s[i]==')'|| s[i]==']')
            {
                if(stc.empty())
                return false;
                else if(s[i]=='}'&& stc.top()!='{')
                return false;
                else if(s[i]==')'&& stc.top()!='(')
                return false;
                else if(s[i]==']'&& stc.top()!='[')
                return false;
                else
                stc.pop();
            }
        }
            if(stc.empty())
            return true;
            else
            return false;
    }
};
