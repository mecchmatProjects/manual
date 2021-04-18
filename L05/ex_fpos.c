#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *f;
	char ch[100];

	//Initialize the position variable 
	fpos_t pos;

	//Create the file for write operation
	f=fopen("includehelp.txt","w+");

	//Store the value of the function point indicator
	fgetpos(f,&pos);

	printf("Enter five strings\n");
	for(int i=0;i<4;i++){
		//take the strings from the users
		scanf("%[^\n]",&ch);		
		//write back to the file
		fputs(ch,f);				
		//every time take a new line for the new entry string 
		//except for last entry.Otherwise print the last line twice
		fputs("\n",f);				
						
		//clear the stdin stream buffer
		//if we don't write this then after taking string 
		//%[^\n] is waiting for the '\n' or white space
		fflush(stdin);
	}
	
	//take the strings from the users
	scanf("%[^\n]",&ch);				
	fputs(ch,f);
	//set the indicator position to the initial position of the file
	fsetpos(f,&pos);					
	
	printf("File content is--\n");
	printf("\n...............print the strings..............\n\n");
	while(!feof(f)){
		//takes the first 100 character in the character array 
		fgets(ch,100,f);
		//and print the strings
		printf("%s",ch);
	}

	//close the file
	fclose(f);
	
	return 0;
}
