#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream.h>

using namespace std;

//Token ���� 
enum class TokenType {
	NUMBER, //�Ʀr
	IDENT, //�ѧO��(�ܼ�)
	KEYWORD, //����r(EX. int, float)
	PLUS, // +
	MINUS, // -
	STAR, // *
	ASSIGN, // =
	SLASH, // /
	LPAREN, // (
	RPAREN, // )
	END, //��J����
	ERROR, //���~ 
};

//Token ���c 
struct Token{
	TokenType type;
	string valus;
};

//���k���R��
class Lexer {
	private:
		string input;
		
	public:
		
}; 

int main(){
	
	return 0;
}
