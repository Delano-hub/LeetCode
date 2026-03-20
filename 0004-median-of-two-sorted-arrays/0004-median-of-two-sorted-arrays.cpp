class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int m = nums1.size();
        int n = nums2.size();
        int temp;
        std::vector<int> nums3;
        nums3.reserve(m + n);
        nums3.insert(nums3.end(), nums1.begin(), nums1.end());
        nums3.insert(nums3.end(), nums2.begin(), nums2.end());
        std::vector<int>::iterator sort = nums3.begin();
        std::vector<int>::iterator last = nums3.end();
/*
        for(int i = 0; i < (m + n); i++) {
            while(sort != last && nums3[sort] > nums3[sort + 1]) {
                temp = nums3[sort + 1];
                nums3[sort + 1] = nums3[sort];
                nums3[sort] = temp;
                sort++;
            }
        }
*/        
        std::sort(nums3.begin(), nums3.end());
        double mPos = nums3.size()/2.0;
        double mVal;
        
        if(ceil(mPos) > mPos) {
            mVal = nums3[ceil(mPos) - 1];
        }
        else {
            mVal = (nums3[mPos - 1] + nums3[mPos])/2.0;
        }
        
        return mVal;
    }
};