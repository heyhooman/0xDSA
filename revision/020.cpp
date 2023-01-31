/* K-th element of two sorted Arrays */

class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        vector<int>v;
        int i=0, j=0;
	    while(i<n){
	       v.push_back(arr1[i]);
	       i++;
	    }
	    while(j<m){
	       v.push_back(arr2[j]);
	       j++;
	    }
	    sort(v.begin(), v.end());
	    return v[k-1]; 
    }
};
