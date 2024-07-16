// https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        int i = 0;
        int j = 0;
        vector<int> v;
        while( i != n && j != m){
            if(arr1[i] <= arr2[j] ){
                if(v.size()==0 || v.back() != arr1[i]){
                    v.push_back(arr1[i]);
                }            
                i++;
            }
            else{
                if(v.size()==0 || v.back() != arr2[j]){
                    v.push_back(arr2[j]);
                }
                j++;
            }
        }
        while(i < n){
                if(v.back() != arr1[i]){
                    v.push_back(arr1[i]);
                }
                i++;
            }
            while(j < m){
                if(v.back() != arr2[j]){
                    v.push_back(arr2[j]);
                }
                j++;
            }
        
        return v;
