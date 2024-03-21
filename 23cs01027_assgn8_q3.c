#include <stdio.h>

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void rev(int *a, int n){
    int i = 0;
    while(i <= n - 1 - i){
        swap(a + i, a + n - 1 - i);
        ++i;
    }
}

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[] = {1, 2, 3, 4, 5};

    rev(arr, n);
    for(int i = 0;i < n; ++i)
        printf("%d ", arr[i]);
    return 0;
}