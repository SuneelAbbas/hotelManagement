#include<iostream>
#include<conio.h>
using namespace std;

struct Racipees{
	string name;
    int price;
    string chief;
    Racipees *next;
};

class RacipeeDetails{
	private:
		Racipees *head , *tail;
	public :
		Transport(){
			head = NULL;
			tail = NULL;
		}
		
		
	void NewRacipee(string name,int price,string chief){
			
			Racipees *newRacip = new Racipees();
			newRacip->name  = name;
			newRacip->price = price;
			newRacip->chief = chief;
				if(head == NULL){
					newRacip->next = head;
					head =  newRacip;
					tail = newRacip;
				}else{
					tail->next = newRacip;
					tail = newRacip;
				}
		
		
	}
	
	void DeleteRacipee(string name){
		Racipees *current = new Racipees();
		Racipees *privous = new Racipees();
		current = head;
		while(current != NULL){
			
			if(current->name == name)
			 break;
			 privous = current;
			 current = current->next;
		}
		if(current != NULL){
			if(name == current->name){
			string op;
			cout<<"Are you sure to delete:(yes/no)    ";
			cin>>op;
			if(op=="Yes"||op=="YES"||op == "yes"){
				privous->next = current->next;
				delete current;
				cout<<"Record of "<<name<<" Racipee is deleted Successfully"<<endl;
			}else if(op=="No"||op=="NO"||op=="no"){
				
			}		
			
		}	
		}else{
			cout<<"Soory..!!!\nNo Record is avalible about "<<name<<" Racipee"<<endl;
		}
	}
	
	
	void SearchRacipee(string name){
		Racipees *current = new Racipees();
		Racipees *privous = new Racipees();
		current = head;
		while(current != NULL){
			privous = current;
			if(current->name == name)
			 break;
			 
			 current = current->next;
		}
		
		if(name == privous->name){
			cout<<"\n\n";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\t\tNO Plate of Vehical\t\t\t\t"<<current->name<<endl;
			cout<<"\t\tVehical Type\t\t\t\t\t"<<current->price<<endl;
			cout<<"\t\tPrice of Vehical\t\t\t\t"<<current->chief<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
		}else{
			cout<<"Soory..!!!\nNo Record is avalible about "<<name<<" Racipee"<<endl;
			string op;
			cout<<"Are you watn to Serach Again:(yes/no)          ";
			cin>>op;
			if(op=="Yes"||op=="YES"||op == "yes"){
				
			}else if(op=="No"||op=="NO"||op=="no"){
				
			}
		}
	}
	
	void UpdateRacipee(string name){
		Racipees *current = new Racipees();
		current = head;
		while(current != NULL){
			
			if(current->name == name)
			 break;
			 
			 current = current->next;
		}
		if(current != NULL){
			if(current->name == name){
			cout<<"\n\n";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\t\tRacipee Name\t\t\t\t\t"<<current->name<<endl;
			cout<<"\t\tRacipee Price\t\t\t\t\t"<<current->price<<endl;
			cout<<"\t\tChief OF Racipee\t\t\t\t"<<current->chief<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			string op;
			cout<<"Are you Want to update:            ";
			cin>>op;
			if(op=="Yes"||op=="YES"||op == "yes"){
				string chief,name;
				int price;
				cout<<"\n\n\t\tEnter Racipee Name:                        ";
				cin>>name;
				cout<<"\n\n\t\tEnter Racipee Price:                       ";
				cin>>price;
				cout<<"\n\n\t\tEnter Racipee Chief:                       ";
				cin>>chief;
				current->name  = name;
				current->price = price;
				current->chief = chief;
				cout<<"Updated Successfully"<<endl;
			}
		}
		}else{
			cout<<"Soory..!!!\nNo Record is avalible about Racipee "<<name<<endl;
		}
	}
	
	void ShowAllRacipees(){
		Racipees *showRacip = new Racipees;
		showRacip = head;
		while(showRacip  != NULL){
			
			for(int i=0; i<20; i++)
			system("color a");
			cout<<"\n\n";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\t\tRacipee Name\t\t\t\t\t"<<showRacip->name<<endl;
			cout<<"\t\tRacipee Price\t\t\t\t\t"<<showRacip->price<<endl;
			cout<<"\t\tChief OF Racipee\t\t\t\t"<<showRacip->chief<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			showRacip = showRacip->next;
		}
	}
};
