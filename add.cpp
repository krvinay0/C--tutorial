
    #include <iostream>
    using namespace std;  

    //  Function to convert binary to decimal
    int binaryToDecimal(int n){
        int decimal = 0; 
        int power = 1;
        while(n > 0){
            int remainder = n % 10;
            decimal += remainder * power;
            power *= 2;
            n /= 10;
        }
        return decimal;
    }

    // function to convert decimal to binary
    int decimalToBinary(int n){
        int binary = 0;
        int power = 1;
        while(n > 0){
            int remainder = n % 2;
            binary += remainder * power;
            power *= 10;
            n /= 2;
        }
        return binary;
    } 

    int main(){
        int y = 41;
        cout << "Decimal to Binary: " << decimalToBinary(41) << endl;
        return 0;
    }
