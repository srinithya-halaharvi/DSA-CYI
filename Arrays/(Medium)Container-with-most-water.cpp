//Recursive
class Solution {
public:
    int V=0;
    void setV(vector<int>& temp){
        int v=(temp.size()-1)*(min(temp.front(),temp.back()));
        if(v>V){
            V=v;
        }
    }
    void recur(vector<int>& height, vector<int>& temp, int index, int start){
        if(index==height.size()){
            return;
        }
        temp.push_back(height[index]);
        setV(temp);
        recur(height,temp,index+1,start);
    }
    int maxArea(vector<int>& height) {
        vector<int> temp;
        for(int i=0;i<height.size();i++){
            temp={};
            recur(height,temp,i,i);
        }
        return V;
    }
};

//Iterative(Brute force)
class Solution {
public:
    int V=0;
    int maxArea(vector<int>& height) {
        //vector<int> temp;
        int V=0;
        for(int i=0;i<height.size();i++){
            for(int j=i+1;j<height.size();j++){
                V=max(V,(j-i)*(min(height[j],height[i])));
            }
        }
        return V;
    }
};
