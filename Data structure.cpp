#include<iostream>

using namespace std;

struct  stud
	{
		string Name;
		string SearchName;
		string Department;
		int Id;
		stud *next;
	};
	
	stud *head=NULL;
				
void InsertData()
	{
 		stud *temp=new stud;
 		stud *temp1;
 		cout<<"Insert Your Name :- ";
 		cin>>temp->Name;
 		cout<<"Insert Your Id :- ";
 		cin>>temp->Id;
 		cout<<"Insert Your Department :- ";
 		cin>>temp->Department;
 		temp->next=NULL;
 		
		if(head==NULL)
 			{
 				head=temp;
	 		}
		else
			{
	 			temp1=head;
	 	
		 		while(temp1->next!=NULL)
					{
	 					temp1=temp1->next;
		 			}
	 			
				temp1->next=temp;
	 		}
	}
	
void InsertDataFirst()
	{
 		stud *temp=new stud;
 		cout<<"\nInsert Student Name :- ";
 		cin>>temp->Name;
 		cout<<"Insert Student ID :- ";
 		cin>>temp->Id;
 		cout<<"Insert Student Department :- ";
 		cin>>temp->Department;
 	
		if(head==NULL)
 			{
				temp->next=NULL;
				head=temp;
			}
		else
			{
				temp->next=head;
				head=temp;
			}	
	}
	
void InsertDataBefore()
		{
			stud *temp=new stud;
    		stud *temp4=new stud;
    		stud *temp1,*temp2;
    		cout<<"\nBefore which Student Name  you want to add? :- ";
			cin>>temp->SearchName;
			cout<<"\nYour DATA will be saved BEFORE Student Name ' " <<temp->SearchName<<" ' \n"<<endl;
			cout<<"Insert Your Name :- ";
 			cin>>temp4->Name;
 			cout<<"Insert ID :- ";
 			cin>>temp4->Id;
 			cout<<"Insert Your Department :- ";
 			cin>>temp4->Department;
	 
	 		if(head==NULL)
				{
					system("cls");
	 				system("color 04");
	 				cout<<"--There is no data by this Name--";
				}
    		else if(head->Name==temp->SearchName)
	 			{
	 				temp1=head;
	 				head=temp4;
	 				temp4=temp1->next;
				}
	 		else
	 			{
	 				temp1=head;
	 				while(temp1->Name!=temp->SearchName)
	 					{
	 						temp2=temp1;
	 						temp1=temp1->next;
		 				}
		 			temp2->next=temp4;
		 			temp4->next=temp1;
		 			
		 	system("cls");
			system("color 02");
			cout<<"\n\t--DATA SAVED SUCCESSFULLY !--\n"<<endl;
	 			}
		}
	
	void DeleteData()
		{
    		stud *temp=new stud;
    		stud *temp1,*temp2;
			cout<<"\nInsert Student Name to DELETE :- ";
			cin>>temp->SearchName;
			 
	 		if(head==NULL)
			 {
			 	system("cls");
				system("color 04");
	 			cout<<"\n--There is no data by this Name!";
			 }
			else if(head->Name==temp->SearchName)
	 			{
	 				temp1=head;
	 				head=head->next;
	 				delete temp1;
				}
	 		else
				{
	 				temp1=head;
	 			
				 	while(temp1->Name!=temp->SearchName)
	 					{
					 		temp2=temp1;
	 						temp1=temp1->next;
		 				}
					temp2->next=temp1->next;
		 			delete temp1;
		 			
		 	system("cls");
			system("color 02");
			cout<<"\n\t--DATA DELETED SUCCESSFULLY !--\n"<<endl;
	 			}
		}
	
	void DeleteFirst()
		{
			stud *temp;
			
			if(head==NULL)
				{
					system("cls");
	 				system("color 04");					
					cout <<"\n\t\t---There is no DATA at the TOP to Delete !!---\n";
				}
			else
				{
					temp = head;
					head = head->next;
					delete temp;
					
			system("cls");
			system("color 02");
			cout<<"\n\t--TOP DATA DELETED SUCCESSFULLY !--\n"<<endl;
				}
		}
				
	void DeleteLast()
		{
			stud *temp, *temp2;
			temp=head;
				
    		if(head==NULL)
    				{
					system("cls");
	 				system("color 04");
					cout<<"\n\t\t---There is no DATA at the BOTTOM to Delete !!---\n";
					}
				else if(head->next==NULL)
    				{
        				head=NULL;
        				delete temp;
    				}
    			else
					{
        				while(temp->next!=NULL)
        					{
            					temp2=temp;
            					temp=temp->next;
        					}
						temp2->next=NULL;
						delete temp;
					
					system("cls");
					system("color 02");
					cout<<"\n\t--BOTTOM DATA DELETED SUCCESSFULLY !--\n"<<endl;
					}
			}
			
	void Display()
		{
			stud *temp;	

			if(head==NULL)
 				{
					system("cls");
	 				system("color 04");
 					cout<<"\n\t\t---There is no DATA to display!!---";
				}
			else{
	 				temp=head;
	 				while(temp!=NULL)
	 					{    
	 						system("02");
	 	   					cout<<"Student Name :- ";
	 	   					cout<< temp->Name<<endl;
							cout<<"Student ID :- ";
							cout<< temp->Id<<endl;
							cout<<"Student Department :- ";
							cout<< temp->Department<<endl<<endl;
							temp=temp->next;
						}
 				}
		}
	
	void Frequently()
		{
    		cout<<"Insert The Student Name :- ";
    		string name;
    		cin>>name;
    		stud *temp;
    		int c=0;
    		
			if(head!=NULL)
				{
        			temp=head;
        		while (temp!=NULL)
					{
						if (name==temp->Name)
							{
               					c++;
							}
						temp=temp->next;
        			}
    			}
    		if (c==0)
    			{
					system("cls");
	 				system("color 04");
        			cout<<"\n--There is no Frequent data!"<<endl;
    			}
    		else
    			{
	 				system("color 02");
        			cout<<"\nThere is '"<<c<<"' "<<name<<"'s"<<endl;
    			}
		}	
	void Search()
		{
			stud *temp2=new stud;
			cout<<"\nInsert Student Name to Search :- ";
			cin>>temp2->SearchName;
			
			if(head==NULL)
				{
					system("cls");
	 				system("color 04");
					cout<<"---There is no data by this Name--\n";
				}
			else
				{
					stud *temp3=head;
					while(temp3->Name!=temp2->SearchName)
  						{
  							temp3=temp3->next;
  						}
	 				system("color 02");
					cout<<"\nStudent Name :- "<<temp3->Name<<endl;
					cout<<"Student Id :- "<<temp3->Id;
					cout<<"Student Department :- "<<temp3->Department;
				}	
		}
		
	void CountData()
		{
    		stud *temp;
    		int c=0;
    		
			if(head!=NULL)
    			{
        			temp=head;
					while (temp!=NULL)
        				{
           					c++;
           					temp=temp->next;
        				}
    			}
    		if (c==0)
    			{
    				system("cls");
	 				system("color 04");
        			cout<<"--There is no data!--"<<endl;
    			}
    		else
    			{system("color 02");
        			cout<<"\nThere is '"<<c<<"' data"<<endl;
				}
		}
	

	void Edit()
		{
			stud *temp2=new stud;
			cout<<"Insert Name to edit :- ";
			cin>>temp2->SearchName;
			
			if(head==NULL)
				{
					system("cls");
	 				system("color 04");
					cout<<"\n\t--There is no data by this Name--";
				}
			else
				{
					stud *temp3=head;
  					while(temp3->Name!=temp2->SearchName)
  						{
  							temp3=temp3->next;
  						}
 					cout<<"Insert NEW name :- ";
 					cin>>temp3->Name;
 					cout<<"Insert NEW ID :- ";
 					cin>>temp3->Id;
 					cout<<"Insert New Department :- ";
 					cin>>temp3->Department;
 					
 			system("cls");
			system("color 02");
			cout<<"\n\t--DATA EDITED SUCCESSFULLY !--\n"<<endl;	
				}
		}

	int main()
		{
			char add;
     			do{ 
         			system("cls");
         			system("color 0E");
	     			int choice;
	     			string Namee;
	     			int idd;
	     			string dep;
	     			int x,y;
     				cout<<"\n\n\t\t\t*_*_*_*_*_* WELCOME TO STUDENT DATA RECORD *_*_*_*_*_*\n\n"<<endl;
     				cout<<"\t\t 1. Insert Student Data \t\t 7. Display All Student Data"<<endl;
     				cout<<"\t\t 2. Insert Student Data Front  \t\t 8. Frequency"<<endl;
     				cout<<"\t\t 3. Insert Student Data Before \t\t 9. Search Student data"<<endl;
					cout<<"\t\t 4. Delete a Specific Student Data\t10. Count Student Data"<<endl;
     				cout<<"\t\t 5. Delete The Front Student Data\t11. Edit Student Data"<<endl;
     				cout<<"\t\t 6. Delete The Last Student Data\n"<<endl;
     				cout<<"\t\t\t\t\t\t\t 0. Close"<<endl;
					cout<<"Enter Your Choice :- ";
		 			cin>>choice;
		 			system("cls");
					 
					 switch(choice) 
							{
		 						case 1:
		 							
		 							cout<<"\n\t Number of Data you want to add?  :- ";
		 							cin>>x;
		 							
		 							for(int i=1; i<=x; i++)
									 {
									 	
									 	cout<<"\n --Insert Data "<<i<<" of "<<x<<"--\n"<<endl;
									 	InsertData();
									 }
									 system("cls");
									 system("color 02");
									 cout<<"\n\t--DATA SAVED SUCCESSFULLY !--\n"<<endl;
		 							break;
		 						case 2:
		 							cout<<"\t\t****INSERT DATA AT THE TOP****\n";
		 							cout<<"\n\t How many Data you want to add?  :- ";
		 							cin>>y;
		 							for(int i=1; i<=y; i++)
									 {
									 	cout<<"\n --Insert Data "<<i<<" of "<<y<<"--\n"<<endl;
									 	InsertDataFirst();
									 }
									 system("cls");
									 system("color 02");
									 cout<<"\n\t--DATA SAVED SUCCESSFULLY !--\n"<<endl;
		 							break;
		 						case 3:
		 							cout<<"\n\t\t****INSERT DATA BEFORE ANOTHER DATA****\n";
									InsertDataBefore();
					 				break;
		 						case  4:
		 							cout<<"\n\t\t****DELETE SPACIFIC DATA****\n";
		 							DeleteData();
		 							break;
		 						case 5:
		 							cout<<"\n\t\t****DELETE DATA ON THE TOP****\n";
		 							DeleteFirst();
		 							break;
		 						case 6:
		 							cout<<"\n\t\t****DELETE DATA ON THE BOTTOM****\n";
		 							DeleteLast();
					 				break;
		 						case 7:
		 							cout<<"\n\t\t****DISPLAYING ALL STUDENT DATA'S****\n";
									Display();
									break;
		 						case 8:
		 							cout<<"\n\t\t****FREQUENTLY ADDED DATAS BY NAME****\n";
		 							Frequently();
									break;
								case 9:
									cout<<"\n\t\t****SEARCH STUDENT DATA****\n";
		 							Search();
		 	   						break;
		 						case 10:
		 							cout<<"\n\t\t**** COUNTING ALL STUDENT DATAS ****\n";
		 							CountData();
		 	    					break;
		 						case 11:
		 							cout<<"\n\t\t**** EDIT STUDENT DATA ****\n";
		 	     					Edit();
		 	    					break;
		 						default:
		 							if(choice==0)
		 							{
		 								system("cls");
		 								cout<<"\n\n\n\t\t=== Thanks for using our project =====\n\n";
		 								
		 								return 0;
									 }
									 else
									 {
									 	cout<<"\n--WRONG INPUT--";
									 }
		 	    					break;
		 					}
		 				cout<<"\n\n TO GO BACK MAIN MENU \n PRESS >> Y or y :- ";
						cin>>add;
	 				} 
					 while(add=='y'||'Y');
		}
