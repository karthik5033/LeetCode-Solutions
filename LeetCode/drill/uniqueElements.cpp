// Count Unique Elements

// Concept: unordered_set mindset via map

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution{
public:
    int freq(vector<int >&nums){
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        return mp.size();
    }
};