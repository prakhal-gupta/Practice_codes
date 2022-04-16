#include <stdio.h>

int main()
{
    int i,j,k,n,arr[30];
    printf("Enter number of elements to be entered in Array\n");
    scanf("%d",&n);
    printf("Enter Elements of Array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(k=j;k<n;k++){
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    
    printf("Elements in new array are\n");
    for(i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }
    
    
    return 0;
}
