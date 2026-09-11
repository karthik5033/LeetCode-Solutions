// Find Maximum Element

// Concept: tracking max value

#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
        int MaxElement(vector<int>&nums){
            int max =nums[0];
            for(int x:nums){
                if(x>max){
                    max=x;
                }
            }
            return max;
        }
};