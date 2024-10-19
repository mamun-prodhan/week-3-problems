#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int a;
        scanf("%d", &a);
        long long factorial = 1;

        for(int k = 1; k<=a; k++){
            factorial*=k;
        }

        printf("%lld\n", factorial);
    }

    return 0;
}