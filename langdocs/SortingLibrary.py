def bubble_sort(A):
    for i in range(0, len(A)-1):
        for j in range(0, len(A)-i-1):
            if A[j] > A[j+1]:
                temp = A[j]
                A[j] = A[j+1]
                A[j+1] = temp
    return A

def selection_sort(A):
    for i in range(0, len(A)-1):
        min_index = i
        for j in range(i + 1, len(A)):
            if A[j] < A[min_index]:
                min_index = j
        temp = A[i]
        A[i] = A[min_index]
        A[min_index] = temp
    return A

def insertion_sort(A):
    for i in range(1, len(A)):
        key = A[i]
        j = i - 1
        while j >= 0 and A[j] > key:
            A[j+1] = A[j]
            j = j - 1
        A[j + 1] = key
    return A