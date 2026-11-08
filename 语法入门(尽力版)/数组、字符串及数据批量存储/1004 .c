#include<stdio.h>
int main(){
    int l,m;
    scanf("%d%d",&l,&m);
    int i,a,b;
    int s[10005];
    for(i=0;i<=l;i++){
        s[i]=1;
    }
    for(i=1;i<=m;i++){
        scanf("%d%d",&a,&b);
        int j;
        for(j=a;j<=b;j++){
            s[j]=0;
        }
    }
    int count=0;
    int c;
    for(c=0;c<=l;c++){
            if(s[c]==1)
                count++;
        }
    printf("%d",count);
    return 0;
}