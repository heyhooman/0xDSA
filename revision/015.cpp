/* Search in a Rotated Array */

class Solution{
    public:
    int search(int A[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        for(int i=0; i<h+1; i++){
            if(A[i]==key){
                return i;
            }
        }
        return -1;
        //complete the function here
    }
};
