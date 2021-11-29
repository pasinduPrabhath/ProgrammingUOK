#include <iostream>
using namespace std;

int main(){
	// array which handles reservation of seats
	int seats[10];
	
	
	// for-loop assigns the value of each elemnt of the array to 0 ---> all seats are empty
	for(int i=0; i<10; i++){
		seats[i]=0;
	}
	
	
	// variables which handle the reservation of seats
	int class1=0, econ=5;
	
	
	// The while-loop executes continuously until both the sections are full
	while(class1<5 || econ<10){
		cout << "Welcome to ABC Arilines" << endl;
		cout << "=======================" << endl;		
		
		
		int choice=0; // default value of choice
		
		// Let the passenger input required section
		// The while loop validates the section number for both characters and integers which are not either 0 or 1
		cout << "Please type 1 for first class" << endl;
		cout << "Please type 2 for economy" << endl;
		cout << "Enter the desired section number : ";
		cin >> choice;
		cout << endl;
		
		while(!cin || !(choice>=1 && choice<=2)){
			cout << "Invalid section number, please select desired section again..." << endl;
			cout << "Please type 1 for first class" << endl;
			cout << "Please type 2 for economy" << endl;
			cout << "Enter the desired section number : ";
			cin.clear();
			cin.ignore();
			cin >> choice;
			cout << endl;
		}
		
		
		// First class seat reservations ----> (choice = 1)
		if(choice==1)
		{
			if(class1<5){
				cout << "Boarding Pass" << endl;
				cout << "=============" << endl;
				cout << "Seat Number : " << (class1+1) << endl;
				cout << "Section : first class" << endl;
				seats[class1]=1;
				class1++; 
				
			}else if(econ<10)
			{
				char choice1='\0'; // null character assigned for choice1
				
				while(!(choice1=='Y' || choice1=='y' || choice1=='N' || choice1=='n')){
					cout << "First class is full, Are you okay with a seat in economy section ?" << endl;
					cout << "If yes, type Y / If no type N : ";
					cin >> choice1;
					
					if(!(choice1=='Y' || choice1=='y' || choice1=='N' || choice1=='n')){
						cout << "Invalid response, please enter response again..." << endl << endl;
					}
				}
				cout << endl;
				
				if(choice1=='Y' || choice1=='y'){
					cout << "Boarding Pass" << endl;
					cout << "=============" << endl;
					cout << "Seat Number : " << (econ+1) << endl;
					cout << "Section : economy" << endl;
					seats[econ]=1; 
					econ++;
				}else if(choice1=='N' || choice1=='n'){
					cout << "Next flight leaves in 3 hours" << endl;
				}
			}
		}
		
		
		// Economy section seat reservations ----> (choice = 2)
		if(choice==2){
			if(econ<10){
				cout << "Boarding Pass" << endl;
				cout << "=============" << endl;
				cout << "Seat Number : " << (econ+1) << endl;
				cout << "Section : economy" << endl;
				seats[econ]=1;
				econ++; 
			}else if(class1<5){
				char choice1='\0'; // null character assigned for choice1
				
				while(!(choice1=='Y' || choice1=='y' || choice1=='N' || choice1=='n')){
					cout << "Economy is full, Are you okay with a seat in first class ?" << endl;
					cout << "If yes, type Y / If no type N : ";
					cin >> choice1;
					
					if(!(choice1=='Y' || choice1=='y' || choice1=='N' || choice1=='n')){
						cout << "Invalid response, please enter response again..." << endl << endl;
					}
				}
				cout << endl;
				
				if(choice1=='Y' || choice1=='y'){
					cout << "Boarding Pass" << endl;
					cout << "=============" << endl;
					cout << "Seat Number : " << (class1+1) << endl;
					cout << "Section : first class" << endl;
					seats[class1]=1; 
					class1++;
				}else if(choice1=='N' || choice1=='n'){
					cout << "Next flight leaves in 3 hours" << endl;
				}
			}
		}
		cout << endl << endl;
	}
	
	
	// Prints this message when all the seats in the plane are full
	cout << "==============================================" << endl << endl;
	cout << "All seats full, sorry for the inconvenience..." << endl;
	cout << "Next flight leaves in 3 hours" << endl << endl;
	cout << "==============================================" << endl;
	
	
	return 0;
}
