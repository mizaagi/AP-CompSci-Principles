import time
import SearchAlgorithms as sa

def main():
    try:
        data = []
        with open("langdocs/prog408b.dat", "r") as f:
            data = [int(line) for line in f]
        target = int(input("Enter the number to search for: "))
        start = time.perf_counter()
        index = sa.linear_search(data, target)
        end = time.perf_counter()
        if index:
            print("Linear Search (Unsorted): Number found at index ", index)
        else:
            print("Linear Search (Unsorted): Number not found")
        print(f"Search time: {end-start:.8f}")
        data.sort()
        start = time.perf_counter()
        index = sa.linear_search(data, target)
        end = time.perf_counter()
        if index:
            print("Linear Search (Sorted): Number found at index ", index)
        else:
            print("Linear Search (Sorted): Number not found")
        print(f"Search time: {end-start:.8f}")
        start = time.perf_counter()
        index = sa.binary_search(data, target)
        end = time.perf_counter()
        if index:
            print("Binary Search (Sorted): Number found at index ", index)
        else:
            print("Binary Search (Sorted): Number not found")
        print(f"Search time: {end-start:.8f}")
        ...
    except Exception as e:
        print("Error: ", e)
    pass

if __name__ == "__main__":
    main()
