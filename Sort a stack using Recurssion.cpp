Q.Sort a stack Using Recursiion
link-->https://geeksforgeeks.org/problems/sort-a-stack/1
code->void pushAtBottom(stack<int>&s , int x){
    if(s.empty() || s.top()<x){
        s.push(x);
        return;
    }
    int top_ele= s.top();
    s.pop();
    pushAtBottom(s , x);
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

void SortedStack :: sort()
{
   //Your code here
   Reverse(s);
}
Expected Time Complexity: O(N*N)
Expected Auxilliary Space: O(N) recursive.
