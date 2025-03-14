
#include <stdio.h>


int func919(int var309) {
    if (var309 <= 0) return 1;
    return func919(var309 - 1);
}

int func257(int var487) {
    if (var487 <= 0) return 1;
    return func257(var487 - 1);
}


int main() {
    int var190 = 0;
    while (var190 < 11) {
        var190 += 5;
        var190++;
    }    for (int var853 = 0; var853 < 6; var853++) {
        var853 += 1;
    }

    int var325 = 99;
    if (var325 % 2 == 0) {
        printf("var325 is even\n");
    } else {
        printf("var325 is odd\n");
    }

    int var571 = 63;
    if (var571 % 2 == 0) {
        printf("var571 is even\n");
    } else {
        printf("var571 is odd\n");
    }

    int var579 = 54;
    if (var579 % 2 == 0) {
        printf("var579 is even\n");
    } else {
        printf("var579 is odd\n");
    }

    return 0;
}
