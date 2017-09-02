#include "PasswordFileReader.h"

std::vector <std::string> getPasswords(std::string filename)
{
    std::string line;
    std::fstream file;
    std::vector <std::string> passwords;
    
    file.open(filename.c_str());
    
    if(file.is_open()){
        std::cout << "File open correctly" << std::endl;
        while(getline(file,line)){
            passwords.push_back(line);
        }
        
    } else {
        std::cout << "File did not open correctly" << std::endl;
    }
    
    return passwords;
}