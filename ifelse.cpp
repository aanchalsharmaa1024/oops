#include <iostream>

using namespace std;

int main()
{
    int savings;
    cin>>savings;
    
    if (savings>5000)
    {
	 if (savings>8000)
	 {
            cout<<"Longdrive with Neha";
         }
        else{
            cout<<"shopping with Neha";
        }
    }
        else if (savings>2000){
        cout<<"Going with Rashmi"<<endl;
    }
    else {
	    cout<<"Going with friends"<<endl;
	  }
}
