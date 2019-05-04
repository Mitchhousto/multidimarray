#include <stdio.h>

void readPPMHeader(char *filname, int *xres , int*yres);
// Do not need above function

int main(void)
{
   int xres, yres;
   
   readPPMHeader("CRW_4606.ppm", &xres, &yres);
   // The file name and CRW_4606.ppm
   
   int image[xres][yres][3]);
   
   // read the image data
   FILE *input;
   fopen("CRW_4606.ppm","r");
   
   {
       int temp:
       fscanf(input, "P3\%d %d\n %d", &tmp, &tmp, &tmp);
   }
  
  int x, y;
        
        for(y = 0; y< yres; y++)
        {
            for(x = 0; x < xres; x++)
            {
                
    
        fscanf(input, "%d\n%d\n%d", &image[x][y][0],
                                    &image[x][y][1],
                                    &image[x][y][2]);
        }

}
// calculate the mean value
int rT = 0, gT = 0, bT = 0;
        
        for(y = 0; y< yres; y++)
        {
            for(x = 0; x < xres; x++)
            {
                rT += image[x][y][0];
                gT += image[x][y][1];
                bT += image[x][y][2];
                
            }
    }
    //divide by number of pixels (xres * yres)
    rt /= (xres*yres);
    rt /= (xres*yres);
    rt /= (xres*yres);
    
    print ("%f %f %f , rT ,gT, bT");
}


                
//Dont need below function
void readPPMHeader(char *filname, int *xres , int*yres)
    {
        FILE *input;
        
        input = fopen(filename, "r");
        
        fscanf(input, "P3\n%d %d", xres , yres);
        //P3 is the firat line in the data image file followed by image size 160 x 120
        // this is to skid the header of that file
        
        fclose(input);
    }