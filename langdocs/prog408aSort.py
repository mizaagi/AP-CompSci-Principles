from SortingAlgorithms import Student
import SortingLibrary as sl
import time

def format(data, title, time):
    print(title)
    for Student in data:
        print(Student)
    print("Time: ", round(time, 8))

def main():
    try:
        data = []
        with open("langdocs/prg408a.txt", "r") as f:
            lines = f.readlines()
            for line in lines:
                id, score = line.split(' ')
                id = int(id)
                score = int(score)
                s = Student(id, score)
                data.append(s)

        data2 = data[:]
        data3 = data[:]
        data4 = data[:]

        start = time.perf_counter()
        data.sort()
        end = time.perf_counter()
        data_time = end - start
        start = time.perf_counter()
        data2 = sl.bubble_sort(data2)
        end = time.perf_counter()
        data2_time = end - start
        start = time.perf_counter()
        data3 = sl.selection_sort(data3)
        end = time.perf_counter()
        data3_time = end - start
        start = time.perf_counter()
        data4 = sl.insertion_sort(data4)
        end = time.perf_counter()
        data4_time = end - start

        format(data, "Built-in Sort", data_time)
        format(data2, "Bubble Sort", data2_time)
        format(data3, "Selection Sort", data3_time)
        format(data4, "Insertion Sort", data4_time)

        
    except Exception as e:
        print("Error: ", e)
        raise e
    pass

if __name__ == "__main__":
    main()


