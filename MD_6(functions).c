#include <stdio.h>
#include <math.h>

void function_1();
void function_2(int a);
int function_3();
int function_4(int a);

void function_1(){
    printf("Teksts no pirmas funkcijas \n");
}

void function_2(int a){
    printf("Ievadits skaitlis ir: %d \n",a);
}

int function_3(){
    printf("Jūs izsaucat trešo funkciju (a + 1) \n");
    return 1;
}

int function_4(int a){
    a=pow(a,2);
    printf("Jūs izsaucat trešo funkciju (a^2) \n");
    return a;
}

int main()
{
    int skaitlis;
    printf("Ievadiet skaitli ko mainisim: ");
    scanf("%d",&skaitlis);
    function_1();
    function_2(skaitlis);
    printf("%d \n",skaitlis+function_3());
    printf("%d",function_4(skaitlis));
    return 0;
}