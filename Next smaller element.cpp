Q.Help Classmates
link-->https://www.geeksforgeeks.org/problems/help-classmates--141631/1
code-->
  vector<int> help_classmate(vector<int> arr, int n) 
    { 
        // Your code goes here
        vector<int>ans(n);
        stack<int>s;
        s.push(-1);
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && arr[i]<=s.top()){
                s.pop();
            }
            if(!s.empty()){
                ans[i]=s.top();
            }
            s.push(arr[i]);
        }
        return ans;

}
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
