#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    FILE *fptr1, *fptr2, *fptr3;
    char current, file1name[50], file2name[50], mergefilename[50];
    int line = 0;
    bool file1 = false, file2 = false;
    
	cout << "Input the 1st file name to be opened: ";
	cin >> file1name;
    
    cout << "Input the 2nd file name to be opened: ";
	cin >> file2name;

    cout<<"Input the new file name :";
    cin>> mergefilename;
    
    fptr1 = fopen(file1name, "w");	
    fprintf(fptr1,"%s", "This is the file test.txt.\n");	

    fptr2 = fopen(file2name, "w"); 
    fprintf(fptr2,"%s", "This is the file test1.txt.\n");	

    fptr3 = fopen(mergefilename, "w");
	fscanf(fptr1,"%s %d", current);

   

    fprintf(fptr3,"%s", "The two files merged into mergefiles.txt file successfully...!! \n");
    fprintf(fptr3,"%s", "Here is the content of the merge file mergefilename.txt");
    
    if(current != EOF) 
	{
		line = 1;
	}
	
    while(!file1)
	{
	
        putc(current, fptr3);
		
		current = getc(fptr1);
	  
		if(current =='\n')
		{
			line++;	
		}
		if(current == EOF)
		{
			file1 = true;
            break;

		}
    }
    while (file1 && !file2)
    {
     
        putc(current, fptr3);
		
		current = getc(fptr2);
	  
		if(current =='\n')
		{
			line++;	
		}
		if(current == EOF)
		{
			file2 =true;
            break;

		}
    
    }
    

    
    
    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);
}
