// https://www.geeksforgeeks.org/problems/data-type-1666706751/1

class Solution {
  public:
    int dataTypeSize(string str) {
        // your code here
        char ch=str[0];
        switch(ch){
         case 'C':
            return sizeof(char) ;
            break;
            
         case 'I':
           return sizeof(int);
           break;
           
         case 'L':
          return sizeof(long) ;
          break;
          
          case'F':
          return sizeof(float);
          break;
          
          case 'D':
          return sizeof(double) ;
          break;
          
           default : return -1;
        }
    }
