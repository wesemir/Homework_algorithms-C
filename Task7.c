#include <stdio.h>

/* 1) Описать в коде улучшенный алгоритм быстрой сортировки - описана в видео "Быстрая Сортировка. Улучшения." */

void sort (int *s_arr, int start, int end)
{
    if (start < end)
    {
        int left = start, right = end, middle = s_arr[(left + right) / 2];
        do
        {
            while (s_arr[left] < middle) left++;
            while (s_arr[right] > middle) right--;
            if (left <= right)
            {
                int tmp = s_arr[left];
                s_arr[left] = s_arr[right];
                s_arr[right] = tmp;
                left++;
                right--;
            }
        } while (left <= right);
        sort(s_arr, start, right);
        sort(s_arr, left, start);
    }
}

/* 2) Сортировать в массиве целых положительных чисел только чётные числа, нечётные оставив на своих местах при помощи алгоритма блочной сортировки */

void bucketSort (int* mas,int len) {
    const int MAX = len;
    const int B = 10;
    
    int buckets[B][MAX+1];
    for (int i = 0; i < B;++i){
        buckets[i][MAX]= 0;
    }
    
    for (int k = 0; k < len; ++k){
        if (mas[k] % 2 == 0) {
    
    for (int digit= 1; digit<1000000000; digit*= 10) {
        for (int i = 0; i < MAX; ++i){
            int d = (mas[i]/digit % B);
            
            buckets[d][buckets[d][MAX]++]= mas[i];
        }
        int idx = 0;
        for (int i = 0; i < B;++i){
        for (int j = 0; j<buckets[i][MAX]; ++j){
            mas[idx++] = buckets[i][j];
        }
            buckets[i][MAX] = 0;
        }
        }
        }
    }}


int main(int argc, const char * argv[]) {
    
    const int LENGTH = 15;
    int massive[LENGTH] = {1,4,3,5,78,7,234,2,45,3,9,7,13,1,5};
    
    //1)
    bucketSort(massive,LENGTH);
    
    for (int i = 0; i < LENGTH; i++)
           printf("%d ", massive[i]);
       printf("\n");
    
    // 2)
    sort(massive,0,LENGTH-1);
    
    for (int i = 0; i < LENGTH; i++)
           printf("%d ", massive[i]);
       printf("\n");
    
   
    return 0;
}
