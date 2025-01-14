def linear_search(list, target):
    for i in range(0, len(list)):
        if list[i] == target:
            return i
    
def binary_search(list, target):
    low = 0
    high = len(list) - 1
    while low <= high:
        mid = int(low + (high - low)/2)
        if list[mid] == target:
            return mid
        elif list[mid] < target:
            low = mid + 1
        else:
            high = mid - 1
    return None