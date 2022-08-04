#include <iostream>
#include <string>
#include <stack>

using namespace std;

stack <char> s;

int main(void){
	int n;
	string str;
	cin >> n;
	
	cin.ignore();

	for(int i=0;i<n;i++){
		getline(cin,str);     //공박을 포함한 문자열을 입력을 받음 공백을 표현하는 것은 ' ' 
		str+= ' ';

		for(int j=0;j<str.size();j++){
			if(str[j] == ' ')     // 만약에 string이  공백인 경우에는 밑의 과정을 수행 
			{
				while(!s.empty())      // stack이 빌 때까지 stack을 팝하기 
				{
					cout << s.top();
					s.pop();
				}cout << ' ';
			}                    // 공백이 아닌경우에는 계속해서 stack에 원소를 집어넣기 
			else
				s.push(str[j]);
		}cout << '\n';             // 한바퀴 끝났으면은 줄바꿈문자를 사용
	}
}
		
		



