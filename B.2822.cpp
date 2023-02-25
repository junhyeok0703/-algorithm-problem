#include <vector>
#include <iostream>

using namespace std;
int main(void){

  vector<int> v;
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  cout << "벡터의 크기 : " << v.size() << endl;
  cout << "첫 번째의 원소: " << v[0] << endl;
  cout << "두 번째의 원소: " << v[1] << endl;
  cout << "세 번째의 원소:"  << v[2] << endl;
  }