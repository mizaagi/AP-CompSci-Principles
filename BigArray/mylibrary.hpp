int indexOf(int intArray[], int searchVal, int listLen) {
    for (int lcv = 0; lcv < listLen; lcv++) {
        if (intArray[lcv] == searchVal) return lcv;
    }
    return -1;
}