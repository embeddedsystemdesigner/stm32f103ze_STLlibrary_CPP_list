#include "stm32f10x.h"
#include <string.h>
#include <iostream>
#include <list>
#include <vector>
#include <algorithm> 

// telegram id --->    @eneeir
// github --->  https://github.com/embeddedsystemdesigner
// website  ---> www.enee.ir



using namespace std;

void delay_us(unsigned int time);
void delay_ms(unsigned int time);




int main (void)
{
list<int> mylist(10);
list<int>::iterator itr;
list<string> name;
list<string>::iterator itr_str;	
string buffer;
int count;


/******************************************************************************/
cout<<"enter 5 name"<<endl;
for(int j = 0; j<5; j++)
{
	cout<<"pleas enter name "<<j+1<<":  "<<endl;
	cin>>buffer;
	name.push_back(buffer);	
}

cout<<"********************************"<<endl;
cout<<"all names you interd are"<<endl;
for(list<string>::iterator count = name.begin();  count!= name.end(); count++)
  cout<<*count<<endl;
/******************************************************************************/

lable:
cout<<"select a name to rease :"<<endl;
cin>>buffer;
itr_str = find(name.begin(),name.end(),buffer);
name.erase(itr_str);

if(itr_str == name.end())
 {
 cout<<"the name does not exist"<<endl;
 goto lable;
 }
 
cout<<name.size()<<endl;

for(list<string>::iterator count = name.begin();  count!= name.end(); count++)
  cout<<*count<<endl;
cout<<"********************************"<<endl;
/******************************************************************************/

mylist.push_back(54);
cout<<"size of list is now  : "<<mylist.size()<<endl;


itr_str = find(name.begin(),name.end(),"bill");
if(itr_str != name.end())
{
 name.insert(itr_str,"mina");
 cout<<"the name found and inserted"<<endl;
 for(list<string>::iterator count = name.begin();  count!= name.end(); count++)
   cout<<*count<<endl;
}



while(1)
	{
		
	
	}


	
}



void delay_us(unsigned int time)
{
	
	while(time--)	
		{
			
		__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
		__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();	
		__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
		__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
		__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
		__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
		__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();	
    __NOP();__NOP();	

		}
	
}




void delay_ms(unsigned int time)
{
	
	while(time--)	
		{
			
    delay_us(1000);
			
		}

}



