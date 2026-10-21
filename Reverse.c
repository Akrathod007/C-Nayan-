#include <stdio.h>

int main() {
    int arr[5] = {1,2,3,4,5},rev[5];
    int i,j,temp;
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    // j = 0;
    // for(i=4;i>=0;i--){
    //     rev[j] = arr[i];
    //     j++;
    // }
    //  for(i=0;i<5;i++){
    //     printf("%d ",rev[i]);
    // }

    i = 0;
    j = 4;
    while(i < j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
     for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}