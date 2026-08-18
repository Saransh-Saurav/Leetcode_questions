#Better
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mpp={}
        for i in range(len(nums)):
            remaining=target-nums[i]
            if remaining in mpp:
                return [mpp[remaining],i]
            
            mpp[nums[i]]=i

        return []