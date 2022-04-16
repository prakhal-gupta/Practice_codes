#include <stdio.h>

int main()
{
    int i,j,d,k,l,n,m,c;
    printf("Enter Minimum value of range\n");
    scanf("%d",&n);
    printf("Enter Maximum value of range\n");
    scanf("%d",&m);
    for(i=n;i<=m;i++){
        k=j=i;
        c=0;
        while(j!=0){
            d = j%10;
            if(d == 0){
                c=1;
                break;
            }
            if (k % d == 0){
                j/=10;
            }
            else{
                c=1;
                break;
            }}
            if(c==0){
                printf("%d\t",i);
            }
            else{
                continue;
            }
        
        
    }

    return 0;
}