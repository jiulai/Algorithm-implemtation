#include <iostream>

void merge_sort(int a[], int p, int q, int n)
{
    int m1 = q - p + 1;
    int m2 = n - q;
    int L[m1], R[m2];
    std::size_t i = 0, j = 0;

    for(i = 0; i < m1; ++i)
        L[i] = a[p + i];
    for(j = 0; j < m2; ++j)
        R[j] = a[q + j + 1];
    
    int k = p;// attention to the value of k
    for(i = 0, j = 0; i < m1 && j < m2; ++k)
    {
        if(L[i] > R[j])
        {
            a[k] = R[j];
            ++j;
        }
        else
        {
            a[k] = L[i];
            ++i;
        }
    }
    
    if(i < m1)
        for(;i < m1; ++i)
            a[k++] = L[i];
    if(j < m2)
        for(;j < m2; ++j)
            a[k++] = R[j];
}

void merge_sort(int a[], int p, int r)
{
    if(p < r)
    {
        int q = (r + p) / 2;
        merge_sort(a, p, q);
        merge_sort(a, q + 1, r);
        merge_sort(a, p, q, r);
    }
    
}

int main()
{
    //example
    int a[] = {0,1,2,5,4,7,8,7,9,6,3};
    
    merge_sort(a, 0, 9);

    for(std::size_t i = 0; i < 10; ++i)
        std::cout << a[i] << " ";
}