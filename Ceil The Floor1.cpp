//  https://www.naukri.com/code360/problems/ceiling-in-a-sorted-array_1825401?leftPanelTabValue=SUBMISSION

pair<int, int> getFloorAndCeil(vector<int> &arr, int n, int x) {
	// Write your code here.
	
        int mi = -1;
        int max = INT_MAX;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] <= x && mi < arr[i]){
                mi = arr[i];
            }
        }
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] >= x && arr[i] < max){
                max = arr[i];
            }
        }
        if(max == INT_MAX) max=-1;
		pair<int, int> p;
		p.first = mi;
		p.second = max;
        return p;
}
