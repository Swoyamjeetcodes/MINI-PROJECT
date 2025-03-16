
#include <stdio.h>


int func856(int var264) {
    if (var264 <= 0) return 1;
    return func856(var264 - 1);
}

int func213(int var651) {
    if (var651 <= 0) return 1;
    return 40;
}

int func394(int var826) {
    if (var826 <= 0) return 1;
    return func394(var826 - 1);
}


int main() {
    for (int var773 = 0; var773 < 6; var773++) {
        var773 += 2;
    }    for (int var173 = 0; var173 < 20; var173++) {
        var173 += 2;
    }    int var872 = 0;
    while (var872 < 13) {
        var872 += 3;
        var872++;
    }

    int var664 = 41;
    if (var664 % 2 == 0) {
        printf("var664 is even\n");
    } else {
        printf("var664 is odd\n");
    }

    int var620 = 80;
    if (var620 % 2 == 0) {
        printf("var620 is even\n");
    } else {
        printf("var620 is odd\n");
    }

    int var789 = 2;
    if (var789 % 2 == 0) {
        printf("var789 is even\n");
    } else {
        printf("var789 is odd\n");
    }

    return 0;
}
