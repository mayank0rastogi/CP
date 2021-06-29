def findDuplicate(nums):
        seen = set()
        for num in nums:
            if num in seen:
                return num
            seen.add(num)
nums = [1,3,4,2,2]
get = findDuplicate(nums)
print(get)