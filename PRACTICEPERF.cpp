#include<iostream>
using namespace std;
int main(){
   
    int a[4],count;
    
    for(int i=0;i<4;i++)
    {
        cin>>a[i];  
    }
        for(int i=0;i<4;i++)
    {
        if(a[i]>=10){
            count++;
        }
    }

    cout<<count<<endl;
         
       
     return 0;
}
