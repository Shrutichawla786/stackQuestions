Q.Sort a stack

link->https://www.geeksforgeeks.org/problems/sort-a-stack/1
code->void SortedStack :: sort()
{
   //Your code here
   vector<int>v;
   while(!s.empty()){
       v.push_back(s.top());
       s.pop();
   }
   std::sort(v.begin() ,v.end());
   for(int i=0;i<v.size();i++){
       s.push(v[i]);
   }
}
  Expected Time Complexity: O(N*N)
Expected Auxilliary Space: O(N) recursive.
