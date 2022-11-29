#include<iostream>
using namespace std;
int main(){
    int total=3200;
    int *ptr,val;
    ptr=&total;
    cout<<"L'adresse de total est:"<<ptr<<endl;
    val=*ptr;
    cout<<"La variable total a pour valeur:"<<val<<endl;
    cout<<*ptr<<endl;
    cout<<(*ptr+1)<<endl;
    cout<<*(ptr+1)<<endl;
    cout<<ptr<<endl;
    cout<<(ptr+1)<<endl;
}
