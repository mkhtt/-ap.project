#include<iostream>
using namespace std;
class Bad_Date_Exception{};

class Date{
	private:
		int year;
		int month;
		int day;
		public:
			void getDate(){
				cin>>year>>month>>day;
			}
			void showDate(){
				cout<<year<<"/"<<month<<"/"<<day;
			}
			void setDate(int y,int m,int d);
};
bool is_leap_year(int year){
	int r=year%33;
	return r==1||r==5||r==9||r==13||r==17||r==22||r==26||r==30;
}
int days_of_month(int m,int y){
	if(m<7)
	  return 31;
	else if(m<12)
	  return 30;
	else if(m==12)
	  return is_leap_year(y) ? 30 : 29;
	else
	  throw Bad_Date_Exception();
}
void Date::setDate(int y,int m,int d){
	if(y<0||m<1||m>12||d<1||d>days_of_month(m,y))
	   throw Bad_Date_Exception();
	day=d;
	month=m;
	year=y;
}
