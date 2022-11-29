#include<iostream>
#include<iomanip>
#include<time.h>
using namespace std;
int main(){
    const int n(3);
    float matA[n][n],matB[n][n],matC[n][n];
    srand(time(NULL));
    cout<<"Matrice A"<<endl;
    for(int i(0);i<n;i++){
        for(int j(0);j<n;j++){
            matA[i][j]= rand()%7;
        }
    }
    for(int i(0);i<n;i++){          //afficher les facteurs de A
        for(int j(0);j<n;j++){
            cout<<setw(4)<<matA[i][j];
        }
        cout<<endl;
    }
    cout<<"Matrice B"<<endl;
    for(int i(0);i<n;i++){
        for(int j(0);j<n;j++){
             matB[i][j]= rand()%3;
        }
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
