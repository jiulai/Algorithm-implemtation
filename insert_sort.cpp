#include <iostream>

//升序排列
void insert_sort(int a[], std::size_t n)
{
    for(int j = 1; j < n; ++j)
    {
        int key = a[j];
        int i = j - 1;
        
        while(i >= 0 && a[i] > key)
        {
            a[i+1] = a[i];
            --i;
        }
        a[i+1] = key;
    }
}


// 降序排列
/*
void insert_sort(int a[], std::size_t n)
{
    for(int j = 1; j < n; ++j)
    {
        int key = a[j];
        int i = j - 1;
        while(i >= 0 && key > a[i])
        {
            a[i+1] = a[i];
            --i;
        }
        a[i+1] = key;
    }
}
*/


int main()
{
    int a[] = {9,8,7,6,5,4,3,2,1,0};
    insert_sort(a, 10);
    
    for(std::size_t i = 0; i < 10; ++i)
        std::cout << a[i] << " ";
    return 0;
}