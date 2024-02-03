Q.Parenthesis Checker
link-->https://www.geeksforgeeks.org/problems/parenthesis-checker2744/1
Code-->class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code her
        stack<char>s;
        for(int i=0;i<x.length();i++){
            if(x[i]=='(' || x[i]=='{' || x[i]=='['){
                s.push(x[i]);
            }
            else if(x[i]==')'){
                if(!s.empty() && s.top()=='('){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else if(x[i]==']'){
                if(!s.empty() && s.top()=='['){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else if(x[i]=='}'){
                if(!s.empty() && s.top()=='{'){
                    s.pop();
                }
                else{
                    return false;
                }
            }
        }
        return s.empty();
    }
Expected Time Complexity: O(|x|)
Expected Auixilliary Space: O(|x|)
