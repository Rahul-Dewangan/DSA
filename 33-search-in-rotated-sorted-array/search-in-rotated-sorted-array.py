class Solution:
    def search(self, nums: List[int], target: int) -> int:
        i, j = 0, len(nums)-1

        while(i<=j):
            mid = (i+j)//2
            if nums[mid] == target:
                return mid
            elif nums[i] <= nums[mid]:
                if nums[mid] > target and nums[i] <= target:
                    j = mid - 1
                else:
                     i = mid + 1
            else:
                if nums[mid] < target and target <= nums[j]:
                    i = mid + 1
                else:
                    j = mid - 1
        
        return -1