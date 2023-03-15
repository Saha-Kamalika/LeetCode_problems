class Solution {
public:
    int maxArea(vector<int>& height) {
        int mArea=0,minInd=0,maxInd=height.size()-1;
        while(minInd!=maxInd){
            if(height[minInd]>height[maxInd])
                swap(minInd,maxInd);  //update the minInd
            int nArea=height[minInd]*abs(minInd-maxInd); 
            if(minInd>maxInd)
                minInd--;
            else minInd++;

            if(mArea<nArea)
                mArea=nArea;  //store the max area
        }
        return mArea;
    }
};
