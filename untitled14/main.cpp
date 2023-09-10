#include <iostream>
#include <string>
#include <map>

int main() {
    std::string surnmw;
    std::map <std::string, int> reg;
    int i=0;
    while (surnmw!="1") {
        std::cin>>surnmw;
        if (surnmw!="Next") {
            std::pair<std::string, int> regPair(surnmw,i);
            reg.insert(regPair);
        } else {
            std::map<std::string, int>::iterator it = reg.begin();
            std::cout<<it->first<<std::endl;
            reg.erase(it->first);
        }
    }
}
