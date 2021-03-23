#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

// Задание №1 

const int STROKA = 5;
const int STOLB = 5;


int mas[STROKA][STOLB];


int buff = 0;

void sort (int mas[][STOLB], int STROKA, int STOLB){
    
    bool exit = false;

while(!exit){
exit = true;
    for (int i = 0; i < STROKA; i++){
        for (int j = 0; j < STOLB; j++){
            if (mas[i][j]>mas[i][j+1])
            {buff = mas[i][j];
                mas[i][j] =mas[i][j+1];
                mas[i][j+1] = buff;
                exit = false;
            }
        }}
}}

// Задание №2

double f(double t)
{
    return sqrt(fabs(t)) + 5 * pow(t, 3);
}



    int main(const int argc, const char** argv) {
   

    
        for (int i = 0; i < STROKA; i++){
        for (int j = 0; j < STOLB; j++){
            mas[i][j]=rand()%10;
        }
    }
        
    for (int i = 0; i < STROKA; i++){
        for (int j = 0; j < STOLB; j++){
            printf("%d \n", mas[i][j]);
        }
    }
        
        sort (mas,STROKA, STOLB);
    
    for (int i = 0; i < STROKA; i++){
        for (int j = 0; j < STOLB; j++){
            printf("%d \n \t", mas[i][j]);
        }}
        
// 2
       
        double a[11], y;
           for (int i = 0; i < 11; i++)
            scanf("%in case", &a[i]);

           for (int i = 10; i >= 0; i--) {
               y = f(a[i]);
               if (y > 400)
                   printf("%d BIG\n", i);




               else
                   printf("%d %.16g\n", i, y); 
           }
    
}



 


