#include <iostream>
using namespace std;

int main() {
  int i = 0;
  while (i < 10) {
    if (i == 4) {
    
      cout<<i++<<endl;//post increment, print older value then print 4
      cout<<i<<endl;//here it prints updated value that's 5
    	continue;
    }
    cout << i << "\n";
    if(i==9) {cout<<++i;
	    cout<<"breaking out of loop";
		    //pre increment ; increment then print 10
break;}
 i++;
  }
  
  return 0;
}

