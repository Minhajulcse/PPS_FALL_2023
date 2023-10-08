// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,count=0;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
        if(ar[i]>20) count++;
    }
    if(count==n) printf("All Saved!\n");
    else printf("Only few are saved and the following are dead:\n");
    for(int i=0; i<n; i++) {
        if(ar[i]<=20) printf("%d\t",ar[i]);
    }
    printf("\n");
    return 0;
}
