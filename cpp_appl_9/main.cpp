#include <iostream>
#include<Windows.h>

int main() {
    system("chcp 1251");
    system("cls");
    const int arraySize = 5;  
    int sourceArray[arraySize] = { 10, 20, 30, 40, 50 };  
    int destinationArray[arraySize];  

    int* srcPtr = sourceArray;          
    int* destPtr = destinationArray + arraySize - 1;  

    
    for (int i = 0; i < arraySize; i++) {
        *destPtr = *srcPtr;  
        destPtr--;           
        srcPtr++;           
    }

    
    std::cout << "Масив призначення після копіювання в зворотному порядку:" << std::endl;
    for (int i = 0; i < arraySize; i++) {
        std::cout << destinationArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
