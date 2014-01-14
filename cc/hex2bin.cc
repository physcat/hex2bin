/* hex2bin
 * Takes a ascii hexadecimal string
 * returns a ascii binary string
 */
#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

string hex2bin(const string& hex)
{
	string bin;
	std::string::const_iterator itr = hex.begin();

	while(itr != hex.end()) {
		switch(*itr) {
		case '0':
			bin+="0000";
			break;
		case '1':
			bin+="0001";
			break;
		case '2':
			bin+="0010";
			break;
		case '3':
			bin+="0011";
			break;
		case '4':
			bin+="0100";
			break;
		case '5':
			bin+="0101";
			break;
		case '6':
			bin+="0110";
			break;
		case '7':
			bin+="0111";
			break;
		case '8':
			bin+="1000";
			break;
		case '9':
			bin+="1001";
			break;
		case 'A': case 'a':
			bin+="1010";
			break;
		case 'B': case 'b':
			bin+="1011";
			break;
		case 'C': case 'c':
			bin+="1100";
			break;
		case 'D': case 'd':
			bin+="1101";
			break;
		case 'E': case 'e':
			bin+="1110";
			break;
		case 'F': case 'f':
			bin+="1111";
			break;
		default:
			throw domain_error("Input does not look like hex");	
		}
		++itr;
	}

	return bin;
}


int main()
{
	string input;
	getline(cin, input);
	string ans;
	try {
		ans = hex2bin(input);
	} catch (domain_error error) {
		cout << error.what();
	}
	cout << ans << endl;
	return 0;
}
