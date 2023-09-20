#include <iostream>
#include <string>
#include <map>

int main() {
    std::string surnme;
    std::map<std::string, int> reg;
    int i = 0;
    while (surnme != "1") {
        std::cin >> surnme;
        if (surnme != "Next") {
            std::map<std::string, int>::iterator itf = reg.find(surnme);
            if (itf->first == surnme) {
                itf->second += 1;
                std::cout << itf->second << std::endl;
            }
            std::pair<std::string, int> regPair(surnme, i);
            reg.insert(regPair);
        } else {
            std::map<std::string, int>::iterator it = reg.begin();
            std::cout << it->first << std::endl;
            if (it->second == 0) {
                reg.erase(it->first);
            } else {
                it->second -= 1;
                std::cout << it->second << std::endl;
            }
        }
    }
}
