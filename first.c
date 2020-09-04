#include <stdio.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
   int number, n, v, temp;
   char line[25], fun[10];
   FILE *f = fopen(argv[1], "r");
  
   fgets(line, 24, f);
   sscanf(line, "%d", &number);   //reading the number
   while( fgets(line, 24, f) )
    {
       sscanf(line, "%s %d %d", fun, &n, &v); //reading the commands
       switch(fun[0])           //checking which command to run
       {
           case 'g':    temp = 1;
                       temp = temp<<n;   //shifting for getting that bit
                       printf("%d\n",(number&temp)&&1);
                       break;
           case 's':   temp = 1;
                       temp = temp<<n;   //shifting for setting that bit
                       if(!v)
                       {
                           temp = ~temp;
                           number = number & temp;
                       }
                       else
                       {
                           number = number | temp;
                       }
                       printf("%d\n",number);
                       break;
           case 'c':   temp = 1;
                       temp = temp<<n;   //shifting for complimenting that bit
                       number = number ^ temp;   //xor to complement that bit
                       printf("%d\n",number);
                       break;
           default:printf("not defined");
       }
   }
   return 0;
}
