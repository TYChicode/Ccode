#include<stdio.h>
//將輸入之秒數轉成「 天：小時：分：秒」

int main(){
	int sec,day,hour,minute,second;
	scanf("%d",&sec);
	second = sec%60;
	minute = sec/60%60;
	hour = sec/3600%24;
	day = sec/86400;
	printf("天：小時：分：秒\n%d：%d：%d：%d",day,hour,minute,second);
	return 0;
} 

//2018/9/30 finish
