#include<iostream>
using namespace std;
class NEWS{
    int t;
    public:
    void ne(){
        cout<<"Enter any value"<<endl;
        cin>>t;
    }
    void acc(){
        cout<<t<<endl;
    }
};
int main(){
    NEWS i;
    i.ne();
    i.acc();
    return 0;
}