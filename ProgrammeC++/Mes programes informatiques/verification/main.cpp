#include<iostream>
using namespace std;
int tri(int tab[10]);
int main(){
   /* char c[] = "Salut les copains !" ;
    char *pc = &c[2] ;
    cout<< c <<endl;
    cout<<c[3]<<endl ;
    cout<< pc <<endl;
   // cout<< *(pc–2)<<endl;
    cout<< *pc–2<<endl  */

   /* char *pc;
    pc=new char[4];
    *pc='a';
    *(pc+1)='b';
    *(pc+2)='c';
   // *(pc+3)='d';
    cout<<*pc<<" "<<*(pc+1)<<" "<<*(pc+2)<<" "<<*(pc+3)<<endl;
    delete pc; */

   /* int t [3] ;
    int i, j ;
    int * adt ;
    for (i=0, j=0 ; i<3 ; i++) t[i] = j++ + i ;
    for (i=0 ; i<3 ; i++) cout << t[i] << " " ;
    cout << "\n" ;
    for (i=0 ; i<3 ; i++) cout << *(t+i) << " " ;
    cout<< ("\n") ;
    for (adt = t ; adt < t+3 ; adt++) cout << *adt << " " ;
    cout << "\n" ;
    for (adt=t+2 ; adt>=t ; adt--) cout<< *adt<< " "; cout<< "\n" ; */

    /*int tab[10];
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
    cout<<"Le plus grand nombre du tableau est "<<max<<" et le plus petit est "<<min<<endl;*/



    int tabint[10];
    cout<<"Tri d'un tableau de type quelconque"<<endl;
    cout<<"*Cas d'un tableau de type entier"<<endl;
    cout<<"Entrez 10 valeurs entières"<<endl;
    for(int a=0;a<10;a++){
        cout<<"Valeur["<<a+1<<"]:";
        cin>>tabint[a];
    }
    for(int y=0;y<10;y++){
        int tabint[y]=tri(tabint[y]);
    }
   // tabint[10]=tri(tabint[10]);
    cout<<"Le tri des valeurs precedement entrees donne:"<<endl;
    for(int b=0;b<10;b++){
        cout<<tabint[b]<<" ";
    }
}
int tri(int tab[10]){
    int x;
    for(int i=0;i<9;i++){
        for(int j=1;j<10;j++){
            if(tab[i]>tab[j]){
                x=tab[i];
                tab[i]=tab[j];
                tab[j]=x;
            }
        }
    }
    for(int z=0;z<10;z++){
        return tab[z];
    }

}

