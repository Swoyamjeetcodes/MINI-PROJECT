
#include <stdio.h>


int func315(int var208) {
    if (var208 <= 0) return 1;
    return 48;
}

int func796(int var387) {
    if (var387 <= 0) return 1;
    return 47;
}

int func504(int var927) {
    if (var927 <= 0) return 1;
    return func504(var927 - 1);
}

int func744(int var936) {
    if (var936 <= 0) return 1;
    return func744(var936 - 1);
}

int func501(int var173) {
    if (var173 <= 0) return 1;
    return 71;
}

int func635(int var700) {
    if (var700 <= 0) return 1;
    return func635(var700 - 1);
}

int func405(int var939) {
    if (var939 <= 0) return 1;
    return func405(var939 - 1);
}

int func784(int var910) {
    if (var910 <= 0) return 1;
    return func784(var910 - 1);
}

int func865(int var290) {
    if (var290 <= 0) return 1;
    return func865(var290 - 1);
}


int main() {
    int var648 = 0;
    while (var648 < 7) {
        var648 += 3;
        var648++;
    }    for (int var928 = 0; var928 < 13; var928++) {
        var928 += 3;
    }    int var49 = 0;
    while (var49 < 19) {
        var49 += 3;
        var49++;
    }    for (int var496 = 0; var496 < 15; var496++) {
        var496 += 2;
    }    for (int var85 = 0; var85 < 11; var85++) {
        var85 += 2;
    }

    int var863 = 10;
    if (var863 % 2 == 0) {
        printf("var863 is even\n");
    } else {
        printf("var863 is odd\n");
    }

    int var1000 = 28;
    if (var1000 % 2 == 0) {
        printf("var1000 is even\n");
    } else {
        printf("var1000 is odd\n");
    }

    return 0;
}
