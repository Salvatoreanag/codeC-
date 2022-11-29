#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Somme des n entiers naturels non nuls"<<endl;
    cout<<"Entrez un nombre entier strictement positif:";
    cin>>x;
    while (x<0) {
        cout<<"Veuillez entrer un entier strictement positif:";
        cin>>x;
    }
    int somme=0;
    for(int i=1;i<=x;i++) somme=somme+i;
    cout<<"La somme des "<<x<<" entiers naturels non nuls donne:"<<somme<<endl;
}
