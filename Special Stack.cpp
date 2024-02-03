Q.Special Stack
link-->https://www.geeksforgeeks.org/problems/special-stack/1
code-->#include<limits.h>
void push(stack<int>& s, int a){
	// Your code goes here
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	if(s.size()==n){
	    return true;
	}
	else{
	    return false;
	}
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	return s.size()==0;
}

int pop(stack<int>& s){
	// Your code goes here
	if(s.size()==0){
	    return -1;
	}
	int ans = s.top();
	s.pop();
	return ans;
}
void solve(stack <int>&s , int & mini){
    if(s.empty()){
        return;
    }
    int value= s.top();
    s.pop();
    solve(s , mini);
    if(mini>value){
        mini=value;
    }
    s.push(value);
}

int getMin(stack<int>& s){
	// Your code goes here
	int mini = INT_MAX;
	solve(s, mini);
	return  mini;
	
}


Expected Time Complexity: O(N) for getMin, O(1) for remaining all 4 functions.
Expected Auxiliary Space: O(1) for all the 5 functions.
  
