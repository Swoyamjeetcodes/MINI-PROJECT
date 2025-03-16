
#include <stdio.h>


int func93(int var756) {
    if (var756 <= 0) return 1;
    return func93(var756 - 1);
}

int func442(int var779) {
    if (var779 <= 0) return 1;
    return func442(var779 - 1);
}

int func703(int var733) {
    if (var733 <= 0) return 1;
    return func703(var733 - 1);
}

int func352(int var385) {
    if (var385 <= 0) return 1;
    return 97;
}

int func216(int var269) {
    if (var269 <= 0) return 1;
    return func216(var269 - 1);
}


int main() {
    for (int var507 = 0; var507 < 12; var507++) {
        var507 += 4;
    }    int var415 = 0;
    while (var415 < 15) {
        var415 += 3;
        var415++;
    }

    int var347 = 70;
    if (var347 % 2 == 0) {
        printf("var347 is even\n");
    } else {
        printf("var347 is odd\n");
    }

    int var748 = 7;
    if (var748 % 2 == 0) {
        printf("var748 is even\n");
    } else {
        printf("var748 is odd\n");
    }

    return 0;
}
