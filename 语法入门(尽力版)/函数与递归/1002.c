#include <stdio.h>
int main(){
    int x,y,z;
    while(scanf("%d%d%d",&x,&y,&z)!=EOF){
        int arr[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
        if(x%400==0||x%4==0&&x%100!=0){
            arr[2]=29;
        }
        int num=0;
        for(int i=1;i<=arr[y];i++){
            int c=x*10000+y*100+i;
            while(c>0){
                if(c%10==z){
                    num++;
                }
                c=c/10;
            }
        }
        printf("%d\n",num);
    }
    return 0;
}