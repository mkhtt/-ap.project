#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#inude<fstream>
#include<vector>
#include "Date.h"

using namespace std;
class IllegalnumberException{};

class product{
	private:
		int code;
		string name;
	    int price;
		Date manufacture;
		public:
		    void setDom(){
		    	manufacture.setDate(y,m,d);
			}
		    void getDom(){
		    	manufacture.getDate();
			}
			void showDom(){
				manufacture.showDate();
			}
			void settercode(int code){
				this->code=code;
			}
			void settername(strig name){
				this->name=name;
			}
		    
			int getcode(){
				return code;
			}
			string getname(){ return name; }
			int getprice(){
				return price;
			}
			void getproduct();
			void printproduct();
};
class purchase{
	private:
		int id;
		Date pur;
		vector<purchaseitem> items;
		public:
			int get_id(){
				return id;
			}
			void getDop(){
				pur.getDate();
			}
			void setDop(){
				pur.setDate(y,m,d);
			}
			void showDop(){
				pur.showDate();
			}
};
class purchaseitem{
	private:
		string title;
		int _price;
		int count;
	
		public:
			purchaseitem(string _title,int p,int c):title(_title),_price(p),count(c){}
		    void print(){
		    cout<<title<<"\t"<<_price<<"\t"<<count<<"\t"get_price_purchaseitem()<<endl;
			}
			int get_price_purchaseitem(){
				int total=0;
				total=price*count;
				return total;
			}
			string get_title(){
				return title;
			}
			int get_count(){
				return count;
			}
};
int read count of purchase(ifstream& input){
	int cnt;
	input>>cnt;
	return cnt;
}
for(i=0;i<read count of purchase(input);i++){

int read_id(ifstream& input){
	int i_d;
	input>>i_d;
	return i_d;
}
Date read_date_purchase(ifstream& input){
	int d,m,y;
    char ch;//char '/'
	input>>d>>ch>>m>>ch>>y;
    return Date(d,m,y);
}

purchaseitem readitem(ifstream& input){
	string t;//title
	int p;//price
	int c;//count
	input>>t;
	input>>p;
	input>>c;
	return purchaseitem(t,p,c);
}
void read_purchaseitems_info(vector<purchaseitem> items){
	ifstream input("purchase.txt");
	int num;//count of purchase item
	input>>num;
	for(int i=0;i<num;i++){
		purchaseitem t=readitem(input);
		items.push_back(t);
	}
	input.close();
}
}
void show_purchase_detail(){//bill report
	int pno;
	vector<purchaseitem> items;
	int total_price;
	cout<<"enter id of purchase to show details\n";
	try{
		idvalidation(pno);
   }catch(const char* b){
   	cout<<"enter id again\n"l
   }
   cin>>pno;
   bool status=false;
   if(read_id(input)==pno){//if((i+1)==pno)
   	     status=true;
   	     break;
   }
   if(status==true){
   
   	cout<<"id:"<<pno<<"\t\tdate_purchase:"<<read_date_purchase(input).showDate();
   	for(int i=0;i<items.size();i++){//for(int i=0;i<num;i++)
   		items[i].print();
   		cout<<endl;
   		total_price+=items[i].get_price_purchaseitem();
   		cout<<"total_price:"<<total_price<<endl;
	   }
   }		
   getch();	
}
void idvalidation(id){
	if(id<1||id>read count of purchase(input)){
		throw "invalid id";
	}
}

//end of first method(bill report)
//===================================
//second method(bill report)
/*void show_purchase_detail(){
	int puNo;
	cout<<"enter id of purchase to show details\n";
	cin>>puNo;
	if(search_purchase(puNo)==-1){
		cout<<"not exist!new id\n";
	}else{
		purchase *p=new purchase();
		purchaseitem *i=new purchaseitem();
		p.open("purchase.txt",ios::in);
		p.seekg((sizeof(class purchase))*p->get_id(),ios::beg);
		p.read((char*)&p,sizeof(class purchase));
		cout<<"id="<<p->get_id()<<"       "<<"purchase Date:"<<p->showDop()<<endl;
		cout<<"title:"<<i->get_title()<<"count:"<<i->get_count()<<"    "<<i->get_price_purchaseitem()<<endl;
		p.close();
	}
	getch();
}
int search_purchase(int id){
	purchase *pu=new purchase();
	int key=-1;
	try{
		p.open("purchase.txt",ios::in|ios::out);
		validopenfile(p);
	}catch(const char* c){
		cerr<<"please try again";
	}
	p.seekg(sizeof(class purchase)*id,ios::beg);
	p.read((char*)&pu,sizeof(class purchase));
	p.close();
	if(pu->get_id()==0){
		return key;
	}else{
		return id;
	}
}*/
//==============================
//third method(bill report)
/*void showDetailpurchase(){//bill report
	cout<<"enter id of purchase to show detail\n";
	cin>>pNo;
	int price;
	int num;
	int count;//tedad purchase item
	string line;
	vector<string> lines;
	if(pNo==1){
	
	ifstream read("purchase one.txt");//first purchase
	read>>count;
	for(i=0;i<count;i++){
		read>>num;
		read>>price;
		int total+=num*price;
	}
	while(getline(read,line)){
		lines.push_back(line);
	}
	for(auto i=lines.begin();i!=lines.end();++i){
		cout<<*i<<endl;
	}
	cout<<"total:"<<total;
}
    if(pNo==2){
    ifstream read("purchase two.txt");//second purchase
	read>>count;
	for(i=0;i<count;i++){
		read>>num;
		read>>price;
		int total+=num*price;
	}
	while(getline(read,line)){
		lines.push_back(line);
	}
	for(auto i=lines.begin();i!=lines.end();++i){
		cout<<*i<<endl;
	}
	cout<<"total:"<<total;
	}

}*/

void product::getproduct(){
	product p;
	cout<<"enter the code of product\n";
	cin>>code;
	if(code<0) throw IllegalnumberException();
	cout<<"please enter the name of product\n";
	cin>>name;
	if(name="") throw 2;
	cout<<"please enter the price of product\n";
	cin>>price;
	if(price<=0) throw  IllegalnumberException();
	cout<<"enter Datemanufacture of product\n";
	cin>>p.getDom();
}

void add_product(){
	product *pr=new product();
	int prNo;
	cout<<"enter code for add\n";
	cin>>prNo;
	if(prNo<0) 
	throw IllegalnumberException;
	if(searchproduct(prNo!=-1)){
		cout<<"code exist please enter new code\n";
    }else{
    	pr->getproduct();
    try{
		p.open("product.txt",ios::in|ios::out);
		validopenfile(p);
	}catch(const char* c){
		cerr<<"please try again";
	}
	p.seekp(sizeof(class product)*pr->getcode(),ios::beg);
	p.write((char*)&pr,sizeof(class product));
	p.close();
	}
	getch();
}
void print_list();
void edit_product();
void delete_product();
fstream p;
int main(){
	system("cls");
	bool repeat=true;
	int ch1,ch2;
	 xyz:
	while(repeat){
	cout<<"\n\n";
	cout<<"              Super Market Billing "<<"\n
	cout<<"             ====================== "<<"\n\n";
	cout<<"        1.Bill Report\n";
	cout<<"        2.Add/Remove/Edit Item\n";
	cout<<"        3.show Item Details\n";
	cout<<"        4.Exit\n";
	cout<<"        please enter Required option:;
	cin>>ch1;
	system("cls");
	switch(ch1){
		case 1:
			show_purchase_detail();
			break;
		case 2:{
			
		
			xyz2:
			cout<<"\n\n";
			cout<<"         Bill Editor\n";
			cout<<"        =============\n\n";
		    cout<<"    1.Add Item Details"<<endl;
			cout<<"    2.Edit Item Details"<<endl;
		    cout<<"    3.Delete Item Details"<<endl;
		    cout<<"    4.Back to Main Menue 1  "<<"\n";
		    cin>>ch2;
		    switch(ch2){
		    	case 1:  system("cls");
		    	         add_product();
		    	         break;
		    	case 2:  edit_product();
		    	         cout<<"\n";
		    	         break;
		    	case 3:  delete_product();
		    	         break;
		    	case 4:  goto xyz;
		    	         break;
		    	default:
		    		     cout<<"invalid";
			}
		    break;           
		    case 3: 
			     print_list();
				 break;
		    case 4:
			     exit(0);
			default:
			     cout<<"invalid input\n";           
	}
	}
	  	
	}
	getch();
  return 0;
	        	
}
void validopenfile(ifstream p){
	if(!p){
		throw "can not open file.";
	}
}
void searchproduct(int id){
    system("cls");
	product *pr=new product();
	int key=-1;
	try{
		p.open("product.txt",ios::in|ios::out);
		validopenfile(p);
	}catch(const char* c){
		cerr<<"please try again";
	}
	p.seekg(sizeof(class product)*id,ios::beg);
	p.read((char*)&pr,sizeof(class product));
	p.close();
	if(pr->getcode()==0){
		return key;
	}else{
		return id;
	}
}
void product::printproduct(){
	product p;
	if(code!=0){
	cout<<"\t\t"<<code<<":"<<name<<"\t"<<price<<"\t"<<p.showDom();
    }
}
void print_list(){//3.show all item details
    system("cls");
	product *pr=new product();
	 try{
		p.open("product.txt",ios::in|ios::out);
		validopenfile(p);
	}catch(const char* c){
		cerr<<"please try again";
	}
	p.read((char*)&pr,sizeof(class product));	
	while(!p.eof()){
		pr->printproduct();
		p.read((char*)&pr,sizeof(class product));
	}
	getch();
}
/*ifstream File("product.txt");// 3.show all item details
string path;
vector<string> products;
while(getline(File,path)){
	products.push_back(path);
}
for(auto i=products.begin();i!=products.end();++i){
	cout<<*i<<endl;
}*/	
void edit_product(){
	product *pu=new peoduct();
	int prno;
	cout<<"please enter code of product to edit details\n";
	cin>>prno;
	if(searchproduct(prno==-1)){
		cout<<"code not find!!enter new code\n";
    }
	else{
	 try{
		p.open("product.txt",ios::in|ios::out);
		validopenfile(p);
	}catch(const char* c){
		cerr<<"please try again";
	}
	p.seekg(sizeof(class product)*prno,ios::beg);
	p.read((char*)&pu,sizeof(class product));
	p.close();
	cout<<"\n"<<pu->getcode()<<":"<<pu->getname()<<"\t"<<pu->getprice()<<"\t"<<pu->showDom()<<endl;
	cout<<"please enter New name to edit\n ";
	cin>>pu->getname();
	cout<<"enter New price\n";
	cin>>pu->getprice();
	cout<<"please enter New Datemanufacture to edit\n";
	cin>>pu->getDom();
	p.open("product.txt",ios::out);
	p.seekp(sizeof(class product)*pu->getcode(),ios::beg);
	p.write((char*)&pu,sizeof(class product));
  }
}
void delete_product(){
	product *pu=new peoduct();
	int prno;
	cout<<"please enter code of product to remove item\n";
	cin>>prno;
	if(searchproduct(prno==-1)){
		cout<<"code not find!!enter new code\n";
    }
	else{
	 try{
		p.open("product.txt",ios::in|ios::out);
		validopenfile(p);
	}catch(const char* c){
		cerr<<"please try again";
	}
	p.seekg(sizeof(class product)*prno,ios::beg);
	p.read((char*)&pu,sizeof(class product));
	p.close();
	cout<<"\n"<<pu->getcode()<<":"<<pu->getname()<<"\t"<<pu->getprice()<<"\t"<<pu->showDom()<<endl;
	pu->getcode()=0;
	p.open("product.txt",ios::out);
	p.seekp(sizeof(class product)*prno,ios::beg);
	p.write((char*)&pu,sizeof(class product));
  }
  getch();
}





