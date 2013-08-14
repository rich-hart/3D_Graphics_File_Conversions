
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ( int argc, char **argv ){

char filein_name[81] = "mesh_and_color_surface.iv";
char * read_data;
int sz;

printf("Number_of_args: %d\n",(int) argc);

FILE *fp;

fp = fopen(filein_name,"r");

//strcpy ( filein_name, argv[0] );

printf("Input args: %s \n",filein_name);

if( fp == NULL )
{
   perror("Error while opening the file.\n");
   exit(EXIT_FAILURE);
}
	fseek(fp, 0L, SEEK_END);
	sz = ftell(fp);
	printf("Size of file  is %d \n", sz);
 fseek(fp, 0L, SEEK_SET);

read_data= (char*)malloc(sz*sizeof(char));
char * s = (char*)malloc(sz*sizeof(char));
char ch;
int index = 0; 
   while( ( ch = fgetc(fp) ) != EOF ){
	read_data[index]=ch;
	index=index+1;
 }
strcpy(s, read_data);

char* token = strtok(s, " \n\t");
while (token) {
    printf("token: %s\n", token);
    token = strtok(NULL, " ");
}
free(read_data);
free(s);
fclose(fp);

return 0; 
}