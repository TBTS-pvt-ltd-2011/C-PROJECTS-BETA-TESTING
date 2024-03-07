
#include <stdio.h>
int main() {
    FILE *fp;
    int c;
   
    fp = fopen(__FILE__,"r");

    do {
         c = getc(fp); // this part reads the provided characters 
         putchar(c);   // this part display characters
    }
    while(c != EOF);  // this will loop until the end of file is reached
        fclose(fp);
    
    return 0;
}
Shar
