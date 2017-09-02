/*
 * Date: 21.08.2017
 * Dev: DevMP
 * 
 * This file joins all the functionalitty for the sofware program
 * 
 */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "PasswordFileReader.h"


int main(int arg, char *argv[])
{
    std::string File = "wordList1.txt";
    std::string File2 = "wordList2.txt";
    std::vector <std::string> passwordPart1 = getPasswords(File);
    std::vector <std::string> passwordPart2  = getPasswords(File2);
    std::vector <std::string> mixedPasswords;
    
    //TODO: Get the options from the console
        
    
   //TODO: Generate passwords
    for(int x=0;x<(int)passwordPart1.size();x++){
        for(int y=0;y<(int)passwordPart2.size();y++){
            mixedPasswords.push_back((passwordPart1[x]+passwordPart2[y]));
        }        
    }  
   
   for(int x=0;x<(int)mixedPasswords.size();x++){
        std::cout << mixedPasswords[x] << std::endl;
    }  
   
   //TODO: Save passwords
    return 0;
}
