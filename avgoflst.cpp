/*Implement function avgoflst(lst), which returns the average
value of the elements in the array.
For example, given a array lst: [19, 2, 20, 1, 0, 18], the function
should return 10.

The name of the method should be avgoflst and the method should take two parameters.  The first parameter is the array of values to test.  The second parameter is the number of elements in the array.*?



float avgoflst(int lst[], int size) {
    float sum;
    float average;
    
    sum = 0;
    for (int i = 0; i < size; i++) 
        sum += lst[i];

    average = sum / size;

    return average;
}