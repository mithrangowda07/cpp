def findPeakElement(arr: [int]) -> int:
    # Binary Search approach
    left, right = 0, len(arr) - 1
    
    while left < right:
        mid = (left + right) // 2
        
        # If the mid element is greater than the next element, peak lies on the left side
        if arr[mid] > arr[mid + 1]:
            right = mid
        # Else the peak lies on the right side
        else:
            left = mid + 1
    
    # left will eventually point to the peak element
    return left
