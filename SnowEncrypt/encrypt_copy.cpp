

#include <istream>
#include <iostream>
#include <fstream>
#include <string>
#include "encrypt_copy.h"

using namespace std;

int CopyEncryptedPw(std::string pass)
{
	fstream outfile;
	outfile.open("encrypted_pass.txt", ios::out);
	outfile << pass;
	return 0;
}



