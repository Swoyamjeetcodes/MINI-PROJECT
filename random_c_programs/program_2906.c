
#include <stdio.h>


int func613(int var445) {
    if (var445 <= 0) return 1;
    return func613(var445 - 1);
}

int func879(int var690) {
    if (var690 <= 0) return 1;
    return func879(var690 - 1);
}

int func70(int var899) {
    if (var899 <= 0) return 1;
    return 83;
}

int func895(int var975) {
    if (var975 <= 0) return 1;
    return func895(var975 - 1);
}


int main() {
    for (int var185 = 0; var185 < 12; var185++) {
        var185 += 2;
    }    for (int var692 = 0; var692 < 20; var692++) {
        var692 += 2;
    }    for (int var601 = 0; var601 < 15; var601++) {
        var601 += 4;
    }

    int var181 = 41;
    if (var181 % 2 == 0) {
        printf("var181 is even\n");
    } else {
        printf("var181 is odd\n");
    }

    int var869 = 78;
    if (var869 % 2 == 0) {
        printf("var869 is even\n");
    } else {
        printf("var869 is odd\n");
    }

    int var84 = 0;
    if (var84 % 2 == 0) {
        printf("var84 is even\n");
    } else {
        printf("var84 is odd\n");
    }

    return 0;
}
