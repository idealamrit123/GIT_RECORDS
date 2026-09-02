#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>

int main()
{
    // In this section of topics we dicuss some stuff about Arithmetic operators , Format Specifiers , precions flags etc
    // So we have the basic information about these topics ,but we need to sharpen much more . 
    // Format specifers = It is used to represent the types of data to be gets printed => %d,%c,%s,%f,%x,%lf 
    // %d => For Integer , %c => For Character , %s => For String , %f => For Float , %x => For Hexadecimal , %lf +> Double 
    // Examples given Below :
    int age ; char ch ; float Marks ; double IP ; char name[30];
    //{

    printf("Enter The Value Age in the Form of integer\n");
    scanf("%d",&age);
    printf("Age = %d\n",age);


    printf("Enter One Character\n"); 
    scanf(" %c",&ch); 
    printf("Char = %c\n",ch); // It takes the char input 



    printf("Enter The Marks(cgpa) in Decimal Form\n");
    scanf(" %f",&Marks);
    printf("Marks in CGPA = %.3f\n",Marks);


    printf("Enter The Value Of Internet Protocol(IP)\n");
    scanf(" %lf",&IP);
    printf("Value of Internet Protocol (IP)= %.7f\n",IP);

getchar();

    printf("Enter Your Name\n"); 
    fgets(name, sizeof(name), stdin);
    printf("Your Name Is => %s",name);



    //}

    return 0;
}