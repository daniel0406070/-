#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("%d ", i);
        if(i%6 == 0){
            printf("Go! ");
            if(i == n){
                return 0;
            }
        }
    }
    printf("Go!");
}