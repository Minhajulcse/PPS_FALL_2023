// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,m,sum=0;
    scanf("%d %d", &n, &m);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
        sum+=ar[i];
    }
    if(sum<=m) printf("Dhaka Baicha Gese!\n");
    else printf("Sesh Dhaka Sesh!\n");
    return 0;
}
