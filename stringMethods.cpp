#include <iostream>
#include <string>

int main() {
    
        std::string str = "Hello, World!";
        std::cout << str << std::endl;
    
        std::cout << "Length: " << str.length() << std::endl;
        std::cout << "Size: " << str.size() << std::endl;
    
        std::cout << "First character: " << str[0] << std::endl;
        std::cout << "Last character: " << str[str.length() - 1] << std::endl;
    
        std::cout << "Substring: " << str.substr(7, 5) << std::endl;
        std::cout << "Substring: " << str.substr(7) << std::endl;

        std::cout << "Find: " << str.find("World") << std::endl;
        std::cout << "Find: " << str.find("world") << std::endl;

        std::cout << "Replace: " << str.replace(7, 5, "Universe") << std::endl;
        
        std::cout << "Erase: " << str.erase(7, 8) << std::endl;
        std::cout << "Insert: " << str.insert(7, "World") << std::endl;
        std::cout << "Append: " << str.append("!!!") << std::endl;
        std::cout << "Compare: " << str.compare("Hello, World!!!") << std::endl;
        
        std::cout << "Empty: " << str.empty() << std::endl;

        std::cout << "Clear: ";
        str.clear();
    
        return 0;
}