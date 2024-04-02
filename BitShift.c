#include <stdio.h>

//left shift function
unsigned int leftShift(unsigned int num, int shiftAmount) {
    return num << shiftAmount;
}

//right shift function
unsigned int rightShift(unsigned int num, int shiftAmount) {
    return num >> shiftAmount;
}

int main() {
    unsigned int hexInput;
    int shiftAmount;
    char direction;

    //enter hex number
//    printf("Enter hexadecimal value: ");
    scanf("%x", &hexInput);

    //input for user to choose left or right shift
//    printf("Enter L or R: ");
    scanf(" %c", &direction);

    //input for shift amount
//    printf("Enter shift number: ");
    scanf("%d", &shiftAmount);
    //perform shift operation
    switch(direction) {
        case 'l':
        case 'L':
            printf("left shift by %d bits: 0x%x\n", shiftAmount, leftShift(hexInput, shiftAmount));
            break;
        case 'r':
        case 'R':
            printf("right shift by %d bits: 0x%x\n", shiftAmount, rightShift(hexInput, shiftAmount));
            break;
        default:
            printf("invalid input\n");
            return 1;
    }
    return 0;
}
