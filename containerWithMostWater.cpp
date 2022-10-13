class Solution {
public:
    int maxArea(vector<int>& height) {
        /*stack<int> area;

        for(int i=0; i<height.size(); i++){
            int j=i+1;
            while(j<=height.size()){
                int tempArea;
                
                tempArea=min(height[i], height[j])*(j-i);

                if(area.empty()){
                    area.push(tempArea);
                }else{
                    if(area.top()<=tempArea){
                        area.push(tempArea);
                    }else{
                        continue;
                    }
                }
                ++j;
            }
        }
        return area.top();*/

        int left=0;
        int right=height.size()-1;
        int maximum=0;
        while(left<right){
            int w=right-left;
            int h=min(height[left], height[right]);
            int area=h*w;

            maximum=max(maximum, area);
            if(height[left]<height[right]) left++;
            else if(height[left]>height[right]) right--;
            else{
                right--;
                left++;
            }
        }
        return maximum;
    }
};
