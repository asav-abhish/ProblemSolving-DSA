// https://www.geeksforgeeks.org/problems/bubble-sort/1

class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
         
        for(int i=0; i <= n-2; i++){            
        for(int j = 0; j <= n-2-i; j++){
            if(arr[j] > arr[j + 1]){
                swap (arr[j], arr[j + 1]);
                }
            }
         }
    }
};
