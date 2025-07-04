#include<iostream>
using namespace std;
  	string name[500], roll[500], course[500], age[500];
  	int total=0;
  	
 	
 void add(){ 
 
		 
 	int choice;
 	cout<<"How many students do you want to enter: ";
 	cin>>choice;
 	if(total==0)
	{
 	total = total+choice;
 	for(int i=0; i<choice; i++){
	cout<<"\n\nFill the following form for student "<<i+1<<endl<<endl;
	
 	cout<<"Student Name: ";
 	cin>>name[i];
 	
 	cout<<"Student Roll No: ";
 	cin>>roll[i];
 	
 	cout<<"Student's Course: ";
 	cin>>course[i];
 	
 	cout<<"Student's Age: ";
 	cin>>age[i];
 	
 }
}
	else{
	for(int i=total; i<total+choice; i++){
	cout<<"\n\nFill the following form for student "<<i+1<<endl<<endl;
	
 	cout<<"Student Name: ";
 	cin>>name[i];
 	
 	cout<<"Student Roll No: ";
 	cin>>roll[i];
 	
 	cout<<"Student's Course: ";
 	cin>>course[i];
 	
 	cout<<"Student's Age: ";
 	cin>>age[i];
 	
 }
 total=total+choice;
}
 }

  void show(){
  	if(total==0){
	 		cout<<"No record exist...!!!";
		 }
		 else{
		 
 	for(int i=0; i<total; i++)
	 {	
 		cout<<"Showing data of student "<<i+1<<endl<<endl;
 		cout<<"Name: "<<name[i]<<endl;
 		cout<<"Roll No: "<<roll[i]<<endl;
 		cout<<"Course: "<<course[i]<<endl;
 		cout<<"Age: "<<age[i]<<endl<<endl;
	 }
 } 
}
 
	 void search(){
	 	if(total==0){
	 		cout<<"No record exist...!!!";
		 }
		 else{
		 
	 	string rollno;
	 	cout<<"Enter a student you want to search by roll no : ";
	 	cin>>rollno;
	 	for(int i=0; i<total; i++){
	 		if(rollno==roll[i]){
	 			cout<<"\nShowing data of student "<<i+1<<endl<<endl;
 				cout<<"Name: "<<name[i]<<endl;
 				cout<<"Roll No: "<<roll[i]<<endl;
 				cout<<"Course: "<<course[i]<<endl;
 				cout<<"Age: "<<age[i]<<endl<<endl;
 				
			 }
			 
	
		 }
	 }
}
	 void update(){
	 	if(total==0){
	 		cout<<"No record exist...!!!";
		 }
		 else {
  
		 
	 	string rollno;
	 	cout<<"Enter a student you want to search by roll no : ";
	 	cin>>rollno;
	 	for(int i=0; i<total; i++){
	 		if(rollno==roll[i]){
	 			cout<<"Showing previous data\n";
	 			cout<<"\nShowing data of student "<<i+1<<endl<<endl;
 				cout<<"Name: "<<name[i]<<endl;
 				cout<<"Roll No: "<<roll[i]<<endl;
 				cout<<"Course: "<<course[i]<<endl;
 				cout<<"Age: "<<age[i]<<endl<<endl;
 				
 				cout<<"\nEnter new data\n";
 			cout<<"Student Name: ";
 			cin>>name[i];
 	
 			cout<<"Student Roll No: ";
 			cin>>roll[i];
 	
 			cout<<"Student's Course: ";
 			cin>>course[i];
 	
 			cout<<"Student's Age: ";
 			cin>>age[i];
 			
			 }
			 
			 else 
			 
			 {
			 	cout<<"The Roll no you entered doesn't match with record!!";
			 }
			 }
	}
	 }
	  
	 void remove()
	{
		if(total==0){
	 		cout<<"No record exist...!!!";
		 }
		 else{
		 
		int d;
		cout<<"Press 1 to delete all the record \n";
		cout<<"Press 2 to delete specific a record: ";
		cin>>d;
		if(d==1){
			total=0;
			cout<<"The record has been deleted!!\n";
			system("pause");
		}
		
		if(d==2){
			string rollno;
			cout<<"Enter roll no you want to delete:";
			cin>>rollno;
			for(int i=0; i<total; i++){
			if(rollno==roll[i]){
				for(int j=i; j<total; j++){
					name[j]=name[j+1];
					roll[j]=roll[j+1];
					course[j]=course[j+1];
					age[j]=age[j+1];
				}
				total--;
				cout<<"Your required record is delete...!\n";
					system("pause");
			}
			}
		}	
		
	}
	 
}
	 

int main(){

	while(true)	{
		int input;	
	cout<<"\n***Student Management System*\n\n";
	cout<<"1.Add student \n";
	cout<<"2.View student \n";
	cout<<"3.Search student \n";
	cout<<"4.Edit student \n";
	cout<<"5.Delete student \n";
	cout<<"6.Exit\n";
	cout<<"\nEnter your choice: ";
	cin>>input;
	
	switch(input){
		case 1: add(); 
		break;
		
		case 2: show(); 
		break;
		
		case 3: search();
		break;
		
		case 4: update();
		break;
		
		case 5: remove();
		break;
		
		case 6: exit(0);
		
		default: cout<<"Invalid input! \n";
		
	}
}
	
}
