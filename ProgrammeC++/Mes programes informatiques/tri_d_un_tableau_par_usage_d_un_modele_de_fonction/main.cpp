#include<iostream>
using namespace std;
template<class T>
void tri(T *tab,int taille){
    T x;           //changez
    for(int i=0;i<taille-1;i++){
        for(int j=i+1;j<taille;j++){
            if(tab[i]>tab[j]){
                x=tab[i];
                tab[i]=tab[j];
                tab[j]=x;
            }
        }
    }
}

int main(){
    string tab[10]={"poi","poe","mlkjhgvb","kjhgf","nhygv","mlk","qsd","azer","mpo","wsq"}; //changez
    tri(tab,10);
    for(int i(0);i<10;i++){
        cout<<tab[i]<<" ";
    }
    cout<<endl;

}
