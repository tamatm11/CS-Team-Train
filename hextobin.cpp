#include <iostream>
#include <math.h>
#include <string>
#include <bitset>

using namespace std;

//hex to bin
string HexToBin(string input){
    unsigned int x = stoul(input, nullptr, 16); //stoul gives the decimal number, very important!
    string result = bitset<16>(x).to_string(); //bitset to get the binary from the string of given number
    return result;
}

int main(){
    string str = "1A6";
    string result = HexToBin(str);
    cout << "Hex to Bin conversion: " << result << endl;
    return 0;
}
