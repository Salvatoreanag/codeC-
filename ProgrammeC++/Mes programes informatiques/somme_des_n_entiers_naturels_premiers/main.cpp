#include<iostream>
using namespace std;
int somme(int n);
int main(){
    int x;
    cout<<"Somme des n entiers naturels non nuls"<<endl;
    cout<<"Entrez un nombre entier strictement positif:";
    cin>>x;
    while (x<0) {
        cout<<"Veuillez entrer un entier strictement positif:";
        cin>>x;
    }
    cout<<"La somme des "<<x<<" entiers naturels non nuls donne:"<<somme(x)<<endl;
}
int somme(int n){
    if(n==1) return 1;
    else return n+somme(n-1);
}
