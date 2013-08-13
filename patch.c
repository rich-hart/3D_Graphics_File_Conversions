
#include <stdio.h>
#include <string.h>


int main ( int argc, char **argv ){

char filein_name[81] = "mesh_and_color_surface.iv";

char s[256];

printf("Number_of_args: %d\n",(int) argc);

FILE *fp;
FILE *fopen(filein_name, "r");

//strcpy ( filein_name, argv[0] );

printf("Input args: %s \n",filein_name);

strcpy(s, "one two three");
char* token = strtok(s, " ");
while (token) {
    printf("token: %s\n", token);
    token = strtok(NULL, " ");
}

fclose(fp);

return 0; 
}