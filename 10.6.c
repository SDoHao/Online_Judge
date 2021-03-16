#include <stdio.h>

int main(){
    int n,i,j;
    int tmp[4];
    scanf("%d", &n);
    while(n--){
        int input[4] = {0};
        for(i = 0; i < 4; i++)
            scanf("%d", &tmp[i]);
        for(i = 3, j = 3; i >= 0; i--){
            if(tmp[i] != 0)
                input[j--] = tmp[i];
        }
        for(i = 3; i > 0; i--){
            if(input[i] != 0 && input[i-1] == input[i]){
                input[i] *= 2;
                input[i-1] = 0;
                for(j = i-1; j > 0; j--){
                    input[j] = input[j-1];
                    input[j-1] = 0;
                }
            }
        }
        for(i = 0; i < 3; i++){
            printf("%d ",input[i]);
        }
        printf("%d\n", input[3]);
    }
    return 0;
}
