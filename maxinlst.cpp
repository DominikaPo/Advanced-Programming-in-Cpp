/*Implement function maxinlst(lst), which returns the maximum value of the elements in the array.
For example, given an array lst: [-19, -3, 20, -1, 5, -25], the function
should return 20.

The name of the method should be maxinlst and the method should take two parameters.  The first parameter is the array of values to test.  The second parameter is the number of elements in the array.*/


int maxinlst(int lst[], int size) {
    int biggestNum = 0;
    for (int index = 0; index < size; index++) {
        if (lst[index] > biggestNum)
            biggestNum = lst[index];
    }
    return biggestNum;
}
