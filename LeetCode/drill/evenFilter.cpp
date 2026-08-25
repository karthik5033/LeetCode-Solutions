#include<iostream>
#include<vector>
using namespace std;

// Filter Even Numbers

// Concept: vector, loop, condition, push_back

class Solution {
public:
        vector<int> evenFilter(vector<int>&nums){
            vector<int>result;
            for(int x:nums){
                if(x%2==0){
                    result.push_back(x);
                }
            }
            return result;
        }


};