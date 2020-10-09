#include<stdio.h>
#include<stdlib.h>
char *strfromchar(char source) 
{ 
	char *destination; 
 
	destination = malloc(3* sizeof(char)); // just to be clear 
 
	if (destination == NULL) 
    { 
		// very heavy-handed error handling 
		printf("Memory allocation failed in strfromchar.\n"); 
		
    } 
  
	destination[0] = source;
    destination[1]='z';	// copy the character into the string 
	destination[2] = '\0';		// null-terminate the string 
 
	return destination;	
}
void main(){

	char mychar; 
	char *mystring; 
    mystring=malloc(3* sizeof(char));
 
	// mychar = 'x'; 
	// mystring = strfromchar(mychar); 
	// printf("The string version of %c is %s\n", mychar, mystring); 

     mystring[0]='p';
     mystring[1]='q';
     mystring[2]='\0';
     printf("hello bro \n");
     printf("vishal \n");
     printf("given string is \n%c hello\n",*mystring);

}