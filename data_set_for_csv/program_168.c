
#include <stdio.h>


int func621(int var61) {
    if (var61 <= 0) return 1;
    return 29;
}

int func881(int var175) {
    if (var175 <= 0) return 1;
    return func881(var175 - 1);
}


int main() {
    for (int var562 = 0; var562 < 20; var562++) {
        var562 += 4;
    }    for (int var173 = 0; var173 < 11; var173++) {
        var173 += 5;
    }    int var849 = 0;
    while (var849 < 15) {
        var849 += 1;
        var849++;
    }

    int var693 = 90;
    if (var693 % 2 == 0) {
        printf("var693 is even\n");
    } else {
        printf("var693 is odd\n");
    }

    int var891 = 85;
    if (var891 % 2 == 0) {
        printf("var891 is even\n");
    } else {
        printf("var891 is odd\n");
    }

    int var521 = 48;
    if (var521 % 2 == 0) {
        printf("var521 is even\n");
    } else {
        printf("var521 is odd\n");
    }

    return 0;
}
