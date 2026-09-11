
// Convert frequency map into a vector of pairs.

// Example:
// {1,1,2} → { {1,2}, {2,1} }

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<pair<int,int>> frequencyPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++; 
        }
        vector<pair<int,int>>result;
        for(auto &p:mp){
            result.push_back({p.first,p.second});
        }
        return result;
    }
};
