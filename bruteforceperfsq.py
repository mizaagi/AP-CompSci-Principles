import math

def brute_force_perfect_square(first, second, upper_bound, exp=2):
    for i in range(first, first+upper_bound):
        for j in range(second, second+upper_bound):
            print(f"({i} ** {exp}) + ({j} ** {exp}) = {i**exp + j**exp}")
            if math.sqrt(i**exp + j**exp).is_integer():
                print(f"\n{i}, {j} IS A MATCH! ({math.sqrt(i**exp + j**exp)})\n")

def main():
    brute_force_perfect_square(1, 1, 20)

if __name__ == "__main__":
    main()