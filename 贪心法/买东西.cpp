#include <iostream>
using namespace std;
int main(){
    int x,n;
    cin>>x;
    while(true){
        if(x >= 100){
            x = x - 100;
            n++;
        }else if(x >= 20){
            x = x - 20;
            n++;
        }else if(x >= 10){
            x = x - 10;
            n++;
        }else if(x >= 5){
            x = x - 5;
            n++;
        }else if(x >= 1){
            x = x - 1;
            n++;
        }else{
            break;
        }
    }
    cout<<n;
    return 0;
}
