// Create Pair (min, max)

// Concept: pair, traversal

#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
        pair<int,int> Minmax(vector<int>&nums){
            int min=nums[0];
            int max=nums[0];

            for(int x:nums){
                if(x<min) min=x;
                if(x>max) max =x;

            }
            return {min,max};
        }
};