#include <stdio.h>
void main(){
    int n,b;
    scanf("%d%d",&n,&b);
    int t;
    if(n>=b){
        t=n*2-b;//Already present b, just removed it from the total number of bands there should be
    }
    else{
        t=n*2-(b-n);//As the left pairs were enough so remove the extra left pairs from the total needed bands
    }
    printf("%d",t);
}