# include <iostream>
using namespace std;
int main(){
    int count=0;
    for(int i=0;i<3;i++){
        for(int j=1;j<=3;j++){
            count++;
            cout<<count<<" ";
        }
        cout<<endl;
    }
}