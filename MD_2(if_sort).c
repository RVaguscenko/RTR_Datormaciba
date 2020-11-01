#include <stdio.h>

int main()
{
    int a,b,c,tmp,srt;
    printf("Ievadiet pirmo skaitli: \n");
    scanf("%d",&a);
    printf("Ievadiet otro skaitli: \n");
    scanf("%d",&b);
    printf("Ievadiet trešo skaitli: \n");
    scanf("%d",&c);
    printf("Ievadiet izvadīšanas secibu(1-augoša,2-dilstoša): \n");
    scanf("%d",&srt); 
    if (srt=1){
       if (a>b){
          tmp=a;
          a=b;
          b=tmp;
       }
       if (a>c){
           tmp=a;
           a=c;
           c=tmp;
       }
       if (b>c){
           tmp=b;
           b=c;
           c=tmp;
       }
       printf("%d,%d,%d",a,b,c);
    }else{
        if (a<b){
          tmp=a;
          a=b;
          b=tmp;
       }
       if (a<c){
           tmp=a;
           a=c;
           c=tmp;
       }
       if (b<c){
           tmp=b;
           b=c;
           c=tmp;
       }
       printf("%d,%d,%d",a,b,c);
    }
    
    return 0;
}
