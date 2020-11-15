#include <stdio.h>
int main()
{
    int datatype;
    
    printf("Izvelaties datatipu:1-char,2-int,3-long long \n");
    scanf("%d",&datatype);
    
    if(datatype==1){
        char factorial;
        printf("Ievadiet decimalo skaitli \n");
        scanf("%d",&factorial);
         int i=factorial-1; 
         while(i>=1){
           if(i>4){
               printf("Ar šo datu tipu nedrikst");
               break;
           }
           factorial=factorial*i; 
           i=i-1; 
           if (i==1) printf("Faktorials ir %d",factorial);
         
        }
   
    }else if(datatype==2){
        int factorial;
        printf("Ievadiet decimalo skaitli \n");
        scanf("%d",&factorial);
        int i=factorial-1;
        while(i>=1){
          if (i>11){
              printf("Ar šo datu tipu nedrikst");
              break;
          }
          factorial=factorial*i;
          i=i-1;
          if (i==1) printf("Faktorials ir %d",factorial);
        }
    
        
    }else if(datatype==3){
        long long factorial;
        printf("Ievadiet decimalo skaitli\n");
        scanf("%lld",&factorial);
        int i=factorial-1;
        while(i>=1){
          if (i>19){
              printf("Ar šo datu tipu nedrikst");
              break;
          }
          factorial=factorial*i;
          i=i-1;
          if (i==1) printf("Faktorials ir %lld",factorial);
        }
    }
    
    return 0;
}