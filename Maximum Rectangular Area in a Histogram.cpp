Q.Maximum Rectangular Area in a Histogram
link-->https://www.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram-1587115620/1
code-->    vector<long long > nextSmallerElement(long long arr[], int n){
         // Your code goes here
        vector<long long>ans(n);
        stack<int>s;
        s.push(-1);
        for(int i=n-1;i>=0;i--){
            while(s.top()!=-1 && !s.empty() && arr[i]<=arr[s.top()]){
                s.pop();
            }
            if(!s.empty()){
                ans[i]=s.top();
            }
            s.push(i);
        }
        return ans;
        
    }
    
    vector<long long>prevSmallerElement(long long arr[], int n){
        vector<long long>ans(n);
        stack<int>s;
        s.push(-1);
        for(int i=0;i<n;i++){
            while(s.top()!=-1 && !s.empty() && arr[i]<=arr[s.top()]){
                s.pop();
            }
            if(!s.empty()){
                ans[i]=s.top();
            }
            s.push(i);
        }
        return ans;
    }
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        vector<long long>next(n);
        next = nextSmallerElement(arr , n);
        
        vector<long long>prev(n);
        prev = prevSmallerElement(arr ,n);
        
        long long area= INT_MIN;
        for(int i=0;i<n;i++) {
            if(next[i]==-1){
                next[i]=n;
            }
            long long  newarea= arr[i]*(next[i]-prev[i]-1);
            
            area = max(area , newarea);
        }
        return area;
    }
Expected Time Complxity : O(N)
Expected Auxilliary Space : O(N)
