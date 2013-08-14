
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char filein_name[81] = "mesh_and_color_surface.iv";
int main ( int argc, char **argv ){


char * read_data;
int sz;
char * s;
char ch;
int index;
//char* token;
FILE *fp;
char *p;
char *last;
char * data_structure_header_name = "Transform {";
char * temp;
printf("Number_of_args: %d\n",(int) argc);
printf("Input args: %s \n",filein_name);
//strcpy ( filein_name, argv[0] );

fp = fopen(filein_name,"r");

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
 index = 0; 
   while( ( ch = fgetc(fp) ) != EOF ){
	putchar(ch);
	read_data[index]=ch;
	index=index+1;
 }
s = (char*)malloc(sz*sizeof(char));
strcpy(s, read_data);
p=strstr (s,data_structure_header_name);
p=p+strlen(data_structure_header_name);
last=strstr (p,"}");

puts("new position of pointer");
puts(p);
puts("last");
*last='\0';
puts(p);

/*
token = strtok(p,"\n");
char * temp;
while (token) {
    printf("token: %s\t\n", token);
    token = strtok(NULL,"\n");
	temp=token;
	token = strstr(token,"}");
	
//	temp=(char*)malloc(strlen(token)*sizeof(char));
//	strcpy(temp, token);
//	if(strstr(temp,"}")!=NULL){
	//	puts("brace found");
	//	token = strtok(NULL,"}");
	//	puts(token);
		// token = strtok(NULL,"}");
		//puts(token);
//	}
//	free(temp);
}
*/
free(read_data);
free(s);
fclose(fp);

return 0; 
}