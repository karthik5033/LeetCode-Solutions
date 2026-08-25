// Reverse a Vector

// Concept: index loop, new vector
#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
        vector<int>reverseVector(vector<int>&nums){
            int l=nums.size();
            vector<int>rev(l);
            int idx=l-1;
            for(int x:nums){
                rev[idx]=x;
                idx--;
            }
            return rev;
        }
};