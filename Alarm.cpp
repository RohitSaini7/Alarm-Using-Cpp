#include <iostream>
#include <ctime>
#include <conio.h>
#include <windows.h>
using namespace std;

void alarm()
{
	int hh='0', mm='0',nh, nm, ns;
	cout << "\n\n\n\t\t\tSet An Alarm(In 24 Hrs System) For: \n\t\t\t\t   HH : MM\n\t\t\t\t   ";
	cin >> hh >> mm;
		
	if(hh>24)
	{
		cout<<"Please Enter Hours Less Than 24";
		cin.ignore();
		cin.get();
		system("cls");
		alarm();
	}

	else if(mm>59)
	{
		cout<<"Please Enter Minutes Less Than 59";
		cin.ignore();
		cin.get();
		system("cls");
		alarm();
	}

	else 
	{
		system("cls");
		while(1)
		{		
		cout <<"\n\n\n\t\t\t\t  Alarm Is For:\n\n\t\t\t\t   HH : MM : SS\n\t\t\t\t   "<< hh << " : " << mm <<" : 00"<< endl;
		time_t a = time(0);
		tm*b = localtime(&a);
		nh = b->tm_hour;
		nm = b->tm_min;
		ns = b->tm_sec;
		cout << "\n\n\n\t\t\t\t Current Time Is:\n\n";
		cout << "\t\t\t\t   HH : MM : SS\n\t\t\t\t   ";
		cout << nh << " : " << nm << " : " << ns <<endl;
		Sleep(1000);
		system("cls");

		if (hh == nh && mm == nm)
			{
				cout<<endl<<"\n\n\n\n\t\t\t\t  Time Completed"<<endl<<"\n\n\n\t\t\t>>> Press ANY to stop the ALARM <<<"<<endl;
				for (int i = 0; ; i += 100)
        			{
        				Beep(i,1000);
        				if(_kbhit())
	        			break;
    	    		}
    	    	break;
			}
		}
	}
}

int main()
{
	alarm();
}
