#include <iostream>

using namespace std;

int main(){
    int counter = 2;
    int searchingFor;
    cout<<"What Prime Number?"<<endl;
    cin>>searchingFor;
    int i=2;
    bool isPrime=true;
    while (counter<=searchingFor){
        i++;
        if(i%2==0){
            isPrime=false;
        }else{
            int t = i-1;
            t=static_cast<int>(t/2);
            isPrime=true;
            for(int j=3;j<t;j++){
                if (i%j==0){
                    //cout<<i<<" is not prime because "<<i<<"/"<<j<<" is "<<i/j<<endl;
                    isPrime=false;
                    break;
                }
            }
            if (isPrime){
                counter+=1;
                //cout <<"Prime: "<<i<<endl;
            }
        }
    }
    cout <<i<<" is the "<<searchingFor<<"th prime number"<<endl;
    return 0;
}