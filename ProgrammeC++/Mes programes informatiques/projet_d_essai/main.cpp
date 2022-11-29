#include<iostream>
using namespace std;

/* questin 5 ordre d'activation du constructeur
class Base{
    public:
        Base(){cout<<"Je suis un element de la classe base"<<endl;}
};

class Base1{
    public:
        Base1(){cout<<"Je suis le chef de la classe base1"<<endl;}
};

class A:public Base,virtual public Base1{
    public:
        A(){cout<<"Je suis l'heritier des clases base et base1"<<endl;}
};

class B:virtual public Base,virtual public Base1{
    public:
        B(){cout<<"Je suis le meilleur des clases base et base1"<<endl;}
};

class X:virtual public A, public B{
    public:
        X(){cout<<"Je suis le fils ainé de la classe X"<<endl;}
};  */

/* question 6 ordre d'activation des destructeurs
class A{
    public:
        ~A(){cout<<"Je suis un element de la classe base"<<endl;}
};

class B{
    public:
        ~B(){cout<<"Je suis le chef de la classe base1"<<endl;}
};

class C{
    public:
        ~C(){cout<<"Je suis l'heritier des clases base et base1"<<endl;}
};

class X: public A, public B{
    public:
        ~X(){cout<<"Je suis le meilleur des clases base et base1"<<endl;}
};

class Y:public X, public C{
    public:
        ~Y(){cout<<"Je suis le fils ainé de la classe X"<<endl;}
}; */

class X{
    public:
        static int q;
};
int q=10;


int main(){
    //X *ptr(new X()); question 5

    //Y yobj;  question 6
    //Y *ptr=&yobj;
    //delete ptr;

}
