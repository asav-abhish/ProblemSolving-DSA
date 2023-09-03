//https://hack.codingblocks.com/app/contests/4001/1364/problem
n =5;

                          5 4 3 2 1 0 1 2 3 4 5
                            4 3 2 1 0 1 2 3 4 
                              3 2 1 0 1 2 3 
                                2 1 0 1 2 
                                  1 0 1 
                                    0 
                                  1 0 1 
                                2 1 0 1 2 
                              3 2 1 0 1 2 3 
                            4 3 2 1 0 1 2 3 4 
                          5 4 3 2 1 0 1 2 3 4 5

  #include<iostream>
using namespace std;
int main() {

    int N, st, sp;
    cin >> N;
    st = (2 * N) + 1;
    sp = 0;
    int val = N ;
    for( int row = 1; row <= (2 * N) + 1; row++){
         
        for( int col = 1; col <= sp; col++){
            cout <<"   ";
        }
        int cval = val;
        for( int col = 1; col <= st; col++){
                     cout << cval<<"  "  ; 
                     if( col < st / 2 + 1){
                        cval--;
                     }
                     else{
                        cval++;
                     }
               
        }  

             if(row < N + 1){
                sp ++;
                st -= 2;
                val--;
             }
             else{
                sp--;
                st+=2;
                val ++;
             } 
             
            
                cout << endl;
    }
    return 0;
}
