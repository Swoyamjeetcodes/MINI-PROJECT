
#include <stdio.h>


int func113(int var655) {
    if (var655 <= 0) return 1;
    return func113(var655 - 1);
}

int func568(int var932) {
    if (var932 <= 0) return 1;
    return func568(var932 - 1);
}

int func309(int var181) {
    if (var181 <= 0) return 1;
    return 54;
}

int func699(int var757) {
    if (var757 <= 0) return 1;
    return 51;
}

int func229(int var144) {
    if (var144 <= 0) return 1;
    return func229(var144 - 1);
}


int main() {
    for (int var174 = 0; var174 < 13; var174++) {
        var174 += 5;
    }    for (int var608 = 0; var608 < 6; var608++) {
        var608 += 3;
    }    for (int var385 = 0; var385 < 5; var385++) {
        var385 += 5;
    }

    int var956 = 76;
    if (var956 % 2 == 0) {
        printf("var956 is even\n");
    } else {
        printf("var956 is odd\n");
    }

    int var66 = 41;
    if (var66 % 2 == 0) {
        printf("var66 is even\n");
    } else {
        printf("var66 is odd\n");
    }

    int var984 = 10;
    if (var984 % 2 == 0) {
        printf("var984 is even\n");
    } else {
        printf("var984 is odd\n");
    }

    return 0;
}
