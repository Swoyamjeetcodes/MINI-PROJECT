
#include <stdio.h>


int func501(int var115) {
    if (var115 <= 0) return 1;
    return func501(var115 - 1);
}


int main() {
    int var739 = 0;
    while (var739 < 17) {
        var739 += 5;
        var739++;
    }    for (int var830 = 0; var830 < 11; var830++) {
        var830 += 3;
    }    for (int var648 = 0; var648 < 11; var648++) {
        var648 += 1;
    }

    int var857 = 12;
    if (var857 % 2 == 0) {
        printf("var857 is even\n");
    } else {
        printf("var857 is odd\n");
    }

    int var192 = 0;
    if (var192 % 2 == 0) {
        printf("var192 is even\n");
    } else {
        printf("var192 is odd\n");
    }

    int var252 = 8;
    if (var252 % 2 == 0) {
        printf("var252 is even\n");
    } else {
        printf("var252 is odd\n");
    }

    return 0;
}
