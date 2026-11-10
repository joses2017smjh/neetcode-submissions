class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> temp;
        vector<int> res(temperatures.size(), 0 );
        for(int x = 0; x < temperatures.size(); x ++){
        //    temp.push(x);
           // int diff = 0;
           // int count = x+1;
            while( !temp.empty() && temperatures[x] > temperatures[temp.top()]){
                    int curr = temp.top();
                    temp.pop();

                   // temp.pop();
                    res[curr] =x -curr;
                    //res.push_back((count) -x);
                  //  break;
            
               // diff++;
            }
            temp.push(x);

        }

        return res;
    }
};
