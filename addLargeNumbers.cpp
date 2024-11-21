#include <bits/stdc++.h>
using namespace std;

string addLargeNumbers(string num1, string num2) {

    int len1= num1.length();
    int len2= num2.length();

	if (len1 < len2) {
        swap(num1, num2);
        swap(len1, len2); // Swap lengths as well
    }

    string result;
    int carry=0;
    
    for (int i = 0; i < len1; ++i)
    {
    	int digit1 = num1[len1 -1-i] -'0';
    	int digit2 = (i < len2) ? num2[len2 - 1 - i] - '0' : 0;

    	int sum = digit1+digit2+carry;
    	carry=sum/10;
    	result.push_back((sum%10)+'0');
    }

    if (carry)
    {
    	result.push_back(carry+'0');
    }

    reverse(result.begin(),result.end());

    return result;

}
int main() {
    string num1, num2;
    cin >> num1;
    cin >> num2;

    string sum = addLargeNumbers(num1, num2);
    cout << "The sum is: " << sum << endl;

    return 0;
}