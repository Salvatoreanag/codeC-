#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    const int n(3);
    float matA[n][n],matB[n][n],matC[n][n];

    cout<<"Matrice A"<<endl;
    for(int i(0);i<n;i++){
        for(int j(0);j<n;j++){
            cout<<"Entrez la valeur matA["<<i+1<<"]["<<j+1<<"]:";
            cin>>matA[i][j];
            cout<<endl;
        }
    }

    cout<<"Matrice B"<<endl;
    for(int i(0);i<n;i++){
        for(int j(0);j<n;j++){
            cout<<"Entrez la valeur matB["<<i+1<<"]["<<j+1<<"]:";
            cin>>matB[i][j];
            cout<<endl;
        }
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
