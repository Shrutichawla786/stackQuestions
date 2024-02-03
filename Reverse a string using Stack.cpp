Q.Reverse a string using Stack
link-->https://www.geeksforgeeks.org/problems/reverse-a-string-using-stack/1
code-->
char* reverse(char *s, int len)
{
    //code here
    stack<char>ch;
    for(int i=0;i<len;i++){
        ch.push(s[i]);
    }
    int j=0;
    while(!ch.empty()){
        s[j]=ch.top();
        j++;
        ch.pop();
    }
    return s;
}
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
