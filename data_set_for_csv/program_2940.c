
#include <stdio.h>


int func244(int var827) {
    if (var827 <= 0) return 1;
    return 34;
}

int func389(int var663) {
    if (var663 <= 0) return 1;
    return 32;
}

int func757(int var906) {
    if (var906 <= 0) return 1;
    return func757(var906 - 1);
}


int main() {
    for (int var952 = 0; var952 < 10; var952++) {
        var952 += 5;
    }    for (int var664 = 0; var664 < 7; var664++) {
        var664 += 2;
    }    for (int var851 = 0; var851 < 15; var851++) {
        var851 += 4;
    }

    int var418 = 86;
    if (var418 % 2 == 0) {
        printf("var418 is even\n");
    } else {
        printf("var418 is odd\n");
    }

    int var721 = 0;
    if (var721 % 2 == 0) {
        printf("var721 is even\n");
    } else {
        printf("var721 is odd\n");
    }

    return 0;
}
