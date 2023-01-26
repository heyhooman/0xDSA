//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int H[10009];
int s = -1;
int parent(int i) {
    return (i - 1) / 2;
}
int leftChild(int i) {
    return ((2 * i) + 1);
}
int rightChild(int i) {
    return ((2 * i) + 2);
}
void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        swap(H[parent(i)], H[i]);
        i = parent(i);
    }
}
void shiftDown(int i) {
    int maxIndex = i;
    int l = leftChild(i);

    if (l <= s && H[l] > H[maxIndex]) {
        maxIndex = l;
    }
    int r = rightChild(i);

    if (r <= s && H[r] > H[maxIndex]) {
        maxIndex = r;
    }
    if (i != maxIndex) {
        swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}
void insert(int p) {
    s = s + 1;
    H[s] = p;
    shiftUp(s);
}

// } Driver Code Ends
// User function Template for C++
// 1. parent(i): Function to return the parent node of node i
// 2. leftChild(i): Function to return index of the left child of node i
// 3. rightChild(i): Function to return index of the right child of node i
// 4. shiftUp(int i): Function to shift up the node in order to maintain the
// heap property
// 5. shiftDown(int i): Function to shift down the node in order to maintain the
// heap property.
// int s=-1, current index value of the array H[].

class Solution {
  public:
    int extractMax() {
        // your code here
        int x = H[0];
        swap(H[0],H[s--]);
        shiftDown(0);
        return x;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            insert(k);
        }

        Solution ob;

        cout << "Node with maximum priority : " << ob.extractMax() << "\n";
        cout << "Priority queue after "
             << "extracting maximum : ";
        int j = 0;
        while (j <= s) {
            cout << H[j] << " ";
            j++;
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
