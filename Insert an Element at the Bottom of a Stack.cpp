Q.Insert an Element at the Bottom of a Stack
link-->https://www.geeksforgeeks.org/problems/insert-an-element-at-the-bottom-of-a-stack/1
code-->class Solution{
public:
    void solve(stack<int>&st , int x){
        if(st.empty()){
            st.push(x);
            return;
        }
        int t= st.top();
        st.pop();
        solve(st , x);
        st.push(t);
    }
    stack<int> insertAtBottom(stack<int> st,int x){
        
        solve(st , x);
        return st;
    }
};
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)
