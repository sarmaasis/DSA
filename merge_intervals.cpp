// Merge Intervals - Leetcode 51
// Algorithm
// sort the array
// check if the subarray merges with previous subarray
// merge the subarrays into single subarray

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mergeIntervals;
        if(intervals.size()==0){
            return mergeIntervals;
        }
        sort(intervals.begin(),intervals.end());
        vector<int> tempInterval = intervals[0];
        
        for(auto it: intervals){
            if(it[0]<=tempInterval[1]){
                tempInterval[1] = max(tempInterval[1],it[1]);
            }
            else{
                mergeIntervals.push_back(tempInterval);
                tempInterval = it;
            }
        }
        mergeIntervals.push_back(tempInterval);
        return mergeIntervals;
    }
};
