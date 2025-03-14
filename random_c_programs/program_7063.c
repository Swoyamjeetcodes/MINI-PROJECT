
#include <stdio.h>


int func504(int var162) {
    if (var162 <= 0) return 1;
    return 20;
}

int func926(int var916) {
    if (var916 <= 0) return 1;
    return func926(var916 - 1);
}

int func327(int var529) {
    if (var529 <= 0) return 1;
    return func327(var529 - 1);
}

int func802(int var249) {
    if (var249 <= 0) return 1;
    return func802(var249 - 1);
}

int func956(int var656) {
    if (var656 <= 0) return 1;
    return func956(var656 - 1);
}


int main() {
    int var175 = 0;
    while (var175 < 10) {
        var175 += 1;
        var175++;
    }    for (int var637 = 0; var637 < 17; var637++) {
        var637 += 4;
    }    for (int var671 = 0; var671 < 13; var671++) {
        var671 += 2;
    }

    int var512 = 86;
    if (var512 % 2 == 0) {
        printf("var512 is even\n");
    } else {
        printf("var512 is odd\n");
    }

    int var227 = 41;
    if (var227 % 2 == 0) {
        printf("var227 is even\n");
    } else {
        printf("var227 is odd\n");
    }

    int var956 = 44;
    if (var956 % 2 == 0) {
        printf("var956 is even\n");
    } else {
        printf("var956 is odd\n");
    }

    return 0;
}
