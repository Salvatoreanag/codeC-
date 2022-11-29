#include<iostream>
using namespace std;
int main(){
  /*  int tab[10];
    for(int i=0;i<10;i++){
        cout<<"Entrez la valeur tab["<<i+1<<"]:";
        cin>>tab[i];
    }
    int min=tab[0];
    int max=tab[0];
    for(int i=1;i<10;i++){
        if(min>=tab[i]){
            min=tab[i];
        }
        if(max<=tab[i]){
            max=tab[i];
        }
    }
    cout<<"La plus grande valeur du tableau est "<<max<<" et la plus petite valeur est "<<min<<"."<<endl;  */

    /*int tab[10];
        for(int i=0;i<10;i++){
           cout<<"Entrez la valeur tab["<<i+1<<"]:";
           cin>>*(tab+i);
       }
       int min=*tab;
       int max=*tab;
       for(int i=1;i<10;i++){
           if(min>=*(tab+i)){
               min=*(tab+i);
           }
           if(max<=*(tab+i)){
               max=*(tab+i);
           }
       }
       cout<<"La plus grande valeur du tableau est "<<max<<" et la plus petite valeur est "<<min<<"."<<endl; */

   /* int t[4] = {10, 20, 30, 40} ;
    int * ad [4] ;
    int i ;
    for (i=0 ; i<4 ; i++) ad[i] = t+i ;
    for (i=0 ; i<4 ; i++) cout << * ad[i] << " " ;
    cout << "\n" ;
    cout << * (ad[1] + 1) << " " << * ad[1] + 1 << "\n" ;  */

    int n;
    int *ptab1=new int[n];
    cout<<"Entrez la taille du tableau:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Entrez la valeur tab["<<i+1<<"]:";
        cin>>*(ptab1+i);
    }
    cout<<endl;
    int *ptab2=new int[n];
    for(int i=0;i<n;i++){
        *(ptab2+i)=(*(ptab1+i))*(*(ptab1+i));
    }
    delete []ptab1;
    cout<<"Voici les carres des nombres precedemment saisis:"<<endl;
    for(int i=0;i<n;i++){
        cout<<*(ptab2+i)<<" ";
    }
    cout<<endl;
    delete []ptab1;
}
