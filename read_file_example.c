#include <stdio.h>
#include <stdlib.h>
 
int main()
{

	int sz;
	char ch;
	char filein_name[81] = "mesh_and_color_surface.iv";
	char read_data[] = "one two three";
   FILE * fp;
 
   fp = fopen(filein_name,"r"); // read mode
 
   if( fp == NULL )
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }
 	fseek(fp, 0L, SEEK_END);
	sz = ftell(fp);
   printf("The contents of %s file are :\n", filein_name);
printf("Size of file  is %d \n", sz);
 fseek(fp, 0L, SEEK_SET);

//read_data= (char*)malloc(sz*sizeof(char));

int index = 0; 
   while( ( ch = fgetc(fp) ) != EOF ){
	read_data[index]=ch;
	index=index+1;
 }
 fseek(fp, 0L, SEEK_SET);



char* token = strtok(read_data, " ");
while (token) {
    printf("token: %s\n", token);
    token = strtok(NULL, " ");
}

free(read_data);
   fclose(fp);
   return 0;
}