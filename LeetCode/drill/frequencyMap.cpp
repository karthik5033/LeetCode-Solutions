#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution{
    public:
        unordered_map<int,int> freqCalculate(vector<int>&nums){
            unordered_map<int,int>result;
            for(int x:nums){
                result[x]++;

            }
            return result;
        }
};