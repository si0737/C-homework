#include <stdio.h>
int main(){
    int L,R;
    int count=0;
    scanf("%d%d",&L,&R);
    for(int i=L;i<=R;i++){
        int a=i;
        while(a>0){
            if(a%10==2){
                count++;
            }
            a=a/10;
        }
    }printf("%d\n",count);
    return 0;
}