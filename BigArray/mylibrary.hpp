int indexOf(int intArray[], int searchVal) {
    for (int lcv = 0; lcv < (sizeof(intArray)/sizeof(intArray[0])); lcv++) {
        if (intArray[lcv] == searchVal) return lcv;
    }
    return -1;
}

int arrlen(int intArray[]) {
    return sizeof(intArray)/sizeof(intArray[0]);
}

// void printArr(int intArray[]) {
//     for (int v : intArray) {
//         std::cout << v << " ";
//     }
// }

void insertX(int* intArray, int insertVal, int insertPos) {
    // Write a function to insert a value into an array.
    
}