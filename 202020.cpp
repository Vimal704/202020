#include<iostream>
#include<windows.h>
using namespace std;
void funt(int j){
     cout<<j<<"th Cycle Running"<<"\n";
    j++;
    Sleep(1200000);
    Beep(600,500);
    funt(j);
    }
int main(){
    cout<<"Each cycle is of 20 minutes"<<"\n";
    funt(1);
}
