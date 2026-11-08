#include<stdio.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    int count=0;
    for(int i=x;i<=y;i++){
        int temp=i;
        int sum=0;
        while(temp>0){
            sum=sum+(temp%10);
            temp/=10;
        }
        if(sum%5==0)
            count++;
    }
    printf("%d",count);
    return 0;
}