#include <iostream>
#include <vector>
#include <string>


int main() {
    std::string s1;
    std::string s2;

    std::cin >> s1 >> s2;

    std::string minWord;
    std::string maxWord;
    // 1) - определяем, какое слово длиннее, а какое короче
    if (s1.length() == s2.length()) {
        maxWord = s1;
        minWord = s2;
    } else {
        if (s1.length() > s2.length()) {
            maxWord = s1;
            minWord = s2;
        } else {
            maxWord = s2;
            minWord = s1;
        }
    }
    if (maxWord == minWord) {
        std::cout << 0;
        return 0;
    }
    // 2) начинаем "откусывать" буквы
    for (int i = 0; i < maxWord.length(); i++) {
        int k = 0;
        // метод среза слова?
        while (maxWord.)
    }
}
