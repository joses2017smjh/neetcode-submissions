class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int, int>> rot_orange;
        int num_orange = 0;

        for(int x = 0; x < grid.size(); x ++){
            for(int y = 0; y < grid[0].size(); y++){
                if(grid[x][y] == 2){
                    rot_orange.push({x,y});
                }
                if(grid[x][y] == 1){
                    num_orange ++;
                }
            }
        }
        if (num_orange == 0){
            return 0;
        }
        int time = 0;
        while(!rot_orange.empty() ){
            int current_size = rot_orange.size();
            for( int x = 0; x < current_size; x++){
               
                pair<int, int> current = rot_orange.front();
                rot_orange.pop();

                if(current.first -1 >= 0 && grid[current.first -1][current.second] == 1 ){
                    grid[current.first -1][current.second] = 2;
                    rot_orange.push({current.first -1, current.second});
                    num_orange --;
                }

                if(current.first + 1 < grid.size() && grid[current.first +1][current.second] == 1){
                    grid[current.first +1][current.second] = 2;
                    rot_orange.push({current.first + 1, current.second});
                    num_orange --;
                }

                if(current.second -1 >= 0 && grid[current.first][current.second -1] == 1){
                    grid[current.first][current.second -1] = 2;
                    rot_orange.push({current.first, current.second - 1});
                    num_orange --;
                }

                if(current.second + 1 < grid[0].size() && grid[current.first][current.second +1] == 1){
                    grid[current.first][current.second + 1] = 2;
                    rot_orange.push({current.first, current.second+1});
                    num_orange --;
                }
            }
            time++;
        }
        if (num_orange != 0) return -1;

        return time-1;
    }
};
