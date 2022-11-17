#include <stdio.h>
#include <stdlib.h>


///CUIL.C

 CuilPtr crearCuil(char* genero,char numeroCuil[])
{
    CuilPtr cp=(CuilPtr)obtenerMemoria(sizeof(Cuil));
    char* gen=(char*)obtenerMemoria(sizeof(char)*(strlen(genero)+1));
    strcpy(gen,genero);
    strcpy(cp->numeroCuil,numeroCuil);
    cp->genero=gen;

    if(validarCuil(genero,numeroCuil)!=-1)
    {
        return cp;
    }

    return NULL;
}

   int validarCuil(char* genero, char numeroCuil[])
{
    int identificador=0;
    int flag= -1;

    identificador=calcularCuil(numeroCuil);
    if((strcmp("masculino",genero)==0)&&(numeroCuil[0]=='2'&&(numeroCuil[1]=='0'||numeroCuil[1]=='3'))||(strcmp("Masculino",genero)==0)&&(numeroCuil[0]=='2'&&(numeroCuil[1]=='0'||numeroCuil[1]=='3')))
    {
        if(identificador==(numeroCuil[10]-'0'))
        {
            return flag=0;
        }
        else
        {
            return flag=-1;
        }
    }
    if((strcmp("femenino",genero)==0)&&(numeroCuil[0]=='2'&&(numeroCuil[1]=='3'||numeroCuil[1]=='7'))||(strcmp("Femenino",genero)==0)&&(numeroCuil[0]=='2'&&(numeroCuil[1]=='3'||numeroCuil[1]=='7')))
    {

        if(identificador==(numeroCuil[10]-'0'))
        {
            return flag=0;
        }
        else
        {
            return flag;
        }
    }
    return flag;
}
///------------------------------------------------------------------------------------
//// AGREGAR CHOFER Y CLIENTE CUIL/GENERO
///CHOFER
printf("\nIngrese el genero del chofer (masculino/femenino): ");
scanf("%s",genero);
while((strcmp(genero,"masculino")!=0)&& (strcmp(genero,"femenino")!=0))
{
    printf("\nError Reingrese el genero del chofer: ");
    scanf("%s", genero);
}
printf("\nIngrese el CUIL completo del chofer: ");
scanf("%s",numeroCuil);
cuil=crearCuil(genero,numeroCuil);
while(validarCuil(genero,numeroCuil)==-1)
{
    printf("Error el cuil no es valido Reingrese: ");
    scanf("%s",numeroCuil);
}
cuil=crearCuil(genero,numeroCuil);
while(CuilChoferComparacion(listaChofer,numeroCuil)==-1)
{
    printf("\nError el cuil ya fue ingresado en otro chofer Reingrese: ");
    scanf("%s",numeroCuil);
}
cuil=crearCuil(genero,numeroCuil);
printf("---Cuil validado Correctamente---");

//CLIENTE
printf("\nIngrese el genero del cliente(masculino/femenino): ");
scanf("%s", genero);
while((strcmp(genero,"masculino")!=0)&& (strcmp(genero,"femenino")!=0))
{
    printf("\nError Reingrese el genero del chofer: ");
    scanf("%s", genero);
}
printf("\nIngrese el numero de cuil del cliente: ");
scanf("%s", numeroCuil);
cuil = crearCuil(genero,numeroCuil);
while(validarCuil(genero,numeroCuil)==-1)
{
    printf("Error el cuil no es valido Reingrese: ");
    scanf("%s",numeroCuil);
}
cuil=crearCuil(genero,numeroCuil);
while(CuilClienteComparacion(listaCliente,numeroCuil)==-1)
{
    printf("\nError el cuil ya fue ingresado en otro chofer Reingrese: ");
    scanf("%s",numeroCuil);
}
cuil=crearCuil(genero,numeroCuil);
printf("---Cuil validado Correctamente---");
dom = crearDomicilio(localidad,calle,numero);
cli = crearCliente(nombre,apellido,dom,cuil,listaCliente);

///------------------------------------------MODIFICAR CHOFER-CLIENTE CUIL/GENERO--------------------
///CHOFER
printf("Ingrese nuevo genero del chofer(masculino/femenino): ");
scanf("%s", genero);
puntChofer->cuil->genero = genero;

while((strcmp(genero,"masculino")!=0)&& (strcmp(genero,"femenino")!=0))
{
    printf("\nError Reingrese el genero del chofer: ");
    scanf("%s", genero);
}
puntChofer->cuil->genero = genero;
printf("Ingrese nuevo CUIL completo del chofer: ");
scanf("%s", numeroCuil);
cuil=crearCuil(genero,numeroCuil);
while(validarCuil(genero,numeroCuil)==-1)
{
    printf("Error el cuil no es valido Reingrese: ");
    scanf("%s",numeroCuil);
}
cuil=crearCuil(genero,numeroCuil);
while(CuilChoferComparacion(listaChofer,numeroCuil)==-1)
{
    printf("\nError el cuil ya fue ingresado en otro chofer Reingrese: ");
    scanf("%s",numeroCuil);
}
cuil=crearCuil(genero,numeroCuil);
printf("---Cuil validado Correctamente---");

///CLIENTE
printf("Ingrese nuevo genero del cliente(masculino/femenino): ");
scanf("%s", genero);
puntCliente->cuil->genero = genero;
while((strcmp(genero,"masculino")!=0)&& (strcmp(genero,"femenino")!=0))
{
    printf("\nError Reingrese el genero del chofer: ");
    scanf("%s", genero);
}
puntCliente->cuil->genero = genero;

printf("Ingrese nuevo Cuil del cliente: ");
scanf("%s", numeroCuil);
cuil=crearCuil(genero,numeroCuil);
while(validarCuil(genero,numeroCuil)==-1)
{
    printf("Error el cuil no es valido Reingrese: ");
    scanf("%s",numeroCuil);
}
cuil=crearCuil(genero,numeroCuil);
while(CuilClienteComparacion(listaCliente,numeroCuil)==-1)
{
    printf("\nError el cuil ya fue ingresado en otro chofer Reingrese: ");
    scanf("%s",numeroCuil);
}
cuil=crearCuil(genero,numeroCuil);
printf("---Cuil validado Correctamente---");

