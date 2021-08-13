#include <iostream>

using namespace std;

int main()  {

    int n, x = 0;
    cout<<"Numero -----> ";
    cin>>n;
    while(n != 0){
	    n = n / 10;
	    x++;
}
cout<<"el numero ingresado tiene\n"<<x<<" cifras"<<endl;
	return 0;
}
