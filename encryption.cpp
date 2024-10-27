//
// Created by Jacob on 10/27/2024.
//

#include "encryption.h"
#include "STRUCTURES_H.h"
#include <bits/stdc++.h>

class Encryption {
    public:

        // Encrypt a message input via terminal.
        static std::string encrypt() {
            std::string code;
            std::string plainText;
            std::cout << "What would you like to encrypt? " << std::endl;
            std::getline(std::cin, plainText);
            char (*array)[4][4] = formatToArray(plainText);
            std::cout << array << std::endl;
            std::cout << "What is the keyword for this encryption? " << std::endl;
            std::getline(std::cin, code);
            char keyword[code.length()];
            for (int i = 0; i < code.length(); i++) {
                keyword[i] = code[i];
            }
            delete[] array;
            return code;
        }
        // Decrypt a message input via terminal.
        static std::string decrypt() {
            std::string cipherText;
            std::string code;
            std::cout << "What would you like to decrypt? " << std::endl;
            std::getline(std::cin, cipherText);
            std::cout << "What is the keyword for this encryption? " << std::endl;
            std::getline(std::cin, code);
            return code;
        }

    static char round(char array) {
            char toModify = array;
            char result;
            return result;
        }

    // Prepares input into lines of 4 chars for handling.
    static char (*formatToArray(std::string input))[4][4] {
        long size = input.length();
        std::cout << size << std::endl;
        long arrayNum = size / 16;
        // Ensure the array runs at least once.
        if (size % 16 != 0) {
            arrayNum++;
            // Append the plaintext to ensure it is divisible with 16
            for (int i = 0; i < 16 - size % 16; i++) {
                input.append("1");
            }
        }
        std::cout << arrayNum << std::endl;
        // Array containing arrays of 16 bytes
        char (*array)[4][4] = new char[arrayNum][4][4];
        for (int i = 0; i < arrayNum; i++) {
            std::string working = input.substr(i * 16, 16);
            std::cout << working << std::endl;
            char arr[16];
            strcpy(arr, working.c_str());
            // Insert each line with the array
            for (int j = 0; j < 4; j++) {
                array[i][j][0] = arr[j * 4];
                std::cout << array[i][j][0] << std::endl;
                array[i][j][1] = arr[j * 4 + 1];
                std::cout << array[i][j][1] << std::endl;
                array[i][j][2] = arr[j * 4 + 2];
                std::cout << array[i][j][2] << std::endl;
                array[i][j][3] = arr[j * 4 + 3];
                std::cout << array[i][j][3] << std::endl;
            }
        }
        return array;
        }


};