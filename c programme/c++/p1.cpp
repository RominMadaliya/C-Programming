#include<iostream>
using namespace std;
int main()
{
    
 
    cout<<"dol->rupee ENTER 1\n"<<endl;
    cout<<"feet->inches ENTER 2\n"<<endl;
    cout<<"inch->cemi ENTER 3\n"<<endl;
    cout<<"celsius->fahrenheit ENTER 4\n"<<endl;
    int n;
    do
    {
        cout<<"Enter Your Choice :"<<endl;
        cin>>n
         if (n < 0 || n > 5)
         {
            cout>>Invalid Input;
         }
    }

   
    cout << "Enter the doller amount :";
    cin>> dol;
    rupee=dol*82;
    cout<<"The doller into rupees is :"<<rupee; 

}