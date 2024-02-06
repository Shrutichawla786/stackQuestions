Q.Stack using two queues
link-->https://www.geeksforgeeks.org/problems/stack-using-two-queues/1
code->void QueueStack :: push(int x)
{
        // Your Code
        while(!q1.empty()){
             q2.push(q1.front());
                q1.pop();
        }
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        // Your Code  
           if(q1.empty()) return -1;
        int t= q1.front();
        q1.pop();
       return t;
}
Expected Time Complexity: O(1) for push() and O(N) for pop() (or vice-versa).
Expected Auxiliary Space: O(1) for both push() and pop().
