#include<iostream>
using namespace std;
// higher area of pyramid (GHQ)

class G
{
    public:
        void funcG()
        {
            cout<<"CEO"<<endl;
        }
};

// middle area of pyramid (HQ)

class H : public G
{
    public:
        void funcH()
        {
            cout<<"COO & ";
        }
};

class Q : public G
{
    public:
        void funcQ()
        {
            cout<<"CFO"<<endl;
        }
};

// lower area of pyramid (ARMY)
class A : public H
{
    public:     
};

class R : public H
{
    public:   
};

class M : public Q
{
    public:
};
class Y : public Q
{
    public:
};







// main

int main()
{   
    // cout<<"P";
    // cout<<"Y";
    // cout<<"R";
    A a;
    // a.funcH();
    a.funcG();
    R r;
    // r.funcG();
    r.funcH();
    M m;
    // m.funcQ();
    // m.funcG();
    Y y;
    y.funcQ();
    // y.funcG();
    cout<<"Directors";
    // This program tells us that through each block we can access first block easily.
    return 0;
}