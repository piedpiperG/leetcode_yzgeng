class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int left=0,right=nums.size()-1;
		while(left<=right)
		{
			if(right==left&&nums[left]<target)
				return left+1;
            else if(right==left&&nums[left]>target)
                return left;
			int mid=(right-left)/2+left;
			int num=nums[mid];
			if(num==target)
				return mid;
			else	if(num<target)
				left=mid+1;
			else	if(mid-1<left)
				right=left;
            //cout<<left<<","<<right<<endl;
		} 
        
		return 0;
    }
};
