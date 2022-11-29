#include<iostream>
using namespace std;



class A{
    protected:
        int data=56;
};

class B:protected A{};

class C:protected A{};

class D:protected B,protected C{
    private:
        int data=56;
    public:
        int getData(){return data;}
};

int main(){
    D d;
    d.getData();
}

