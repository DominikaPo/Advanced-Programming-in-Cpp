/*Implement function maxabsinlst(lst), which returns the maximum absolute
value of the elements in the array.
For example, given a array lst: [-19, -3, 20, -1, 0, -25], the function
should return 25.
The name of the method should be maxabsinlst and the method should take two parameters.  The first parameter is the array of values to test.  The second parameter is the number of elements in the array.*/


int maxabsinlst(int lst[], int size) {
    int x;
    int biggestNum = 0;
    for (int index = 0; index < size; index++) {
        if (lst[index] < 0) {
            x = lst[index] * (-1);
                if (x > biggestNum)
                    biggestNum = x;
        }
        else if (lst[index] > biggestNum)
            biggestNum = lst[index];       
    }
    return biggestNum;
}
