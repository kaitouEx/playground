/*Structured Programming
3の倍数または3を含む数を出力
*/

#include<iostream>
using namespace std;

bool has3(int x){
  while(x){
    if(x % 10 == 3)return 0;
    x /= 10;
  }
  return false;
}

void call(int n){
  for(int x = 1; x <= n; x++){
    if(x % 3 == 0 || has3(x)){
      cout << " " << x;
    }
  }
  cout << endl;
}

int main(){
  int n;
  cin >> n;
  call (n);

  return 0;
}
