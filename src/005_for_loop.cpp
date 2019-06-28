#include <iostream>
using namespace std;

void printNumber(int input) {
    if (input == 1) {
        printf("one");
    }
    else if (input == 2) {
        printf("two");
    }
    else if (input == 3) {
        printf("three");
    }
    else if (input == 4) {
        printf("four");
    }
    else if (input == 5) {
        printf("five");
    }
    else if (input == 6) {
        printf("six");
    }
    else if (input == 7) {
        printf("seven");
    }
    else if (input == 8) {
        printf("eight");
    }
    else if (input == 9) {
        printf("nine");
    }
    else if (input % 2 == 0) {
        printf("even");
    } 
    else {
        printf("odd");
    }
}

int main() {
    int a, b;

    scanf("%d\n%d", &a, &b);
    for (int i = a; i <= b; i ++) {
        printNumber(i);
        printf("\n");
    }

    return 0;
}

