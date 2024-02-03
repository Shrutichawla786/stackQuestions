Q.Reverse a Stack
link-->https://www.geeksforgeeks.org/problems/reverse-a-stack/1
code-->
class Solution{
public:
void pushAtBottom(stack<int>&s , int top){
    if(s.empty()){
        s.push(top);
        return;
    }
    int top_ele= s.top();
    s.pop();
    pushAtBottom(s , top);
    s.push(top_ele);
}
    void Reverse(stack<int> &s){
        int n = s.size();
        if(n==1){
            return;
        }
        int top=s.top();
        s.pop();
        Reverse(s);
        
        pushAtBottom(s , top);
    }
};

Expected Time Complexity: O(N2)
Expected Auxiliary Space: O(1)
  
