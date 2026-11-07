class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        vector<pair<int, double>> final_order;
        for(int x = 0; x < speed.size(); x++){
            double key = ((double)(target- position[x]) / speed[x]);
            final_order.push_back({position[x], key});
        }

        sort(final_order.begin(), final_order.end(), [](pair<int, double>&a , pair<int, double>&b){
            return a.first > b.first;
        });

        double fltime = 0.0;
        int numfleets = 0;

        for(auto[key, time] : final_order){
            if(time > fltime ){
                fltime = time;
                numfleets++;
            }
        }
  
        return numfleets;

    }
};
