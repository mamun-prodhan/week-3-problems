#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int a, b;
        scanf("%d %d", &a, &b);

        if(a > b){
            int temp = a;
            a = b;
            b = temp;
        }

        int sum = 0;

        for(int k = a + 1; k<b; k++){
            if( k % 2 != 0){
                sum += k;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}