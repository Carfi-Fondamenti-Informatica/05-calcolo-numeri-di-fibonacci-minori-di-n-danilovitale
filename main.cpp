#include <iostream>
using namespace std;
int main (){
    int n = 0;
    cin >> n;
      if (n >= 2)
	   {
         int a1 = 1,a2 = 1;
	      cout << a1 << endl<< a2 <<endl;
	      int fib = 0,s = 0 ;
	      while (1)
		  {
		     fib = a1 + a2;
		     s = a1 + a2;
		     if (fib<n)
		       {
		        cout << fib << endl;
		       }
		     else
		       {
		         break;
		       }
		     a1 = a2;
		     a2 = s;
	      }
	  }
      else
	  {
	  cout << "errore" << endl;
	  }
  return 0;
}
