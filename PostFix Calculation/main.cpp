#include<iostream>
#include<stack>
using namespace std;
int evaluatePostfix(string expr) {
 stack<int> s;
 for (int i = 0; i < expr.length(); i++) {
 char ch = expr[i];
 if (isdigit(ch)) {
 s.push(ch - '0');
 } else {
 int b = s.top(); s.pop();
 int a = s.top(); s.pop();
 if (ch == '+') s.push(a + b);
 else if (ch == '-') s.push(a - b);
 else if (ch == '*') s.push(a * b);
 else if (ch == '/') s.push(a / b);
 }
 }
 return s.top();
}
int main() {
 string expr = "35+62/*";
 cout << "Result: " << evaluatePostfix(expr);
}
