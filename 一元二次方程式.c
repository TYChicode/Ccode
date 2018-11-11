// 請完成一個名為slove的副程式
#include <math.h>
#include <stdio.h> 
int main(){
  float a,b,c,num,ans1,ans2;
  scanf ("%f%f%f",&a,&b,&c);
  num = b*b-4*a*c;
  if (num < 0) printf ("No real root");
  else if (num == 0) {
      ans1 = b/(-2);
      if (ans1 < 1 && ans1 > -1) ans1 = 0;
    printf ("Two same roots x=%.f",ans1);
  }
  else {
    ans1 = ((-b)+sqrt(num))/(2*a);
    ans2 = ((-b)-sqrt(num))/(2*a);
    if (ans1 >ans2) printf ("Two different roots x1=%.f , x2=%.f",ans1,ans2);
    else printf ("Two different roots x1=%.f , x2=%.f",ans1,ans2);
  }
  return 0;
}
