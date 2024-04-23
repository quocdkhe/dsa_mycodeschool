#include<iostream>
#include<stack>
#include<unordered_map>
#include<cstring>
using namespace std;

bool isValid(char* s){
	unordered_map<char, char> match;
	stack<char> S;
	match['}'] = '{';
	match[')'] = '(';
	match[']'] = '[';
	for(int i = 0; i < strlen(s); i++){
		if(s[i] == '}' || s[i] == ']' || s[i] == ')'){
			if(match[s[i]] == S.top()){
				S.pop();
			}else{
				return false;
			}
		}else if(s[i] == '{' || s[i] == '[' || s[i] == '('){
			S.push(s[i]);
		}else{
			return false;
		}
	}
	return S.empty() ? true : false;
}

int main(){
	char input[100];
	printf("Enter expression: \n");
	scanf("%s", input);
	isValid(input) ? printf("true") : printf("false");
	return 0;
}
