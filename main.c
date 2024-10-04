#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=0; i<=9; i++){
            printf("tabuada do %d\n",i);
        for(int j=0; j<=10; j++){
            printf("\t%i X %i = %i\n",i,j,i*j);
        }
        system("pause");
        system("cls");
    }
}
