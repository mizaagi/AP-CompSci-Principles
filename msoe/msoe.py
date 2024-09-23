def main():
    word = input("Enter a word: ").lower()
    dblcount = 0
    for l in range(0, len(word)-1):
        if word[l] == word[l+1]:
            dblcount += 1
    print(f'There are {dblcount} doubles in the word "{word}".')
    pass



if __name__ == "__main__":
    main()