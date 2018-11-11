#include <stdio.h>

//身分證驗證 

int main(){
	char letter;
	int num[11];
	int cases,k,n,i,j,z,ans;
	scanf ("%d%*c",&cases);				//輸入(cases)筆測資 
	for (k = 1;k <= cases;k++){	
		scanf ("%c%d%*c",&letter,&n);	//輸入身分證 
		switch (letter){				//判斷英文字代表多少數字 
			case 'A': i = 10; break;
			case 'B': i = 11; break;
			case 'C': i = 12; break;
			case 'D': i = 13; break;
			case 'E': i = 14; break;
			case 'F': i = 15; break;
			case 'G': i = 16; break;
			case 'H': i = 17; break;
			case 'I': i = 34; break;
			case 'J': i = 18; break;
			case 'K': i = 19; break;
			case 'L': i = 20; break;
			case 'M': i = 21; break;
			case 'N': i = 22; break;
			case 'O': i = 35; break;
			case 'P': i = 23; break;
			case 'Q': i = 24; break;
			case 'R': i = 25; break;
			case 'S': i = 26; break;
			case 'T': i = 27; break;
			case 'U': i = 28; break;
			case 'V': i = 29; break;
			case 'W': i = 32; break;
			case 'X': i = 30; break;
			case 'Y': i = 31; break;
			case 'Z': i = 33; break;
		}
		num[0] = i / 10;				//把英文字的10位數字存到陣列 num[0]的位置 
		num[1] = i % 10;				//把個位數字存到陣列 num[1]的位置 
		for (j = 10;j >= 2;j--){		//把數字部分存入陣列 
			num[j] = n % 10;
			n /= 10;
		}
		ans = num[0] + num[10];			//因為都乘以1所以先相加 
		for (z = 1;z <= 9;z++){			//照身分證的規則相加 
			ans += num[z] * (10 - z);
		}
		if (ans % 10 == 0) {			//能被10整除的話代表有此身分證 
			printf ("real");
		}
		else printf ("fake");
		if (k != cases) printf ("\n");
	}
	return 0;
}

//2018/11/10 finish
