// Concepts: pair, loop, condition

// Task

// Return {evenCount, oddCount}

#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
        pair<int,int> CountEvenOdd(vector<int>&nums){
            int evenCount,oddCount=0;
            for(int x:nums){
                if(x%2==0) evenCount++;
                else oddCount++;
            }
            return {evenCount,oddCount};

        }
};