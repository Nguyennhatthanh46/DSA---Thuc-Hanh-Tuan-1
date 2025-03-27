#include <iostream>
#include <string>
using namespace std;


bool KT(const string &s) {
    char Khonghople[] = {'.', '\\', '/', ' ', '\'', ','};
    for (char c : s) {
        for (char x : Khonghople) {
            if (c == x) return true;
        }
    }
    return false; 
}

string Xet(const string &s) {
    if (s.length() < 8 || KT(s)) return "KhongHopLe";

    int baseScore = 40, score = 40;
    int numUpper = 0, numLower = 0, numNumbers = 0, numSymbols = 0;
    char specialChars[] = {'!', '@', '#', '$', '%', '^', '&', '*', '?', '_', '~'};


    for (char c : s) {
        if (isupper(c)) numUpper++;
        else if (islower(c)) numLower++;
        else if (isdigit(c)) numNumbers++;
        else {
            for (char x : specialChars) {
                if (c == x) {
                    numSymbols++;

                }
            }
        }
    }


    score += (s.length() - 8) * 3;
    score += numUpper * 4;
    score += numNumbers * 5;
    score += numSymbols * 5;


    if (numUpper > 0 && numNumbers > 0 && numSymbols > 0) score += 25;
    else if ((numUpper > 0 && numNumbers > 0) || (numUpper > 0 && numSymbols > 0) || (numNumbers > 0 && numSymbols > 0)) score += 15;

    if (numLower > 0 && numUpper == 0 && numNumbers == 0 && numSymbols == 0) score -= 15;
    if (numNumbers > 0 && numUpper == 0 && numLower == 0 && numSymbols == 0) score -= 35;

    if (score < 50) return "Yeu";
    else if (score < 75) return "Vua";
    else if (score < 100) return "Manh";
    return "RatManh";
}

int main() {
    string password;
    cin >> password;
    cout << Xet(password);
    return 0;
}
