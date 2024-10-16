int indexOf(int intArray[], int searchVal, int listLen) {
    for (int lcv = 0; lcv < listLen; lcv++) {
        if (intArray[lcv] == searchVal) return lcv;
    }
}

int arrlen(int intArray[]) {
    return sizeof(intArray)/sizeof(intArray[0]);
}

void insertX(int* intArray, int insertVal, int insertPos) {
    // Write a function to insert a value into an array.
    
}