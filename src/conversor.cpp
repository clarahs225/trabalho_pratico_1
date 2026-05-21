#include "conversor.h"
#include <iostream>

using namespace std;


//F1
string decimalParaBinario(int numero){
    if(numero == 0) return "0";
    string resultado = "";

    while(numero > 0){
        resultado = char('0' + (numero % 2)) + resultado;
        numero /= 2;
    }

    return resultado;
}

string decimalParaOctal(int numero){
    if(numero == 0) return "0";
    string resultado = "";

    while(numero > 0){
        resultado = char('0' + (numero % 8)) + resultado;
        numero /= 8;
    }

    return resultado;
}

string decimalParaHex(int numero){
    if(numero == 0) return "0";
    string resultado = "";

    while(numero > 0){
        int resto = numero % 16;

        char digito;
        if(resto < 10) digito = '0' + resto;
        else digito = 'A' + (resto - 10);

        resultado = digito + resultado;
        numero /= 16;
    }

    return resultado;
}



//F2

int binarioParaDecimal(string numero){
    int resultado = 0;
    for(char c : numero){
        resultado = resultado * 2 + (c - '0');
    }

    return resultado;
}

int octalParaDecimal(string numero){
    int resultado = 0;

    for(char c : numero){
        resultado = resultado * 8 + (c - '0');
    }

    return resultado;
}

int hexParaDecimal(string numero){
    int resultado = 0;
    for(char c : numero){
        int valor;

        if(c >= '0' && c <= '9') valor = c - '0';
        else valor = c - 'A' + 10;

        resultado = resultado * 16 + valor;
    }

    return resultado;
}




//F3
string binarioParaOctal(string binario1){
    while(binario1.size() % 3 != 0){
        binario1 = "0" + binario1;
    }

    string resultado = "";

    for(int i = 0; i < binario1.size(); i += 3){
        string bloco = binario1.substr(i, 3);

        if(bloco == "000") resultado += "0";
        else if(bloco == "001") resultado += "1";
        else if(bloco == "010") resultado += "2";
        else if(bloco == "011") resultado += "3";
        else if(bloco == "100") resultado += "4";
        else if(bloco == "101") resultado += "5";
        else if(bloco == "110") resultado += "6";
        else if(bloco == "111") resultado += "7";
    }

    return resultado;
}

string binarioParaHex(string bin){
    while(bin.size() % 4 != 0){
        bin = "0" + bin;
    }

    string resultado = "";

    for(int i = 0; i < bin.size(); i += 4){
        string bloco = bin.substr(i, 4);

        if(bloco == "0000") resultado += "0";
        else if(bloco == "0001") resultado += "1";
        else if(bloco == "0010") resultado += "2";
        else if(bloco == "0011") resultado += "3";
        else if(bloco == "0100") resultado += "4";
        else if(bloco == "0101") resultado += "5";
        else if(bloco == "0110") resultado += "6";
        else if(bloco == "0111") resultado += "7";
        else if(bloco == "1000") resultado += "8";
        else if(bloco == "1001") resultado += "9";
        else if(bloco == "1010") resultado += "A";
        else if(bloco == "1011") resultado += "B";
        else if(bloco == "1100") resultado += "C";
        else if(bloco == "1101") resultado += "D";
        else if(bloco == "1110") resultado += "E";
        else if(bloco == "1111") resultado += "F";
    }

    return resultado;
}