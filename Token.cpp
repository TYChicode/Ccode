#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream.h>

using namespace std;

//Token 類型 
enum class TokenType {
	NUMBER, //數字
	IDENT, //識別符(變數)
	KEYWORD, //關鍵字(EX. int, float)
	PLUS, // +
	MINUS, // -
	STAR, // *
	ASSIGN, // =
	SLASH, // /
	LPAREN, // (
	RPAREN, // )
	END, //輸入結束
	ERROR, //錯誤 
};

//Token 結構 
struct Token{
	TokenType type;
	string valus;
};

//詞法分析器
class Lexer {
	private:
		string input;
		
	public:
		
}; 

int main(){
	
	return 0;
}
