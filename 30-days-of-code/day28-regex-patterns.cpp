#include <iostream>
#include <set>
#include <regex>
using namespace std;

/*
Consider a database table, Emails, which has the attributes First Name and Email ID. Given N rows of data simulating the Emails table, print an alphabetically-ordered list of people whose email address ends in @gmail.com.

Sample Input
6
riya riya@gmail.com
julia julia@julia.me
julia sjulia@gmail.com
julia julia@gmail.com
samantha samantha@gmail.com
tanya tanya@gmail.com

Sample Output
julia
julia
riya
samantha
tanya
*/

int main() {
    int n;
    cin >> n;
    multiset<string> s;
    string name, email;
    regex rname("[a-z]{1,20}");
    regex remail(".+@gmail\\.com");
    for (int i=0;i<n;i++)
    {
    	cin >> name >> email;
    	if (regex_match(name, rname) && regex_match(email, remail) && email.size()<=50){
    		s.insert(name);
    	}
    }
    for (auto e:s)
    	cout << e << endl;
    return 0;
}
