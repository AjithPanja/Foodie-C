#include<iostream>
using namespace std;
class Foodie
{
    /*struct menu
    {
        string items
    };*/
    public :
    void hotel();
    void menu(int);
    bool validate(string,string);
    string log = "admin";
    string pass = "pass";
}f;
int main()
{
    string l ,p;
    bool check;
    cout << "\t\t\t\t\tFoodie";
    cout << "Welcome to Foodie :"<<endl;
    cout<<"Log-in ID :";
    cin >> l;
    cout <<"Password :";
    cin >> p;
    check = f.validate(l,p);
    if(check)
    {
        cout << "Welcome "<<l <<"!"<<endl;
        cout << "Location : Chennai"<<endl;
        f.hotel();
    }
    else
    {
        cout << "Sorry! User ID not found :)";
    }
}
bool Foodie :: validate(string l,string p)
{
    if(l==log && p==pass)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Foodie :: hotel()
{
		bool choice = true;
		int n;
		while(choice)
		{
			cout << "1.BNB Live Grill\n2.Kipling Cafe\n3.Coal Barbeque\n4.Logout\nEnter your choice:";
			cin >> n;
			switch(n)
			{
			case 1:
				f.menu(0);break;
			case 2:
				f.menu(1);break;
			case 3:
				f.menu(2);break;
			case 4:
				return;
			default:
				cout << "Enter correct choice.";
			}
}
}
void Foodie :: menu(int x)
{
    int c;
    cout<<"Hotel "<<x+1<<"  menu ,Will be updated soon :)"<<endl;
    cout<<"1.Back ";
    cin >> c;
    if(c==1)
    {
        return;
    }
}
