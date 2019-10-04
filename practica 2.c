#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
    int opt;
    float a,b,c;
    b=0.0;
    char repeticion;
    printf("\n diguite el primer numero:");
     scanf("%f",&a);
    printf("\n diguite  el segundo numero:");
    scanf("%f",&b);
do{
    printf("\n 1.-SUMA");
    printf("\n 2.-RESTA");
    printf("\n 3.-MULTIPLICACION");
    printf("\n 4.-DIVISION");
     printf("\n ingrese el numero de la accion a realizar:");
     scanf("%d",&opt);
     switch(opt){
     case 1:

           c=a+b;
            printf("\nLA SUMA ES:%f",c);break;
     case 2:
           c=a-b;
            printf("\nLA RESTA ES:%f",c);break;

    case 3:
           c=a*b;
            printf("\n EL PRODUTO DE LOS NUMEROS ES:%f",c);break;

       case 4:
        while(b==0){
       printf("el segundo valor debe ser disitnto a cero.");
       printf("ingrese el segundo operando:");
       scanf("%f",&b);}
       c=a/b;
       printf("\n la division es:%f",c);
       break;

     default: printf("\n ingrese un  numero de uno a cuatro");break;
     }

     printf("\n desea hacer otra operacion?? S N:");
     repeticion=getch();
}while(repeticion=='s'||repeticion=='s');

return 10;}
