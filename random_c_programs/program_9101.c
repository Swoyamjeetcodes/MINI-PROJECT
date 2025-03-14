
#include <stdio.h>


int func163(int var554) {
    if (var554 <= 0) return 1;
    return func163(var554 - 1);
}

int func421(int var394) {
    if (var394 <= 0) return 1;
    return func421(var394 - 1);
}

int func648(int var954) {
    if (var954 <= 0) return 1;
    return 78;
}

int func743(int var692) {
    if (var692 <= 0) return 1;
    return func743(var692 - 1);
}

int func614(int var723) {
    if (var723 <= 0) return 1;
    return 75;
}

int func753(int var977) {
    if (var977 <= 0) return 1;
    return func753(var977 - 1);
}


int main() {
    for (int var443 = 0; var443 < 17; var443++) {
        var443 += 2;
    }    int var529 = 0;
    while (var529 < 14) {
        var529 += 1;
        var529++;
    }    for (int var633 = 0; var633 < 13; var633++) {
        var633 += 2;
    }    for (int var346 = 0; var346 < 19; var346++) {
        var346 += 1;
    }    for (int var289 = 0; var289 < 18; var289++) {
        var289 += 5;
    }    int var896 = 0;
    while (var896 < 9) {
        var896 += 5;
        var896++;
    }

    int var28 = 8;
    if (var28 % 2 == 0) {
        printf("var28 is even\n");
    } else {
        printf("var28 is odd\n");
    }

    int var862 = 53;
    if (var862 % 2 == 0) {
        printf("var862 is even\n");
    } else {
        printf("var862 is odd\n");
    }

    return 0;
}
