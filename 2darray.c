#include <stdio.h>

int main(void){
    FILE *data;
    float x[5][5];
    
    int row, col; // x [row] [col]
    
    data = fopen("rand", "r");
    
    // Read data from file into x
    
    for(row = 0; row < 5; row ++)
    {
        float a,b,c,d,e;
        fscanf(data, "%f,%f,%f,%f,%f\n", &a,&b,&c,&d,&e);
        x[row][0] = a;
        x[row][1] = b;
        x[row][2] = c;
        x[row][3] = d;
        x[row][4] = e;
        
    }
        float max=0;
        for(row = 0; row < 5 ; row++)
        {
        for(col =0; col <5;col++)
        {
            if(x[row][col]>max)
            {
            max= x[row][col];
            }    

        printf("%f",x[row][col]);
        }
        printf("\n");
    }
    printf("Max: %f\n",max);
    }


