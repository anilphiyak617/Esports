#include<bits/stdc++.h>

class Solution  {
};

    int getType (int num){
        int res = 0;
        string nums = to_string (num);
        for(auto x:num) res = (res + 'x' - '0')%10;
    }

    int getMax(int i, int weight,vector<vector<int>> &mp) {
            // base case
            
            // pick
            int pick = -1;
            for(int i = 0 ;i < mp[i].size(); i ++ ) {
                for(int j = i ; j < mp[i].size(); j ++)
                        getMax()
            } 
            // not - pick
            int notPick =  getMax(i + 1,weight,mp);
    }

    int maximumCostAfterPickingCandies (int n, int x,vector<int> &candy ,vector<int> &cost){
            
            // Getting types of each candy
            vector<vector<int>> mp(10);
            for(int i = 0; i < n; i++){
                 int type = getType(candy[i]);
                 mp[type].push_back(cost[i]);
            }
            // Getting  

    }
int main() {

    int t;
    cin >> t;
    while(t--){
        Solution obj;
        int n;
        cin >> n;
        vector<int> candy,cost;

        obj.maximumCostAfterPickingCandies()

    }
    return 0;
}

// number of each type of candy is at most 5
// 30
// 0 / 2 times
// types:  2   1  3    4   1   3  4
// cost  : 9   8  10  9  11  7   11

// 2 --->  9 , 8,2
// 3 ---> 10 , 7,3
// 1 ---> 8 , 11 , 12
// 4 ---> 9 ,11 
// 
// dp[i+1][ K -]
// not pick : f(i+1, weights)
// pick :
// 1---10
// f(i+1,weights - x)

// 9 9  3 3 3 3 3 3 3
// 10 * 