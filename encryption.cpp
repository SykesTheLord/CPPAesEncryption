//
// Created by Jacob on 10/27/2024.
//

#include "encryption.h"
#include <bits/stdc++.h>
class Encryption {
    public:

        // Encrypt a message input via terminal.
        std::string Encrypter() {
            std::string code;
            std::string plainText;
            std::cout << "What would you like to encrypt? " << std::endl;
            std::getline(std::cin, plainText);
            int size = plainText.length();
            int arrayNum = size / 16;
            // Array containing arrays of 16 bytes
            char array[arrayNum][4][4];
            for (int i = 0; i < arrayNum; i++) {
                std::string working = plainText.substr(i * 16, 16);
                char arr[16];
                strcpy(arr, working.c_str());
                for (int j = 0; j < 4; j++) {
                    array[i][j][0] = arr[j * 4];
                    array[i][j][1] = arr[j * 4 + 1];
                    array[i][j][2] = arr[j * 4 + 2];
                    array[i][j][3] = arr[j * 4 + 3];
                }
            }
            std::cout << array << std::endl;
            std::cout << "What is the keyword for this encryption? " << std::endl;
            std::getline(std::cin, code);
            return code;
        }
        // Decrypt a message input via terminal.
        std::string Decrypter() {
            std::string cipherText;
            std::string code;
            std::cout << "What would you like to decrypt? " << std::endl;
            std::getline(std::cin, cipherText);
            std::cout << "What is the keyword for this encryption? " << std::endl;
            std::getline(std::cin, code);
            return code;
        }

    char round(char array) {}
};