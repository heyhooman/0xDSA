/* Rotation */

class Solution{
public:	
	int findKRotation(int arr[], int n) {
	   vector<int>v;
	   for(int i=0; i<n; i++){
	       v.push_back(arr[i]);
	   }
	   sort(v.begin(), v.end());
	   int x= v[0];
	   for(int i=0; i<n; i++){
	       if(arr[i]==x){
	           return i;
	    }
	  } 
	  return 0;
	    // code here
	}

};
