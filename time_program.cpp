#include<iostream>
using namespace std;
class time
{
	public:
		int hours;
		int minutes;
		int seconds;
		int compute_total_sec()
		{
			double ts;
			ts=3600*hours+60*minutes+seconds;
			return ts;
		}
		void f_1()
		{
			if(hours>10)
			cout<<hours;
			else
			cout<<"0"<<hours;
		}
		void f_2()
		{
			if(minutes>10)
			cout<<minutes;
			else
			cout<<"0"<<minutes;
		}
		void f_3()
		{
			if(seconds>10)
			cout<<seconds;
			else
			cout<<"0"<<seconds;
		}
};
int main()
{
	time t;
	cout<<"Enter time:"<<endl;
	cout<<"hours? ";
	cin>>t.hours;
	cout<<"\n";
	cout<<"minutes? ";
	cin>>t.minutes;
	cout<<"\n";
	cout<<"seconds? ";
	cin>>t.seconds;
	cout<<"\n";
	t.f_1();
	cout<<":";
	t.f_2();
	cout<<":";
	t.f_3();
	cout<<"Time in total seconds :"<<t.compute_total_sec();
	return 0;
}

