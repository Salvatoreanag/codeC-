#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    const int n(3);
    float matA[n][n],matB[n][n],matC[n][n];

    cout<<"Matrice A"<<endl;
    int a(4);
    for(int i(0);i<n;i++){
        for(int j(0);j<n;j++){
            matA[i][j]= a-5;
            a=a+1;
        }
        a=7;
    }
    for(int i(0);i<n;i++){          //afficher les facteurs de A
        for(int j(0);j<n;j++){
            cout<<setw(4)<<matA[i][j];
        }
        cout<<endl;
    }

    cout<<"Matrice B"<<endl;
    int b(1);
    for(int i(0);i<n;i++){
        for(int j(0);j<n;j++){
            matB[i][j]= b+3;
            b=b-2;
        }
        b=5;
    }
    for(int i(0);i<n;i++){          //afficher les facteurs B
        for(int j(0);j<n;j++){
            cout<<setw(4)<<matB[i][j];
        }
        cout<<endl;
    }

    for(int i(0);i<n;i++){
        for(int j(0);j<n;j++){
            float som(0);
            for(int k(0);k<n;k++){
                som=som+matA[i][k]*matB[k][j];
            }
            matC[i][j]=som;
        }
    }
    cout<<"Voici les facteurs de la matrice C qui est le produit des matrices A et B:"<<endl;
    for(int i(0);i<n;i++){
        for(int j(0);j<n;j++){
            cout<<setw(4)<<matC[i][j];
        }
        cout<<endl;
    }
}
