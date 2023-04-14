#include <stdio.h>

  int main(void) {
    int nHoras, valor, numero;
    int i=0;
    float vHora, vVentas, hExtras, vExtra,salario,extra, salarioN, salarioBasico, comision;
    
    do{
      i ++;
    printf("\n");
    printf("******************** REGISTRO DE VALORES EMPLEADO N° %d *******************\n",i);
    printf("\n");
    printf("Ingrese el numero de horas trabajadas: ");
    scanf("%d",&nHoras);
    printf("Ingrese el valor por hora: $");
    scanf("%f",&vHora);
    printf("Ingrese el valor total de ventas ventas: $");
    scanf("%f",&vVentas);
    hExtras=nHoras-40;
     if (hExtras>=1){
        if (hExtras<=10){
            vExtra=vHora*0.1;
        }
        else    
            if(hExtras<=15){
            vExtra=vHora*0.15;
            }
            else{
            vExtra=vHora*0.2;
            }
    }
    else{
      salario=nHoras*vHora;
      salarioN=salario+comision;
        salarioBasico=(salarioN-((salario*9.45)/100));
    }
    if (vVentas<=800)
  {
    comision=vVentas*0.02;
  }
    else 
      if (vVentas>800 && vVentas<=1500)
  {
      comision=vVentas*0.04;
  }
      else if(vVentas>1500 && vVentas<=3000)
      {
        comision=vVentas*0.06;
      }
        else 
        {
          comision=vVentas*0.08;
        }
    valor=40*vHora;
    extra=(hExtras*(vExtra+vHora));
    salario=(extra+valor);
    salarioN=salario+comision;
    salarioBasico=(salarioN-((salarioN*9.45)/100));
    
          printf("\n");
      printf("********** DETALLE DE VALORES EMPLEADO N° %d **********\n",i);
      printf("\n");
      printf("El numero de horas trabajadas en el mes es : %d \n",nHoras);
      printf("El valor por hora es : $ %.2f \n",vHora);
      printf("El valor de ventas : $ %.2f \n",vVentas);
      printf("El valor total de las horas trabajadas es: $ %.2f \n",salario);
      printf("El total de comisiones es: $ %.2f \n",comision);
      printf("El total de salario a recibir es: $ %.2f\n",salarioBasico);
      printf("\n");
      printf("SI QUIERE CONTINUAR DIJITE EL NUMERO 1, CASO CONTRARIO DIJITE 0\n");
      scanf("%d",&numero);
    }
      while (numero==1);
return 0;
  }