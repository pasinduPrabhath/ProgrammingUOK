#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    FILE *fptr1, *fptr2;
    char current, sourcename[50], filename[50];
    int line = 0;
    
	cout << "Input the file name to be opened: ";
	cin >> sourcename;

    cout<<"Input the new file name :";
    cin>> filename;
    
    fptr1 = fopen(sourcename, "r");		
    fptr2 = fopen(filename, "w"); 	
    
	fscanf(fptr1,"%s %d", current);
    
    if(current != EOF) 
	{
		line = 1;
	}
	
    while(1)
	{
	
        putc(current, fptr2);
		
		current = getc(fptr1);
	  
		if(current =='\n')
		{
			line++;	
		}
		if(current == EOF)
		{
			break;
		}
    }
    
    fclose(fptr1);
    fclose(fptr2);
}
