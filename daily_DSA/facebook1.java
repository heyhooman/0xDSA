//  Daily DSA w/Hooman

// This problem was asked by Facebook.

// You are given an array of non-negative integers that represents a two-dimensional elevation map where each element is unit-width wall and the integer is the height. Suppose it will rain and all spots between two walls get filled up.

// Compute how many units of water remain trapped on the map in O(N) time and O(1) space.

// For example, given the input [2, 1, 2], we can hold 1 unit of water in the middle.

// Given the input [3, 0, 1, 3, 0, 5], we can hold 3 units in the first index, 2 in the second, and 3 in the fourth index (we cannot hold 5 since it would run off to the left), so we can trap 8 units of water.
 
 
 
 public static void main(String[] args) {
        int[] height = {3, 0, 1, 3, 0, 5};
        int n = height.length;

        // find right max wall
        int[] rightWall = new int[n];
        rightWall[n-1] = height[n-1];
        for (int i = n-2; i >= 0; i--) {
            rightWall[i] = Math.max(height[i], rightWall[i + 1]);
        }
        System.out.println(Arrays.toString(rightWall));

        //calculate water trap
        int prevWall = 0, waterTrap = 0;
        for (int i = 0; i < height.length; i++) {
            waterTrap += Math.max(Math.min(prevWall,rightWall[i]) -height[i], 0);
            if(height[i] > prevWall) prevWall = height[i];
        }
        System.out.println(waterTrap);
    }