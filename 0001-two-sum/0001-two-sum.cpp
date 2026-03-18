class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        std::unordered_map<int, int> map;

        for(int i = 0; i < nums.size(); i++){
            int temp = target - nums[i];

            if(map.find(temp)!= map.end()){
                int j = map[temp];
                return {i, j};
            }
            map[nums[i]] = i;
        }

        /*
        int i = 0;
        int j = 1;

        while(i < nums.size()){
            while(j < nums.size()){
                if(nums[i] + nums[j] == target){
                    return {i, j};
                }  
                j++;
            }
            i++;
            j = i + 1;
        }
        */
        return {};
    }
};