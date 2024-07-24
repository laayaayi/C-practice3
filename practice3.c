/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<math.h>

    int main(){
        
        int help=1;
        int result=1;
       
        
        for(int i=1;i<=10;i++){
            help=i+1;
            result=i;
            printf("%d\t",i);
            for(int j=1;j<=5;j++){
                // printf("%d\t",help);
                result=result+help;
                help=help*2;
                printf("%d\t",result);
               
            }
            printf("\n");
        }
        
     
    }