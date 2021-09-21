

int decimalToBinary (int dec) {
   return (((dec / 10) << 4) | (dec % 10));
}


int binaryToDecimal (int bcd) {
   return (((bcd>>4)*10) + (bcd & 0xF))
}



//Example of use

void main (void) {

    SystemInit();

    int var_decimal = 50;

    int var_binary = 0b01001001;

    printf(decimalToBinary(var_decimal));
    printf(binaryToDecimal(var_binary));    

    while (true) {
        /* code */
    }     
    
}