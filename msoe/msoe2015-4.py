nums = []
for i in range(10):
    nums.append(float(input("Enter number: ")))
    if (len(nums) >= 3):
        print("3rd largest number is ", sorted(nums)[-2])