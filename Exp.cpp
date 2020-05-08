#include <iostream>
#include <string>

int main()
{

    std::string s;
    std::cout << "Please enter your expression "<< std::endl;
    std::getline(std::cin, s);
    char space = ' ';
    char plus = '+';
    // 5 + 6

    int first = 0;
    int second = 0;
    bool isAdd = false;

    for (int i = 0; i < s.length(); i++) {
    
        // sign check
        if (s[i] == space) {
            if (i + 1 < s.length() && s[i+1] == plus) {
                if (i + 2 < s.length() && s[i + 2] == space) {
                    isAdd = true;
                }
            }
        }
        //
        if (s[i] != space && s[i] != plus && first == 0) {
            first = s[i] - '0';
            continue;
        }

        if (s[i] != space && s[i] != plus && second == 0) {
            second = s[i] - '0';
            continue;
        } 
    }

    if (isAdd) {
        std::cout << "Result is : " << first + second << std::endl;
    }

    std::getchar();
    //std::cout << s << std::endl;
   /* for (int i = 0; i < s.length; i++) {
        char c = s[i];
    }*/

}
