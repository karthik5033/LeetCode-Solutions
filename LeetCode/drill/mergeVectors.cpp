// Merge Two Vectors
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> mergeVectors(vector<int>& a, vector<int>& b) {
        vector<int> v;
        for(int x : a) {
            v.push_back(x);
        }
        for(int x : b) {
            v.push_back(x);
        }
        return v;
    }
};