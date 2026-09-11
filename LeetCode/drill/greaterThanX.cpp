// Count Elements Greater Than X

// Concept: reference, loop, counter

#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        vector<int> GreaterThanX(vector<int> &nums,auto x){
            vector<int>result;
            int count=0;
            for(int y:nums){
                if(y>x){
                    result.push_back(x);
                    count++;
                }
            }
            return result;
            return count;
        }

};

