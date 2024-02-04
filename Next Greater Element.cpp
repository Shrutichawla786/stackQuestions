Q.Next Greater Element
link-->https://www.geeksforgeeks.org/problems/next-larger-element-1587115620/1
code-->
   vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long> ans(n, -1);
        stack<long long >s;
        s.push(-1);
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && arr[i]>=s.top()){
                
                s.pop();
            }
            if(!s.empty()){
                ans[i]= s.top();
            }
            s.push(arr[i]);
            
        }
        return ans;
    }
Expected Time Complexity : O(N)
Expected Auxiliary Space : O(N)
