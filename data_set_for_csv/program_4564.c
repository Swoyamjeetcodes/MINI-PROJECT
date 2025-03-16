
#include <stdio.h>


int func972(int var198) {
    if (var198 <= 0) return 1;
    return func972(var198 - 1);
}

int func687(int var165) {
    if (var165 <= 0) return 1;
    return 52;
}

int func230(int var477) {
    if (var477 <= 0) return 1;
    return func230(var477 - 1);
}

int func866(int var33) {
    if (var33 <= 0) return 1;
    return 74;
}


int main() {
    for (int var418 = 0; var418 < 9; var418++) {
        var418 += 2;
    }    for (int var997 = 0; var997 < 12; var997++) {
        var997 += 1;
    }    int var275 = 0;
    while (var275 < 16) {
        var275 += 2;
        var275++;
    }

    int var224 = 97;
    if (var224 % 2 == 0) {
        printf("var224 is even\n");
    } else {
        printf("var224 is odd\n");
    }

    return 0;
}
