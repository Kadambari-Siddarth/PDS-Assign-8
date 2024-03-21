#include <stdio.h>

int solve(int *nums, int n){
    int ans = 0;
    for(int i = 0;i < n+1; ++i){
        ans += nums[i];
    }
    ans -= (n*(n+1))/2;
    return ans;
}


int solve2(int *nums, int n){
    int freq[n];
    for(int i = 0;i < n; ++i)
        *(freq + i) = 0;
    
    for(int i =0 ;i < n; ++i){
        // freq[nums[i]] ++;
        ++(*(freq + *(nums + i)));
    }
    for(int i = 0;i <n; ++i)
        if(*(freq + i) > 1){
            printf("%d\n", i);
            return;
        }
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int nums[n+1];
    // int ans = 0;
    printf("Enter the elements of the array: \n");
    for(int i = 0;i < n+1; ++i)
    {
        scanf("%d", &nums[i]);
    }
    int ans = solve(nums, n);
    printf("%d\n", ans);
    return 0;
}