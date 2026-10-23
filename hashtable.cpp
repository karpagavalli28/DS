#include <iostream>
using namespace std;
const int SIZE=10;
int table[SIZE];
void insert(int x){
    int i=x%SIZE,start=i;
    while(table[i]!=-1){
        i=(i+1)%SIZE;
        if(i==start){cout<<"Table full\n";return;}
    }
    table[i]=x;
    cout<<"Inserted\n";
}
void search(int x){
    int i=x%SIZE,start=i;
    while(table[i]!=-1){
        if(table[i]==x){cout<<"Found at index "<<i<<endl;return;}
        i=(i+1)%SIZE;
        if(i==start)break;
    }
    cout<<"Not found\n";
}
void display(){
    for(int i=0;i<SIZE;i++)cout<<i<<" : "<<table[i]<<endl;
}
int main(){
    for(int i=0;i<SIZE;i++)table[i]=-1;
    int ch,x;
    do{
        cout<<"\n1.Insert 2.Search 3.Display 4.Exit\n";
        cout<<"Choice: ";cin>>ch;
        if(ch==1){cout<<"Enter number: ";cin>>x;insert(x);}
        else if(ch==2){cout<<"Search number: ";cin>>x;search(x);}
        else if(ch==3)display();
    }while(ch!=4);
    return 0;
}
