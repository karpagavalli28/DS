#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    stack<string> h;
    h.push("google.com");
    h.push("youtube.com");
    h.push("abcsc.com");
    h.push("facebook.com");
    cout<<"Current page: "<<h.top()<<endl;
    h.pop();
    cout<<"After first Back: "<<h.top()<<endl;
    h.pop();
    cout<<"After second Back: "<<h.top()<<endl;
    return 0;
}
