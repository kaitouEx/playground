#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main (){
  int a, b, C;
  double S, L, h, d;
  cin >> a >> b >> C;

  d = (acous(-1.0)*C)/180.0;//ラジアンで表したい
  S = a*b*sin(d)/2.0;
  L = a+b+sqrt(a*a + b*b - 2*a*b*cons(d));
  h = b*sin(d);

  printf("%lf\n%lf\n%lf\n", S, L, h);

  return 0;
}
