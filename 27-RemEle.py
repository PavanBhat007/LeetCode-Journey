def removeElement(nums: list[int], val: int) -> list:
  i = 0
  limit = len(nums)
        
  while i != limit:
    if nums[i] == val:
      nums.pop(i)
      nums.append(val)
                
      limit -= 1
      if nums[i] == val:
        continue
      
    i += 1

  return nums[:i]


if __name__ == "__main__":
  arr = [int(x) for x  in input("ARR: ").strip().split(" ")]
  target = int(input("TARGET: ").strip())
  print(f"{arr} - {target} -> {removeElement(arr, target)}")