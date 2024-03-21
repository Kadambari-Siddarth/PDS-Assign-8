#include <stdio.h>

void swap(int *a, int *b, int *c){
    int tmp;
    tmp = *a;
    *a = *c;
    *c = tmp;
    tmp = *b;
    *b = *c;
    *c = tmp;
}

int main(){
    int x, y, z;
    printf("Enter x, y, z:  ");
    scanf("%d%d%d", &x, &y, &z);

    swap(&x, &y, &z);
    printf("x: %d, y: %d, z: %d\n", x, y, z);
    return 0;
}