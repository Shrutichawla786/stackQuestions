Q.Evaluation of Postfix Expression
link-->https://www.geeksforgeeks.org/problems/evaluation-of-postfix-expression1735/1
code--> int evaluatePostfix(string s)
    {
        // Your code here
        
        stack<int>st;
        int op1=0;
        int op2=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='+' || s[i]=='-' ||s[i]=='*' ||s[i]=='/'){
                op2=st.top();
                st.pop();
                op1=st.top();
                st.pop();
                switch (s[i])
                {
                case '+':
                    st.push(op1+op2);
                    break;
                case '-':
                    st.push(op1-op2);
                    break;
                case '*':
                    st.push(op1*op2);
                    break;
                
                case '/':
                    st.push(op1/op2);
                    break;
                
                case '^':
                    st.push(pow(op1 ,op2));
                    break;
                }
            }
            else if(s[i]>='0' && s[i]<='9'){
                st.push(s[i]-'0');
            }
        }
      return  st.top();
    }
Expected Time Complexity: O(|S|)
Expected Auixilliary Space: O(|S|)
