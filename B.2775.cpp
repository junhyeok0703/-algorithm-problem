#include <iostream>
#include <vector>



using namespace std;
int main(void){
    int a,b;
    cin >> a >> b;
    vector<int>v(b);
    for(int i =0 ;i<b;i++){
        a=0;
        for(int j=a;a<=j;j++){
            
            v[i]=j;
            cout << v[i] << endl;
        }
    }
    
}