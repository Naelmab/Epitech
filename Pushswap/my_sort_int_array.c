void my_sort_int_array(int *array, int size)
{
    int n = 0;
    int temp = 0;

    while (n != size)
        if (array[n] < array[n - 1] && n > 0)
        {
            array[n] = temp;
            array[n] = array[n - 1];
            temp = array[n - 1];
            n -= 2;
        }
    n++;
}
