10.Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

Solution:

class Solution {
public:
    int addDigits(int num) {
       long int rem=0;
    label:
      if(num>=10){
           while(num>0){
            rem+=num%10;
            num/=10;
        }
        num=rem;
        rem=0;
        goto label;
      }
      else return num;
    }
};
