7.You are given a number of sticks of varying lengths. You will iteratively cut the sticks into smaller sticks, discarding the shortest pieces until there are none left. At each iteration you will determine the length of the shortest stick remaining, cut that length from each of the longer sticks and then discard all the pieces of that shortest length. When all the remaining sticks are the same length, they cannot be shortened so discard them.

Given the lengths of  sticks, print the number of sticks that are left before each iteration until there are none left.

Example:

arr=[1,2,3]
The shortest stick length is 1, so cut that length from the longer two 2,3 and discard the pieces of length 1 . Now the lengths are arr[1,2]. Again, the shortest stick is of length 1,
so cut that amount from the longer stick and discard those pieces. There is only one stick left arr[1], so discard that stick. The number of sticks at each iteration are .[3,2,1]

Solution:

vector<int> cutTheSticks(vector<int> arr) {
   vector<int> result;
   
   while(!arr.empty()){
    int count=0;
   int small=*min_element(arr.begin(),arr.end());
   for(int i=0;i<arr.size();i++){
       if(arr[i]>0){
           count++;
           arr[i]-=small;
       }
   }
   if(count>0){
       result.push_back(count);
   }
   arr.erase(remove(arr.begin(),arr.end(),0),arr.end());
   }
   return result;
   
}
