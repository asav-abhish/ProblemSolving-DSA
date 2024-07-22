// https://www.geeksforgeeks.org/problems/selection-sort/1

int select(int arr[], int i,int n)
    {
        // code here such that selectionSort() sorts arr[]
        int min = i;
           for(int j=i+1;j<n;j++)
           {
               if(arr[j]<arr[min]) { min=j;}
           }
           return min;
    }
     
    void selectionSort(int arr[], int n)
    {
       for(int i=0;i<n-1;i++){
           int minimum =select(arr,i,n);
            int temp =arr[i];
            arr[i]=arr[minimum];
            arr[minimum]=temp;
       }
    }
