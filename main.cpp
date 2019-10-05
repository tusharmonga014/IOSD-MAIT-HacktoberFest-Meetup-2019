#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int month,century_code,year,nextdate,date,month_code,year_code,datecorrect,day,leap_year_code;
    bool bad=false;
    system("color b0");
    cout<<"________________________________________________________________________________________________________________________________________________________________________\n";
    cout<<"\n\t\t\t\t\t\t\t\t\t    WELCOME TO DAY FINDING PROGRAM\n\n";
    cout<<"________________________________________________________________________________________________________________________________________________________________________\n";
    do{
    do{
    datecorrect=1;
    cout<<"Enter the date,\n\n";
    do{
    cout<<"  Date: ";
    cin>>date;
    bad=cin.fail();
    if(bad)
    cout<<"\tInvalid Date\n\n";
    else if(date>31 || date<1)
        cout<<"\tInvalid Date\n\n";
    cin.clear();
    cin.ignore(10, '\n');
    }while(bad || date<1 || date>31);
    do{
    cout<<"\n  Month: ";
    cin>>month;
    bad=cin.fail();
    if(bad)
    cout<<"\tInvalid Month\n\n";
    else if(month<1 || month>12)
        cout<<"\tInvalid Month\n\n";
    if(date==31 && (month==3 || month==4 || month==6 || month==9 || month ==11))
       {
           cout<<"\n\tThis Month has only 30 days\n\n";
           datecorrect=0;
       }
    else if(date>29 && month==2)
    {
        cout<<"\n\tThis month can not have this date\n\n";
        datecorrect=0;
    }
    cin.clear();
    cin.ignore(10, '\n');
    }while(bad || month<1 || month>12);
    }while(datecorrect!=1);
    do{
    cout<<"\n  Year [limit 1700-2399] : ";
    cin>>year;
    bad=cin.fail();
    if(bad)
    cout<<"\tInvalid Year\n\n";
    else if(year<=1699 || year>2399)
        cout<<"\tInvalid Year\n\n";
    cin.clear();
    cin.ignore(10, '\n');
    }while(bad || year<=1699 ||year>2399);


    //date month year entered.

      if(year>=1700 && year<=1799)
        century_code=4;
      if(year>=1800 && year<=1899)
        century_code=2;
      if(year>=1900 && year<=1999)
        century_code=0;
      if(year>=2000 && year<=2099)
        century_code=6;
      if(year>=2100 && year<=2199)
        century_code=4;
      if(year>=2200 && year<=2299)
        century_code=2;
      if(year>=2300 && year<=2399)
        century_code=0;



     if(month==1)
        month_code=0;
     if(month==2)
        month_code=3;
     if(month==3)
        month_code=3;
     if(month==4)
        month_code==6;
     if(month==5)
        month_code=1;
     if(month==6)
        month_code=4;
     if(month==7)
        month_code=6;
     if(month==8)
        month_code=2;
     if(month==9)
        month_code=5;
     if(month==10)
        month_code=0;
     if(month==11)
        month_code=3;
     if(month==12)
        month_code=5;



        if(year%4==0)
        {
            if(year%100==0)
            {
                if(year%400==0)
                    leap_year_code=1;
                else
                    leap_year_code=0;

            }
            else
                leap_year_code=1;
        }
        else
            leap_year_code=0;





     year=year%100;

     year_code=(year+(year/4))%7;


     day=(year_code+month_code+century_code+date-leap_year_code)%7;


     if(day==0)
        cout<<"\n\n\n\t\t\t\t\t\t\tIt is a Sunday\n";
     if(day==1)
        cout<<"\n\n\n\t\t\t\t\t\tIt is a Monday\n";
     if(day==2)
        cout<<"\n\n\n\t\t\t\t\t\tIt is a Tuesday\n";
     if(day==3)
        cout<<"\n\n\n\t\t\t\t\t\tIt is a Wednesday\n";
     if(day==4)
        cout<<"\n\n\n\t\t\t\t\t\tIt is a Thursday\n";
     if(day==5)
        cout<<"\n\n\n\t\t\t\t\t\tIt is a Friday\n";
     if(day==6)
        cout<<"\n\n\n\t\t\t\t\t\tIt is a Saturday\n";


     do{
     cout<<"\n\n\n\n\n\n\t\tNext Date? \n\n\t\tYes(0)  No(1)\n\n\t\tChoice : ";
     cin>>nextdate;
     bad=cin.fail();
    if(bad)
    cout<<"\tInvalid Choice\n\n";
    else if(nextdate<0 || nextdate>1)
        cout<<"\tInvalid Choice\n\n";
    cin.clear();
    cin.ignore(10, '\n');
    }while(bad && (nextdate<0 || nextdate>1));



}while(nextdate!=1);



}
