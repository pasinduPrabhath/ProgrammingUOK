#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    FILE *fptr1, *fptr2;
    char current, filename[50], newline[50];
    int replace, line = 0;
    
	cout << "Input the file name to be opened: ";
	cin >> filename;

    cout << "Please enter the line number you want to replace : ";
    cin >> replace;

	cout<<"Input the content of the new line : ";
    cin.getline(newline,50);
    
    &replace;
    
    fptr1 = fopen(filename, "r");		
    fptr2 = fopen("temp.txt", "w"); 	
    
	fscanf(fptr1,"%s %d", current);
    
    if(current != EOF) 
	{
		line = 1;
	}
	
    while(1)
	{
		if(replace != line)
    	{
    		putc(current, fptr2);
		}

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

    remove(filename);
    rename("temp.txt",filename);
}
