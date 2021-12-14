
#include<iostream>
#include<string.h>
using namespace std;

int *ltrfr(char s[]);
int main(){
    
	int *fre_ltrs;
	char *s=new char[100];
	fre_ltrs=new int[26];
	
	cout<<"Enter string :";
	cin.getline(s,' ');

	fre_ltrs=ltrfr(s);
	
	cout<<"Frequency of all alphabets in the string is: "<<endl;
	
	for(int i=0;i<26;i++)
    {
		if(fre_ltrs[i]!=0){
			cout<<" "<<static_cast<char>(i+'a')<<" "<<fre_ltrs[i]<<endl;
		}
	}		 
}

int *ltrfr(char s[]){
	int *oc_array=new int[26];
	int ltrcount;
	
	for(int i=0;i<26;i++){
		ltrcount=0;
		for(int j=0;j<strlen(s);j++){
		
			if(int('a')+i==int(tolower(s[j]))){
				ltrcount++;
			}
		}
		oc_array[i]=ltrcount;
	}
	return oc_array;
}











































