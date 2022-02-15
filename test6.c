#include<stdio.h>
#include<string.h>
void tokenize(char* line)
{
   char* cmd = strtok(line," "); //Gives SEGMENTATION FAULT but compiler doesn't give error

   while (cmd != NULL)
   {
        printf ("%s\n",cmd);
        cmd = strtok(NULL, " ");
   } 
}

int main(void)
{
   char s[] = "this is a test";
   tokenize(s);

   char str[] = "hello-there!";

   //tokenize(str); //DOESN'T WORK on char*str, WORKS on char str[]
                    //Gives SEGMENTATION FAULT for char*s

   printf("%s\n", str); //Prints complete string
   char*token = strtok(str, "-");
   while(token!=NULL)
   {
       printf("%s\n", token);
       token = strtok(NULL, "-");
   }
   printf("%s", str); //Prints only hello as str[] has been modified
   return 0;
}