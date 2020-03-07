
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    //initializing array
    int n;
    scanf("%d",&n);
    int len = n + (n-1);
    
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            int min;
            
            if(i<j){
                min = i;
            }else{
                min = j;
            }
            
            if(min<len-i){
                min=min;
            }else{
                min=len-i-1;
            }
            
            if (min<len-j) {
                min=min;
            }else{
                min=len-j-1;
            }
            
            printf("%d ",n-min);
        }
        printf("\n");
    }
    
    return 0;
}

