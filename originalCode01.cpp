#include <iostream>
#include <string>

using namespace std;

string encrypt1(const string &input) {
    string encrypted = input;
    for (char &c : encrypted) {
        c += c; 
        c -= 69;
    }
    return encrypted + "_Encrypted"; 
}

string encrypt2(const string &input) {
    string encrypted = input;
    for (int i = encrypted.length() - 1; i >= 0; --i) {
        encrypted[i] += 3;
        encrypted[i] += 2;
        encrypted[i] += 23;
        encrypted[i] += 1;
        encrypted[i] += -12;
        encrypted[i] += -9;
        encrypted[i] += 1;
        encrypted[i] += -8;
        encrypted[i] += -5;
        encrypted[i] += 6;
    }
    return encrypted; 
}

int main() {
    string secret = "P@ssw0rd!R3v3rse"; 
    string encryptedSecret = encrypt1(secret);
    string ultraEncryptedSecret = encrypt1(encrypt2(encryptedSecret)); 
    for (size_t i = 0; i < ultraEncryptedSecret.length(); i++) {
        cout << static_cast<int>(ultraEncryptedSecret[i]);
        if (i < ultraEncryptedSecret.length() - 1) 
            cout << ","; 
    }
    return 0;
}
