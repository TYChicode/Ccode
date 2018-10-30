#include <stdio.h>
#include <string.h>

int main(){
	char n[100];
	int A = 0,E = 0,I = 0,O = 0,U = 0,z = 0;
	scanf ("%s",&n);
	size_t length = strlen (n);
	do {
		switch (n[z]){
		case 'a':
			A++;
			break;
		case 'e':
			E++;
			break;
		case 'i':
			I++;
			break;
		case 'o':
			O++;
			break;
		case 'u':
			U++;
			break;
		case 'A':
			A++;
			break;
		case 'E':
			E++;
			break;
		case 'I':
			I++;
			break;
		case 'O':
			O++;
			break;
		case 'U':
			U++;
			break;
		}
		z++;
	} while (z <= length);
	printf("%d %d %d %d %d",A,E,I,O,U);
}
