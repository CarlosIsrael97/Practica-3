#include<stdio.h>
#include<stdlib.h>
      int main(){
      	float a,b,c;
      	char opt;
      	printf("a.-suma\nb.-resta\nc.-multipliacacion\nd.-division\n");
      
      	printf("Introduce una opcion: ");
        opt = getchar();
      	printf("introduce el primer operando: ");
      	scanf("%f",&a);
      	printf("Introduce el segundo operando: ");
      	scanf("%f",&b);
      	switch(opt){
      	case'A':
      	case'a':
      	c=a+b;
      	break; 
      	case'B':
      	case'b':
      	c=a-b;
      	break;
      	case'C':
      	case'c':
      	c=a*b;
      	break;
      	case'D':
      	case'd':
      	while(b==0){
      		
      		printf("Error el segundo operador no puede ser cero, ingrese un valor valido para b: ");
      		scanf("%f",&b);	
}           
			c=a/b;
			break;
        default:
      		printf("Error, opcion invalida");
    		break;
      			}
      			printf("El resultado es: %.2f",c);
      			}
