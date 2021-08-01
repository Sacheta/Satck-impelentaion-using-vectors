#include<iostream>
#include<vector>

using namespace std;

class Stack{
    vector<int> s;
public:
    void push(int n)
    {
        s.push_back(n);
    }
    int pop()
    {
        int res=s.back();
        s.pop_back();
        return res;
    }

    int peek(){
        return s.back();
    }

};

int main(){
    Stack a;
    cout<<"Make selection:"<<endl;
    cout<<"1. Push"<<endl;
    cout<<"2. Pop"<<endl;
    cout<<"3. Peek"<<endl;

    int n;
    while(cin>>n){
        switch(n){
        case 1:
            int e;
            cout<<"Enter element to push:"<<endl;
            cin>>e;
            a.push(e);
            break;
        case 2:
            cout<<a.pop()<<" deleted!"<<endl;
            break;
        case 3:
            cout<<a.peek()<<" at the top!"<<endl;
            break;
        default:
            cout<<"Invalid input!"<<endl;
        }
    }
}
