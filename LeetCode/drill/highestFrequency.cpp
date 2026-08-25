// Element with Highest Frequency
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution{
    public:
         int mostFrequent(vector<int>& nums) {
            unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;

        }
        int max=mp[0];
        for(auto x:mp){
            if(x>max){
                max=x;
            }
            
        }
        return max;

    }
};