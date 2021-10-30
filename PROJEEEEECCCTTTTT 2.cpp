#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<conio.h>
#include<iomanip>

using namespace std;

const int size = 100;

class SuperMarket{
	

	public:
		
	string bpcare[size]={"Makeup     ","HairCare","SkinCare","FaceCrae","Does&Perfumes"};
	string HNeeds[size]={"Cleaners","Detergents","Cleaning Tools","Brushes     ","Detergents"};
	string Grocery[size]={"Atta&Others","DryFruits&Nuts","Spices&Masala","Salt&Sugar","Oil&Ghee","Rice&Other","Dalain    "};
 	string Pharmacy[size]={"Pain & Relivers    ","Health Supplements","OTCs              ","Corona Essentials","Covid Preventions"};
 	 
 	float Disbpcare[size]={10.4,25.6,12.4,34,13.4};
 	float DisHNeeds[size]={10.4,25.6,12.4,34,13.4};
 	float DisGrocery[size]={10.8,25.6,12.4,34.0,13.4,14.5,23.4};
 	float DisPharmacy[size]={10.3,25.6,12.4,34,13.4};
 	
 	long Pribpcare[size]={1000,1200,250,1000,5000};
 	long PriHNeeds[size]={300,2000,2050,460,500};
 	long PriGrocery[size]={200,2500,400,2000,400,2000,679};
 	long PriPharmacy[size]={400,200,300,360,260};
 	
    string ALL[size]={"L'Oreal Paris Telescopic Mascara Magnetic Black","Disposable Black Face_mask Box of 50\t  ","Stainless Steel 5 WaterBottles\t\t  ","Laundry Detergents And Liquid Detergents  ","Body oils,Body Washes,BodyLotions\t  ","Deos For Mend & Women\t\t\t  ", "Face Wahes , Face Scrubs , Face Masks     ","Straightners\t\t\t\t  ","Salt,Edible Oils & Olive oil\t\t  ","Whole spices,Powdered Spices,Ready Masalas     ","Cleaning Accessories , Wipers\t\t  "};
    float ALLDis[size];
	float ALLPri[size]={2000,200,300,500,2800,1600,1000,590,390,590,400};
	
	
void BeautyAndCare(){
	
	int counter = 0;
	
	cout<<"No |\tProduct Name  |\tPrice |\tDiscount |  Price After Discount | "<<endl<<"----------------------------------------------------------------\n";
	
	for(int i=0; i<size; i++)
	{

	     if(bpcare[i]!="\0")
		 {
			counter++;
			cout<<counter<<"\t"<<bpcare[i]<<"\t"<<Pribpcare[i]<<"\t"<<Disbpcare[i]<<"%"<<"\t\t"<<(Pribpcare[i]-(Disbpcare[i]/100*Pribpcare[i]))<<endl;
		 }
	}
   
	if(counter==0){
		cout<<"No Record Found!"<<endl;
	}
	cout<<"--------------------------------------------------------------"<<endl;
	
	
}

void HouseHoldNeeds(){
	
	int counter = 0;
	
cout<<"No |\tProduct Name  |\tPrice |\tDiscount |  Price After Discount | "<<endl<<"----------------------------------------------------------------\n";
	
	for(int i=0; i<size; i++)
	{

	     if(HNeeds[i]!="\0")
		 {
			counter++;
			cout<<counter<<"\t"<<HNeeds[i]<<"\t"<<PriHNeeds[i]<<"\t"<<DisHNeeds[i]<<"%"<<"\t\t"<<(PriHNeeds[i]-(DisHNeeds[i]/100*PriHNeeds[i]))<<endl;
		 }
	}
   
	if(counter==0){
		cout<<"No Record Found!"<<endl;
	}
	cout<<"---------------------------------------------------------"<<endl;
	
	
}

void Groceryy(){
	
	int counter = 0;
	
	cout<<"No |\tProduct Name  |\tPrice |\tDiscount |  Price After Discount | "<<endl<<"----------------------------------------------------------------\n";
	
	
	for(int i=0; i<size; i++)
	{

	     if(Grocery[i]!="\0")
		 {
			counter++;

			cout<<counter<<"\t"<<Grocery[i]<<"\t"<<PriGrocery[i]<<"\t"<<DisGrocery[i]<<"%"<<"\t\t"<<(PriGrocery[i]-(DisGrocery[i]/100*PriGrocery[i]))<<endl;
		 }
	}
   
	if(counter==0){
		cout<<"No Record Found!"<<endl;
	}
	cout<<"------------------------------------------------------------"<<endl;
	
    
}


void Pharmacyy(){
	
	int counter = 0;
	
	
cout<<"No |\tProduct Name\t|\tPrice |\tDiscount |  Price After Discount | "<<endl<<"----------------------------------------------------------------\n";
	
	for(int i=0; i<size; i++)
	{

	     if(Pharmacy[i]!="\0")
		 {
			counter++;
			cout<<counter<<"\t"<<Pharmacy[i]<<"\t"<<PriPharmacy[i]<<"\t"<<DisPharmacy[i]<<"%"<<"\t\t"<<(PriPharmacy[i]-(DisPharmacy[i]/100*PriPharmacy[i]))<<endl;
		 }
	}
   
	if(counter==0){
		cout<<"No Record Found!"<<endl;
	}
	cout<<"-----------------------------------------------"<<endl;
	

}


	
void AllinOne(){
	string promocode;
	cout<<"\n\nEnter Code To Open The Vocher : "; cin>>promocode;
	if(promocode == "12#9870!"){
	
	
	float dis = 5;
	int counter = 0;
	
	
	//getch();
    system("cls");
    
    cout<<"\nThere is the VOCHER DISCOUNT for those products whose price is greater than Rs: 500";
		
	cout<<"\n----------------------------------------------------------------------------------------------------------------\n";
	
	cout<<"No |\t\t\tProduct Name\t\t         | Price | Vocher Dis 5% |"<<endl<<"-------------------------------------------------------------------------------------------------------------\n";
	
	ALLDis[0] = (ALLPri[0]-(dis/100*ALLPri[0]));
	ALLDis[1] = (ALLPri[1]-(0/100*ALLPri[1]));
	ALLDis[2] = (ALLPri[2]-(0/100*ALLPri[2]));
	ALLDis[3] = (ALLPri[3]-(dis/100*ALLPri[3]));
	ALLDis[4] = (ALLPri[4]-(dis/100*ALLPri[4]));
	ALLDis[5] = (ALLPri[5]-(dis/100*ALLPri[5]));
	ALLDis[6] = (ALLPri[6]-(dis/100*ALLPri[6]));
	ALLDis[7] = (ALLPri[7]-(dis/100*ALLPri[7]));
	ALLDis[8] = (ALLPri[8]-(0/100*ALLPri[8]));
	ALLDis[9] = (ALLPri[9]-(dis/100*ALLPri[9]));
	ALLDis[10] = (ALLPri[10]-(0/100*ALLPri[10]));
	for(int i=0; i<size; i++)
	{

	     if(ALL[i]!="\0")
		 {
			counter++;

			cout<<counter<<"\t"<<ALL[i]<<"\t   "<<ALLPri[i]<<"\t\t"<<ALLDis[i]<<endl;
			
		 }
		 
	}

		
	if(counter==0){
		cout<<"No Record Found!"<<endl;
	}
	cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
	

}
else
{
	cout<<"INVALID CODE !! PLEASE TRY AGAIN !!";
	AllinOne();
}
}
			

void Question(){
	
	char options; int x,y,z;
	cout<<"Thankyou For Shopping!In order to improve the customer experience,\nwe would like to ask you a questions about your experience on SUPERMARKET\n\nPlease give your feedback";
	cout<<"Which of the following words would you use to describe our product?"; 
	       cout<<"\na.Buggy"; 
           cout<<"\nb.Fine, but there are some issues";
           cout<<"\nc.Great";
	cout<<"\n\nSelect >>"; cin>>options;
	         
	switch (options){
		     
            case 'a' :cout<<"\nThankyou For Giving Your Honest Feedback\n\nWe'll Try To Fixed Our Mistakes Next Time\n"; break;
            case 'b' :cout<<"\nThankyou For Giving Your Feedback\nNext Time You Wont Face Any Issue\n\n"; break;
            case 'c' :cout<<"\nThankyou For Giving Your Precious Feedback\n\n"; break;
        }
        
        getch();
        system("cls");
        
}
	
};

class Staff : public SuperMarket{
 
 private: 
 
		string pasWord;
        string userName;
		bool accessGranted;
	
 public:
 	
 	
    float discount[size], price[size] ,qty[size];
    string productid[size] , proname[size];   
    string discription[size] , rate[size];


  	void intro()
  	{
  	cout<<setw(50)<<"                                     "<<endl;
  	cout<<setw(50)<<"                                     "<<endl;
 	cout<<setw(50)<<"                                     "<<endl;
  	cout<<setw(50)<<"    _________________________________"<<endl;
	cout<<setw(51)<<"   |                                 |"<<endl;
	cout<<setw(51)<<"   |            WELCOME              |"<<endl;
	cout<<setw(51)<<"   |             IN MY               |"<<endl;
	cout<<setw(51)<<"   |           SUPERMARKET           |"<<endl;
	cout<<setw(51)<<"   |_________________________________|"<<endl;
	cout<<"\n---------------------------------------------------------------------------";
	
	cout<<"\n\n\n                      NAME : ISHA BHUTTO                          ";
	cout<<"\n                DEPARTMENT : SOFTWARE ENGINEERIG                 ";
	cout<<"\n              PROJECT NAME : SUPERMARKET                    ";
	cout<<"\n                UNIVERSITY : MUET JAMSHORO    ";
	cout<<"\n                      YEAR : 1ST      ";
	cout<<"\n                     BATCH : 2020                  ";
	cout<<"\n\n---------------------------------------------------------------------------";
	getch();
	system("cls");
	}
	  
	  
  	void setprivatee(string pw, string un)
		{
			 pasWord=pw;
             userName=un;
		}
  
    string userAttempt , paswordAttempt;
  
  
    Supermarket()  //constructor
   {
  	accessGranted = 0;
   }
  
  
    void login()
   { 
  	cout<<"=================================\n";
  	cout<<"     ADD YOUR GOOGLE ACCOUNT     \n";
  	cout<<"=================================";
  	
  	cout<<"\n\nEnter Your Username And Pasword";
  	cout<<"\n\n\nUsername: "; cin>>userAttempt;
  	if(userAttempt==userName)
  	{
  		cout<<"Good";
  	}
  	else
  	{
  		cout<<"Invalid ID! Try Again\n";
  		login();
	}
  	
  	cout<<"\n\nPasword: "; cin>>paswordAttempt;
  	if(paswordAttempt==pasWord)
  	{
  		cout<<"Correct!!";
	}
	else
	{
		cout<<"Invalid! Try Again\n";
		login();
	}
		getch();
     system("cls");
	}	
	
	void setProducts()
    {
    	
    float Discount, Price, Qty;
    string Productid, Proname;   
    string Discription, Rate;
    
		cin.ignore();
		
	cout<<"\n====================================================================";
	cout<<"\n                       PLACE YOUR ORDER                                        ";
	cout<<"\n====================================================================";
	
	cout<<"\n\nProduct id: "; cin>>Productid;
	cout<<"\n\nProduct Name: "; cin>>Proname;
	cout<<"\n\nProduct Description: "; cin>>Discription;
	cout<<"\n\nProduct Quantity: "; cin>>Qty;
	cout<<"\n\nProduct Rate: "; cin>>Rate;
	cout<<"\n\nPrice: "; cin>>Price;
	
	for(int x=0;x<size;x++){
		
		if(productid[x]=="\0"){
			productid[x] = Productid;
			proname[x]=Proname;
			discription[x]=Discription;
			qty[x]=Qty;
			rate[x]=Rate;
			price[x]=Price;
			break;
	
        }
	
	getch();
	system("cls");
    }
}
void displayProduct()
    {
	cout<<"\n================================================================";
	cout<<"\n                    Current Records                                            ";
	cout<<"\n==============================================================\n\n";

	int counter = 0;
	cout<<"No | Product Id | Price | Name | Description | Quantity |"<<endl<<"--------------------------------------------\n";
	
	for(int i=0; i<size; i++)
	{

	     if(productid[i]!="\0"){
			counter++;
			cout<<counter<<"      "<<productid[i]<<"        "<<price[i]<<"        "<<proname[i]<<"        "<<discription[i]<<"         "<<qty[i]<<"         "<<endl;
		}
	}
   
	if(counter==0){
		cout<<"No Record Found!"<<endl;
	}
	cout<<"--------------------------------------------------------------------"<<endl;
	
	 
	getch();
	system("cls");
	
}

void searchRecord(string search){

cout<<"========================================="<<endl;
cout<<"           Current Records               "<<endl;
cout<<"=========================================="<<endl;
int counter = 0;
for(int i=0; i<size; i++){
	if(productid[i]==search){
		
		counter++;
	cout<<counter<<"      "<<productid[i]<<"      "<<price[i]<<"     "<<proname[i]<<"        "<<discription[i]<<"         "<<qty[i]<<"         "<<endl;
	
		break;
	}
}
if(counter==0){
	cout<<"No Record Found!"<<endl;}
	getch();
	system("cls");
		
}
void updateRecord(string search){
	
	float  Price, Qty;
    string Productid, Proname;   
    string Discription, Rate;
    
	int counter = 0;
	
	for(int x=0; x<size; x++){
		if(	productid[x]==search){
			counter++;
			
			cout<<"Product Name ";
			cin>>Proname;
			proname[x]= Proname;
			cout<<"Product Name Is Update Successfully!"<<endl;
			
			cout<<"Product Rate ";
			cin>>Rate;
			rate[x]= Rate;
			cout<<"Product Rate Is Update Successfully!"<<endl;
			
			cout<<"Product Quantity ";
			cin>>Qty;
			qty[x]= Qty;
			cout<<"Product Quantity Is Update Successfully!"<<endl;
			break;
		}
	}
	
}

void DeleteRecords(string search){
	int counter =0;
	for(int x=0; x<size; x++){
		if(productid[x]==search){
			counter++;
			
			proname[x]=" ";
			productid[x]=" ";
			qty[x]= 0;
			rate[x]=" ";
			discription[x]=" ";
			price[x]=0;
			
			
			cout<<"Successfully Deleted!"<<endl;
			break;
		}
	}
	if(counter==0){
		cout<<"ID Number does not exit!";
	}
}
void calculateBill()
{
	int counter;
	int paid;
	double totalprice=0;
	cout<<"\n********************************************************************";
	cout<<"\n                	Your Bill Details                                 ";
	cout<<"\n********************************************************************";
cout<<"\n\n\n";
cout<<"Name\tQuantity\tPrice\tRate\tSubTotal\n--------------------------------------------\n";
	for(int i=0; i<size; i++){
		if(productid[i]!="\0")
	{
	
    cout<<proname[i]<<"\t "<<qty[i]<<"\t\t"<<price[i]<<"\t"<<rate[i]<<"\t"<<(qty[i]*price[i])<<endl;
	totalprice=totalprice+(qty[i]*price[i]);
	counter++;
}
}

  cout<<"------------------------------------------------\n";
	cout<<"\t\tTotalPrice Rs: "<<totalprice<<endl;
	cout<<"Enter Paid Amount: "; cin>>paid;
	cout<<"Paid\t"<<paid<<endl;
	cout<<"Remaining\t"<<(paid-totalprice)<<endl;
	cout<<"-------------------------------\n";
	
	if(counter==0){
	cout<<"RECORD NOT FOUND!";
}

	getch();
	system("cls");

}
void Mainn()
{
	string Productid;
	int choice;
	
      	cout<<"========================================";
		cout<<"\n    Main Menu     \n\n";
	do{
		cout<<" 1-Create Product "<<endl;
		cout<<" 2-Update Product "<<endl;
		cout<<" 3-Delete Product "<<endl;
		cout<<" 4-Search Product "<<endl;
		cout<<" 5-Dispaly All Records "<<endl;
		cout<<" 6-Bill Deatils"<<endl;
		cout<<"========================================="<<endl;
		
		cout<<"Select Options >> ";
		cin>>choice;
		
		switch (choice){
			case 1 : setProducts(); 
			system("cls");
			break;
			
			case 2 : 
			cin.ignore();
			cout<<"Search By Product ID >>";
			cin>>Productid;
			updateRecord(Productid);
			system("cls");
			break;
			
			case 3 : 
			cin.ignore();
			cout<<"Delete By ID >>";
			cin>>Productid;
			DeleteRecords(Productid);
			system("cls");
			break;
			
			case 4 : 
			cin.ignore();
			cout<<"Search By Product ID >>";
			cin>>Productid;
			searchRecord(Productid);
			system("cls");
			break;
			
			case 5 : displayProduct();
			break;
			case 6 : calculateBill();
			break;
					
		}
	}while(choice!=6);
}

};

class Coustomer : public Staff , public SuperMarket{

	protected:
	long	Totalprice ,totalprice;

	public:
		SuperMarket bbp , gro , phar , hhn , co , so , all , ques , pay ,s;
	
	
		
		int Accountno;
		int Withdraw;
		string Coust_Name = "Isha Bhutto";
		long Balance = 200000;   
		long paidd;
		
	string dealername; string address , cityname; string phonenumber; string date; 
		
	void mainmenu()
	{
		
		int choicee,fc,bill,ph;
		char chh, a;
		SuperMarket sm;
		cout<<"========================================";
		cout<<"\n    HOME     \n\n";
		cout<<" 1-Beauty And Personal Care "<<endl;
		cout<<" 2-House Hold Needs "<<endl;
		cout<<" 3-Grocery  "<<endl;
		cout<<" 4-Pharmacy"<<endl;
		cout<<" 5-Confirm Order "<<endl;
		cout<<" 6-Customer FeedBack"<<endl;
		cout<<" 7-Vocher"<<endl;
		cout<<" 8-ATM Facility"<<endl;
		cout<<" 9-CheckOut Your Final Details"<<endl;
		cout<<" 10-Exit()"<<endl;
    
		cout<<"==========================================="<<endl;
		
		
		char ch;
		
		cout<<"Select Options >> ";
		
		cin>>choicee;
		
		system("cls");
		
		

		if(choicee==1)
		{
			
			while(ch != 'e' ){
			
		    bbp.BeautyAndCare();
			cout<<"\n\nSelect Products You Want >> ";
			cin>>fc;
			system("cls");
			if(fc==1)
			{
			
				cout<<sm.bpcare[0]<<"has been SELECTED!"<<endl<<endl;
			
				cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
			        
		        totalprice=totalprice+(sm.Pribpcare[0]-(sm.Disbpcare[0]/100*sm.Pribpcare[0])); 
				
				if(ch == 'y'){
					
					continue;
				}
			}
			
			else if(fc==2)
			{
				
				cout<<sm.bpcare[1]<< " SELECTED! "<<endl<<endl;
				
				cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
				
				
			 totalprice=totalprice+(sm.Pribpcare[1]-(sm.Disbpcare[1]/100*sm.Pribpcare[1])); 
				
				if(ch == 'y'){
					
					continue;
				}	
			}
			else if(fc==3)
			{
				
				cout<<sm.bpcare[2]<< " SELECTED! "<<endl<<endl;
				cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
				
			 totalprice=totalprice+(sm.Pribpcare[2]-(sm.Disbpcare[2]/100*sm.Pribpcare[2])); 
				if(ch == 'y'){
					
					continue;
				}
			}
			else if(fc==4)
			{
				
				cout<<sm.bpcare[3]<< " SELECTED! "<<endl<<endl;
				cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
				
				 totalprice=totalprice+(sm.Pribpcare[3]-(sm.Disbpcare[3]/100*sm.Pribpcare[3])); 
				
				if(ch == 'y'){
					
					continue;
				}
			}
			else if(fc==5)
			{
				
				cout<<sm.bpcare[4]<< " SELECTED! "<<endl<<endl;
				cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
				
				 totalprice=totalprice+(sm.Pribpcare[4]-(sm.Disbpcare[4]/100*sm.Pribpcare[4])); 
				if(ch == 'y'){
					
					continue;
				}
			}
		
		
			else 
			{
				cout<<"wrong input"<<"\npress y if you want to continue: ";
				
			}
		}
			
		cout<<"\n\nTotal Amount: "<<totalprice;
		cout<<endl;
		
		cout<<endl;
		
		mainmenu();
	}
	
	else if(choicee==2)
		{
			
			while(ch != 'e' ){
			
		    hhn.HouseHoldNeeds();
			cout<<"\n\nSelect Products You Want >> ";
			cin>>fc;
			system("cls");
			if(fc==1)
			{
			
				cout<<sm.HNeeds[0]<< " SELECTED! "<<endl<<endl;
			
				cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
			        
		        totalprice=totalprice+(sm.PriHNeeds[0]-(sm.DisHNeeds[0]/100*sm.PriHNeeds[0])); 
				
				if(ch == 'y'){
					
					continue;
				}
			}
			
			else if(fc==2)
			{
				
				cout<<sm.HNeeds[1]<< " SELECTED! "<<endl<<endl;
				
				cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
				
				
			 totalprice=totalprice+(sm.PriHNeeds[1]-(sm.DisHNeeds[1]/100*sm.PriHNeeds[1])); 
				
				if(ch == 'y'){
					
					continue;
				}	
			}
			else if(fc==3)
			{
				
				cout<<sm.HNeeds[2]<< " SELECTED! "<<endl<<endl;
				cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
				
			 totalprice=totalprice+(sm.PriHNeeds[2]-(sm.DisHNeeds[2]/100*sm.PriHNeeds[2])); 
				if(ch == 'y'){
					
					continue;
				}
			}
			else if(fc==4)
			{
				
				cout<<sm.HNeeds[3]<< " SELECTED! "<<endl<<endl;
				cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
				
				 totalprice=totalprice+(sm.PriHNeeds[3]-(sm.DisHNeeds[3]/100*sm.PriHNeeds[3])); 
				
				if(ch == 'y'){
					
					continue;
				}
			}
			else if(fc==5)
			{
				
				cout<<sm.HNeeds[4]<< " SELECTED! "<<endl<<endl;
				cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
				
				 totalprice=totalprice+(sm.PriHNeeds[4]-(sm.DisHNeeds[4]/100*sm.PriHNeeds[4])); 
				if(ch == 'y'){
					
					continue;
				}
			}
		
		
			else 
			{
				cout<<"wrong input"<<"\npress y if you want to continue: ";
				
			}
			
		cout<<"\n\nTotal Amount: "<<totalprice;
		cout<<endl;
		
		cout<<endl;
		
		mainmenu();
	}
}
	
	else if(choicee==3)
		{
			
			while(ch != 'e' ){
			
		    gro.Groceryy();
			cout<<"\n\nSelect Products You Want >> ";
			cin>>fc;
			system("cls");
			
			if(fc==1)
			{
			
				cout<<sm.Grocery[0]<< " SELECTED! "<<endl<<endl;
			
			cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
			        
		        totalprice=totalprice+(sm.PriGrocery[0]-(sm.DisGrocery[0]/100*sm.PriGrocery[0])); 
				
				if(ch == 'y'){
					
					continue;
				}
			}
			
			else if(fc==2)
			{
				
				cout<<sm.Grocery[1]<< " SELECTED! "<<endl<<endl;
				
				cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
				
				
			 totalprice=totalprice+(sm.PriGrocery[1]-(sm.DisGrocery[1]/100*sm.PriGrocery[1])); 
				
				if(ch == 'y'){
					
					continue;
				}	
			}
			else if(fc==3)
			{
				
				cout<<sm.Grocery[2]<< " SELECTED! "<<endl<<endl;
				cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
				
			 totalprice=totalprice+(sm.PriGrocery[2]-(sm.DisGrocery[2]/100*sm.PriGrocery[2])); 
				if(ch == 'y'){
					
					continue;
				}
			}
			else if(fc==4)
			{
				
				cout<<sm.Grocery[3]<< " SELECTED! "<<endl<<endl;
				cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
				
				 totalprice=totalprice+(sm.PriGrocery[3]-(sm.DisGrocery[3]/100*sm.PriGrocery[3])); 
				
				if(ch == 'y')
				{
					
					continue;
				}
			}
			else if(fc==5)
			{
				
				cout<<sm.Grocery[4]<< " SELECTED! "<<endl<<endl;
			cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
				
				 totalprice=totalprice+(sm.PriGrocery[4]-(sm.DisGrocery[4]/100*sm.PriGrocery[4])); 
				if(ch == 'y')
				{
					
					continue;
				}
			}
			
			else if(fc==6)
			{
				
				cout<<sm.Grocery[5]<< " SELECTED! "<<endl<<endl;
				cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
				
				 totalprice=totalprice+(sm.PriGrocery[5]-(sm.DisGrocery[5]/100*sm.PriGrocery[5])); 
				if(ch == 'y'){
					
					continue;
				}
			}
			else if(fc==7)
			{
				
				cout<<sm.Grocery[6]<< " SELECTED! "<<endl<<endl;
				cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
				
				 totalprice=totalprice+(sm.PriGrocery[6]-(sm.DisGrocery[6]/100*sm.PriGrocery[6])); 
				if(ch == 'y')
				{
					
					continue;
				}
			}
		
		
			else 
			{
				cout<<"wrong input"<<"\npress y if you want to continue: ";
				
			}
			
		cout<<"\n\nTotal Amount: "<<totalprice;
		cout<<endl;
		
		cout<<endl;
		
		mainmenu();
	}
}
	
		
	else if(choicee==4)
		{
			
			while(ch != 'e' )
			{
			
		    phar.Pharmacyy();
			cout<<"\nSelect Products You Want >> ";
			cin>>fc;
			system("cls");
			
			if(fc==1)
			{
			
				cout<<sm.Pharmacy[0]<< " SELECTED! "<<endl<<endl;
			
			cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
			        
		        totalprice=totalprice+(sm.PriPharmacy[0]-(sm.DisPharmacy[0]/100*sm.PriPharmacy[0])); 
				
				if(ch == 'y')
				{
					
					continue;
				}
			}
			
			else if(fc==2)
			{
				
				cout<<sm.Pharmacy[1]<< " SELECTED! "<<endl<<endl;
				
				cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
				
				
			 totalprice=totalprice+(sm.PriPharmacy[1]-(sm.DisPharmacy[1]/100*sm.PriPharmacy[1])); 
				
				if(ch == 'y')
				{
					
					continue;
				}	
			}
			else if(fc==3)
			{
				
				cout<<sm.Pharmacy[2]<< " SELECTED! "<<endl<<endl;
				cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
				
			 totalprice=totalprice+(sm.PriPharmacy[2]-(sm.DisPharmacy[2]/100*sm.PriPharmacy[2])); 
				if(ch == 'y'){
					
					continue;
				}
			}
			else if(fc==4)
			{
				
				cout<<sm.Pharmacy[3]<< " SELECTED! "<<endl<<endl;
				cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
				
				 totalprice=totalprice+(sm.PriPharmacy[3]-(sm.DisPharmacy[3]/100*sm.PriPharmacy[3])); 
				
				if(ch == 'y'){
					
					continue;
				}
			}
			else if(fc==5)
			{
				
				cout<<sm.Pharmacy[4]<< " SELECTED! "<<endl<<endl;
				cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
				
				 totalprice=totalprice+(sm.PriPharmacy[4]-(sm.DisPharmacy[4]/100*sm.PriPharmacy[4])); 
				if(ch == 'y'){
					
					continue;
				}
			}
		
		
			else 
			{
				cout<<"wrong input"<<"\npress y if you want to continue: ";
				
			}
			
		cout<<"\n\nTotal Amount: "<<totalprice;
		cout<<endl;
		
		cout<<endl;
		
		mainmenu();
	}
}
		
	else if(choicee==5)
		{
			
system("cls");
	cout<<"===========================================================================";
	cout<<"\n                Coustomer Mangement System";
	cout<<"\n==========================================================================";
	cout<<"\nBuyer Name: "; cin>>dealername;
	cout<<"\nBuyer Address: "; cin>>address;
    cout<<"\nBuyer Phone Number: "; cin>>phonenumber;
    cout<<"\nCity:  "; cin>>cityname;
    cout<<"\nDate: "; cin>>date ;	
    getch();
system("cls");

	cout<<"=============================================================================";
	cout<<" \n                      Checkout Your Details                                 " ;
	cout<<"\n============================================================================";
	cout<<"\n\n**********************************";
	cout<<"\n\nYour Name     : "<<dealername;
	cout<<"\n\nYour Address  : "<<address;
    cout<<"\n\nYour Phone No : "<<phonenumber;
    cout<<"\n\nYour City     :  "<<cityname;
    cout<<"\n\nDate of buying: "<<date;	
    cout<<"\n\n***********************************";
    
    cout<<"\n\nThankyou for shopping :)) \n\nDo you want tp experience our vocher discounts?\n\nthen go to the home page and try that amazing discount offer!\n\nand give your feedback!";
    
    
    
    getch();
system("cls");

    mainmenu();
    

}
else if(choicee==6){
	  ques.Question();
	  
	  mainmenu();
	
}

else if(choicee==7)
{
	float dis = 0.05;
	cout<<"=====================================================================================\n";
	cout<<"                   SUPERMARKET VOCHERS                            ";
	cout<<"\nIn Order To Improve The Customer Experience, We Would Like To Recommend You \nTo Try Our The Vouchers Experience On SUPERMARKET : \n\nStart Survey>>"; 
	cout<<"\n-----------------------------------------------------------------------------------------------------\n";
	
	cout<<"\n\nALL IN ONE VOCHER";
	cout<<"\n\nSAVE RS : 50";
	cout<<"\n\nSpend Rs:  500 , Get Rs: 50 off";

	
	
			while(ch != 'e' ){
			
		    all.AllinOne();
		
			cout<<"\n\nSelect Products You Want >> ";
			cin>>fc;
			system("cls");
			if(fc==1)
			{
			
				cout<<sm.ALL[0]<<"has been SELECTED!"<<endl<<endl;
			
				cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
			        
		       Totalprice=Totalprice+(sm.ALLPri[0]-(dis/100*sm.ALLPri[0])); 
				
				if(ch == 'y'){
					
					continue;
				}
			}
			
			else if(fc==2)
			{
				
				cout<<sm.ALL[1]<<"has been SELECTED!"<<endl<<endl;
			
				cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
			        
		        Totalprice=Totalprice+(sm.ALLPri[1]-(0/100*sm.ALLPri[1])); 
				
				if(ch == 'y'){
					
					continue;
				}
				
			}
			else if(fc==3)
			{
				
			cout<<sm.ALL[2]<<"has been SELECTED!"<<endl<<endl;
			
				cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
			        
		        Totalprice=Totalprice+(sm.ALLPri[2]-(dis/100*sm.ALLPri[2])); 
				
				if(ch == 'y'){
					
					continue;
				}
			}
			else if(fc==4)
			{
				
			cout<<sm.ALL[3]<<"has been SELECTED!"<<endl<<endl;
			
				cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
			        
		        Totalprice=Totalprice+(sm.ALLPri[3]-(dis/100*sm.ALLPri[3])); 
				
				if(ch == 'y'){
					
					continue;
				}
			}
			else if(fc==5)
			{
				cout<<sm.ALL[4]<<"has been SELECTED!"<<endl<<endl;
			
				cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
			        
		        Totalprice=Totalprice+(sm.ALLPri[4]-(dis/100*sm.ALLPri[4])); 
				
				if(ch == 'y'){
					
					continue;
				}
			}
			else if(fc==6)
			{
				cout<<sm.ALL[5]<<"has been SELECTED!"<<endl<<endl;
			
				cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
			        
		        Totalprice=Totalprice+(sm.ALLPri[5]-(dis/100*sm.ALLPri[5])); 
				
				if(ch == 'y'){
					
					continue;
				}
			}
			else if(fc==7)
			{
				cout<<sm.ALL[6]<<"has been SELECTED!"<<endl<<endl;
			
				cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
			        
		        Totalprice=Totalprice+(sm.ALLPri[6]-(dis/100*sm.ALLPri[6])); 
				
				if(ch == 'y'){
					
					continue;
				}
			}
			else if(fc==8)
			{
				cout<<sm.ALL[7]<<"has been SELECTED!"<<endl<<endl;
			
				cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
			        
		        Totalprice=Totalprice+(sm.ALLPri[7]-(dis/100*sm.ALLPri[7])); 
				
				if(ch == 'y'){
					
					continue;
				}
			}
			else if(fc==9)
			{
				cout<<sm.ALL[8]<<"has been SELECTED!"<<endl<<endl;
			
				cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
			        
		        Totalprice=Totalprice+(sm.ALLPri[8]-(0/100*sm.ALLPri[8])); 
				
				if(ch == 'y'){
					
					continue;
				}
			}
			else if(fc==10)
			{
				cout<<sm.ALL[9]<<"has been SELECTED!"<<endl<<endl;
			
				cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
			        
		        Totalprice=Totalprice+(sm.ALLPri[9]-(dis/100*sm.ALLPri[9])); 
				
				if(ch == 'y'){
					
					continue;
				}
			}
			else if(fc==11)
			{
				cout<<sm.ALL[10]<<"has been SELECTED!"<<endl<<endl;
			
				cout<<"Enter 'e' To Exit To Home Page Or Enter 'y' To Continue: ";
				cin>>ch;
			        
		        Totalprice=totalprice+(sm.ALLPri[10]-(0/100*sm.ALLPri[10])); 
				
				if(ch == 'y'){
					
					continue;
				}
			}

			else 
			{
				cout<<"wrong input"<<"\npress y if you want to continue: ";
			
			}
		
		cout<<"\n\nTotal Amount: "<<Totalprice;
		cout<<endl;
		cout<<endl;
		cout<<"If you dont want cash on delivery then DON'T WORRY:)))\n\nWe're Providing ATM facility To Our Customers\n\nGo To The Menu And Use This!!!\n\nHope You Will Enjoy it";
		 getch();
system("cls");
	mainmenu();
	}


}
else if(choicee == 8)
{
     	cout<<"=================================================================================";
		cout<<"\n                           Payemnt Procedure"    ;
		cout<<"\n===================================================================================";
		
		cout<<"\n\nSo Here We're Providing ATM Facilities To Our Coustomer. \nYou Can Use ATM And Do Whatever You Want Not Only Your Order Realated";
		
			cout<<"\n\nEnter Your ATM Num: "; cin>>Accountno; 
			
	cout<<"\n\nYour Name: "<<Coust_Name;   
	cout<<"\n\nYou Have Balance: "<<Balance;   
	
	cout<<"\n\nEnter Your Withdraw Ammount : "; cin>>Withdraw;
	if(Withdraw<Balance)
	{   
		cout<<"\n\nYour Withdraw Amount Is: "<<Withdraw;
		Balance-=Withdraw;   
	    cout<<"\n\nNow Your Remaining Amount Is : "<<Balance<<endl;
	}
	else
	{
		cout<<"\nYou Don't Have Suffient Balance!!";
	}
	
    
	cout<<"\n=========================================";
	cout<<"\n\nTHANKYOU FOR USING OUR ATM FACILITY";
	cout<<"\n======================================";
	
	getch();
	system("cls");

	mainmenu();
}
else if(choicee==9){
	cout<<"\n\n**********************************";
	cout<<"\n\nYour Name     : "<<dealername;
	cout<<"\n\nYour Address  : "<<address;
    cout<<"\n\nYour Phone No : "<<phonenumber;
    cout<<"\n\nYour City     : "<<cityname;
    cout<<"\n\nDate of buying: "<<date;	
    cout<<"\n\nAMMOUNT       : "<<totalprice;
    cout<<"\n\nVocher Ammount: "<<Totalprice;
   
    cout<<"\n\n***********************************";
    cout<<"\n------------------------------------------------\n";
	cout<<"\t\tTotalAmmout Rs: "<<(totalprice+Totalprice);
	cout<<"\nYour Withdraw Ammount is: "<<Withdraw;
	cout<<"\nEnter Paid Amount: "; cin>>paidd;
	if(paidd<=Withdraw){
	cout<<"Paid\t\t"<<paidd<<endl;}
	else{
		cout<<"You Dont Have Enough Money!!\n\nGo To The Menu And Use ATM Facility Option again";
		mainmenu();
	}
	cout<<"Remaining\t"<<(paidd-(totalprice+Totalprice))<<endl;
	
	cout<<"-------------------------------\n";
}
else
{
	
	exit(0);
}
}

};

int main()
{ 

Coustomer c; Staff s;
c.intro();
c.setprivatee("*****","user@gmail.com");
c.login();	
   char ch;
    
    cout<<"\n----------------------------------------------------------------------";
	cout<<"\nPress 'S' If You Are A Staff Member Or 'C' If You Are A Customer\n";
	cout<<"----------------------------------------------------------------------\n";
	cin>>ch;

	if(ch == 's' || ch == 'S')
	{
	s.Mainn();
	}
	else if(ch == 'c' || ch == 'C')
	{
	c.mainmenu();
	}

}

