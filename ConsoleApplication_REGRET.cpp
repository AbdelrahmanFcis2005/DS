// ConsoleApplication_REGRET.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <iostream>
//#include <stack>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <unordered_map>
//#include <unordered_set>
//#include <queue>
//#include <set>
//#include <map>
//#include <list>
//#include <deque>
//#include <bitset>
//#include <cmath>
//using namespace std;
////bool isOperator(char c) {
////	return c == '+' || c == '-' || c == '*' || c == '/';
////}
//
////string getInfix(string postfix) {
////	stack<string> st;
////
////	for (char c : postfix) {
////		if (!isOperator(c)) {
////			// Operand: push to stack
////			st.push(string(1, c));
////		}
////		else {
////			// Operator: pop two operands and combine
////			string op2 = st.top(); st.pop();
////			string op1 = st.top(); st.pop();
////			string expr = "(" + op1 + c + op2 + ")";
////			st.push(expr);
////		}
////	}
////
////	return st.top(); // final expression
////}
//
//string no_dublicate(string S) {
//	stack<char> s;
//	string result;
//	for (char c : S) {
//		if(!s.empty() && s.top()==c)
//			s.pop();
//		else {
//				s.push(c);
//			}
//		}
//		while (!s.empty()) {
//			result+= s.top();
//			s.pop();
//		}
//	return result;
//}
//
//int main()
//{
//	string s = "axzzxy";
//	string nd = no_dublicate(s);
//	cout << "Converted expression: " << nd <<endl;
//	return 0;
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
#include <iostream>
#include <cstdlib>

int main() {
	std::cout << "Hello World!OK\n";
    std::string subject = "Test Subject";
    std::string body = "This is a test email from C++!";
    std::string to = "your_email@example.com";
    std::string from = "your_email@example.com";
    std::string smtp = "smtp.yourprovider.com"; //  smtp.gmail.com
    std::string username = "your_email@example.com";
    std::string password = "your_password"; // app password Gmail

    std::string command = "powershell -Command \"Send-MailMessage -To '" + to +
        "' -From '" + from +
        "' -Subject '" + subject +
        "' -Body '" + body +
        "' -SmtpServer '" + smtp +
        "' -Credential (New-Object System.Management.Automation.PSCredential('" + username +
        "', (ConvertTo-SecureString '" + password + "' -AsPlainText -Force))) -UseSsl\"";

    system(command.c_str());

    return 0;
}
