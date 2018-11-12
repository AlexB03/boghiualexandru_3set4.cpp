#include<iostream>
using namespace std;
int a,b;
int main(){
cout<<"Selectati primul nr -->";cin>>a;
cout<<"Selectati al doilea nr -->";cin>>b;
if( a==b ){
    cout<<"Cmmdc este -->"<<endl;cin>>a;
}
else{
    while(a!=b){
            if(a>b){a=a-b;}
            else{b=b-a;}

    }

    if(a==1){
        cout<<"Numerele sunt prime intre ele";
    }
    if(a!=1){
        cout<<"Numerele nu sunt prime intre ele";
    }
}
return 0;
}
