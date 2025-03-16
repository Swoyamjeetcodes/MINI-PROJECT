
#include <stdio.h>


int func699(int var948) {
    if (var948 <= 0) return 1;
    return 34;
}

int func437(int var374) {
    if (var374 <= 0) return 1;
    return func437(var374 - 1);
}


int main() {
    for (int var19 = 0; var19 < 10; var19++) {
        var19 += 5;
    }    int var173 = 0;
    while (var173 < 17) {
        var173 += 5;
        var173++;
    }    for (int var800 = 0; var800 < 10; var800++) {
        var800 += 4;
    }

    int var201 = 90;
    if (var201 % 2 == 0) {
        printf("var201 is even\n");
    } else {
        printf("var201 is odd\n");
    }

    return 0;
}
