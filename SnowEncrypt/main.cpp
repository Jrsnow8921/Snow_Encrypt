#include <iostream>
#include <istream>
#include <string>
#include <sstream>
#include <fstream>
#include <iterator>
#include "s_encrypt.h"
#include "encrypt_copy.h"


using namespace std;




int main(int argc, char *argv[])
{
	string password = "";

	cout << "Please enter a password to be encrypted\n";
	getline(cin, password);
	
	cout << "MD5 Encryption of " << password << " " << "is this" << " " << md5(password);
	
	cout << "Saving MD5 generated password to text file";

	string p = md5(password);

	CopyEncryptedPw(p);

	return 0;
	
}
