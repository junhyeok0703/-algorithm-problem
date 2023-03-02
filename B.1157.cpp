#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(void)
{

    int num, sum;
    double b=0,num1=0;
    cout << "테스트 케이스의 개수" << endl;
    cin >> num;
    vector<double> v1(num);
    for (int i = 0; i < num; i++)
    {
        b=0;
        cin >> num1;
        vector<int> v(num1);
        sum = 0;
        for (int j = 0; j < num1; j++)
        {
            cin >> v[j];
            sum += v[j];
         
        }
        sum /= num1;
        for (int p = 0; p < num1; p++)
        {
            if(v[p]>sum){
                b++;
            }
        }
        v1[i] = b*100/num1;

    }
        for(int i = 0 ; i<num;i++){
            cout<< fixed << setprecision(3) << v1[i];
            cout<< "%" << endl;
        }
}