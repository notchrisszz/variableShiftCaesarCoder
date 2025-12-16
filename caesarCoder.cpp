#include <iostream>
#include <string>
#include <vector>
#include <sstream>

std::vector<std::string> rawToPhrase(const std::string& a);
std::string coder(const std::vector<std::string>&  a,const std::vector<std::string>&  b, int i);

int main(){
    std::string rawText, code;
    std::vector<std::string> codedText;


    std::cout << "Please insert the phrase you want to code.(Do not use special characters)\n";
    std::getline(std::cin,rawText);

    std::cout << "Please insert the code with the word gaps\n";
    std::getline(std::cin,code);

    auto phrase = rawToPhrase(rawText);
    auto code1 = rawToPhrase(code);
    
    for(int i = 0; i < phrase.size(); i++){
        auto stringAux = coder(phrase,code1,i);
        codedText.push_back(stringAux);
    }

    
    for(const std::string& words : codedText){
        std::cout << words << ' ' ;
    }

    return 0;
    
}

std::string coder(const std::vector<std::string>&  a,const std::vector<std::string>&  b, int i){
   std::string ret;
    
   for(int j = 0; j < a[i].size(); j++){
    char c = a[i][j];
    int shift = b[i][j% b[i].size()]-'0';

    char coded = ( c - 'a' + shift) % 26 + 'a';

    ret.push_back(coded);
   }
   return ret;
}

std::vector<std::string> rawToPhrase(const std::string& a){
    std::stringstream ss(a);
    std::vector<std::string> ret;   
    std::string st; 
    while(ss >> st){
        ret.push_back(st);
    }
    return ret;
}