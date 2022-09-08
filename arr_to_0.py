def joy(res):
    m=max(res)
    for i in res:
        if m > i:
            if i>0:
                m=i
    for i,ele in enumerate(res):
        if(ele!=0):
            res[i]-=m
    return res
class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        count=0
        res=nums
        while(sum(res)!=0):
            res=joy(nums)
            nums=res
            count+=1
            
        return count
    
