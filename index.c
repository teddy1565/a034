#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define strleng 200
int main(){
    int a,i,l;
    char optput[strleng];
    char ans[strleng];
    while(scanf("%d",&a)!=EOF){
        i=0;
        while(a!=0){
            if(a&1){
                optput[i] = '1';
                a = a>>1;
            }else{
                a = a>>1;
                optput[i]='0';
            }
            i++;
        }
        optput[i]='\0';
        l = strlen(optput);
        for(i=0;i<l;i++){
            ans[i] = optput[l-i-1];
        }
        ans[i] = '\0';
        printf("%s\n",ans);
    }
    return 0;
}
