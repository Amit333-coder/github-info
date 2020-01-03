#include <iostream>
using namespace std;
int main()
  
{
	
    int n;
    cin >>n;
    string arr[9] = {"one","two","three","four","five","six","seven","eight","nine"};
    if(n>=1 && n<=9)
    {
        cout<<arr[n-1];
    }
    else if(n<1){
        cout<<"less than 1";
    }
    else {cout<<"greater than 9";
    }
    // Write Your Code Here

    return 0;
}
   
  

