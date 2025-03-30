#include <stdio.h>
#include <string>
#include <cctype>

using namespace std;

// Token 類型 
enum TokenType {
    NUMBER,   // 數字
    IDENT,    // 識別符(變數)
    KEYWORD,  // 關鍵字 (EX. int, float)
    PLUS,     // +
    MINUS,    // -
    STAR,     // *
    ASSIGN,   // =
    SLASH,    // /
    LPAREN,   // (
    RPAREN,   // )
    END,      // 字串結束
    ERROR     // 錯誤
};

// Token 結構
struct Token {
    TokenType type;
    string value;
};

// 詞法分析器
class Lexer {
private:
    string input;
    size_t pos; // 當前位置

public:
    Lexer(const string& src) : input(src), pos(0) {}

    char peek() {
        if (pos < input.size()) {
            return input[pos];
        }
        return '\0';
    }

    char advance() {
        char currentChar = '\0';
        if (pos < input.size()) {
            currentChar = input[pos];
            pos++;
        }
        return currentChar;
    }

    Token getNextToken() {
    	// 跳過空格
        while (isspace(peek())) {
            advance(); 
        }
		
		// 數字
        if (isdigit(peek())) { 
            string num;
            while (isdigit(peek())) {
                num += advance();
            }
            return Token{NUMBER, num};
        }
		
		// 標識符或關鍵字
        if (isalpha(peek())) { 
            string ident;
            while (isalnum(peek())) {
                ident += advance();
            }
            return Token{IDENT, ident};
        }

        char ch = advance();
        switch (ch) {
            case '+': return Token{PLUS,   string(1, ch)};
            case '-': return Token{MINUS,  string(1, ch)};
            case '*': return Token{STAR,   string(1, ch)};
            case '/': return Token{SLASH,  string(1, ch)};
            case '=': return Token{ASSIGN, string(1, ch)};
            case '(': return Token{LPAREN, string(1, ch)};
            case ')': return Token{RPAREN, string(1, ch)};
            case '\0': return Token{END, ""};
            default: return Token{ERROR, string(1, ch)};
        }
    }
};

int main() {
    string c = "int a = 5 + 3;";
    Lexer lexer(c);

    Token token = lexer.getNextToken();
    while (token.type != END) {
        printf("Token: %d, Value: %s\n", token.type, token.value.c_str());
        token = lexer.getNextToken();
    }

    return 0;
}
