/*
 * Author:
 * Date:
 * Name:
 */

class Problem5 {
public: bool TripletFounder(vector<int>& nums){
    vector<int> hel;
    for(int i=0;i<nums.size()-1;i++){
        hel.push_back(nums[i]+nums[i+1]); //construction of vector hel , doing so we get addition of each two pairs
    }
    for(int j=0;j<nums.size();j++){
        for(int i=0;i<hel.size();i++){
            if(hel[i]+nums[j]==0){
                return true;
            }
        }
    }
        return false;

}
};