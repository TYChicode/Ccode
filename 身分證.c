#include <stdio.h>

//���������� 

int main(){
	char letter;
	int num[11];
	int cases,k,n,i,j,z,ans;
	scanf ("%d%*c",&cases);				//��J(cases)������ 
	for (k = 1;k <= cases;k++){	
		scanf ("%c%d%*c",&letter,&n);	//��J������ 
		switch (letter){				//�P�_�^��r�N��h�ּƦr 
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
		num[0] = i / 10;				//��^��r��10��Ʀr�s��}�C num[0]����m 
		num[1] = i % 10;				//��Ӧ�Ʀr�s��}�C num[1]����m 
		for (j = 10;j >= 2;j--){		//��Ʀr�����s�J�}�C 
			num[j] = n % 10;
			n /= 10;
		}
		ans = num[0] + num[10];			//�]�������H1�ҥH���ۥ[ 
		for (z = 1;z <= 9;z++){			//�Ө����Ҫ��W�h�ۥ[ 
			ans += num[z] * (10 - z);
		}
		if (ans % 10 == 0) {			//��Q10�㰣���ܥN���������� 
			printf ("real");
		}
		else printf ("fake");
		if (k != cases) printf ("\n");
	}
	return 0;
}

//2018/11/10 finish
