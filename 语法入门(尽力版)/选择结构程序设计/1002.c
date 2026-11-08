#include <stdio.h>
int main(){
    int n,y;
    scanf("%d",&n);
    if(n%2==0){
        y=n/2;
    }
    else{
        y=3*n+1;
    }
    printf("%d\n",y);
    return 0;
}