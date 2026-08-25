// Task

// Return the first element that repeats.
// If none, return -1.
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int firstRepeating(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
            if(mp[x]>1)return x;
            
        }
        return -1;
    }
};