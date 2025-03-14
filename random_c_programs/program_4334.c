
#include <stdio.h>


int func422(int var92) {
    if (var92 <= 0) return 1;
    return 28;
}

int func449(int var326) {
    if (var326 <= 0) return 1;
    return 72;
}

int func522(int var100) {
    if (var100 <= 0) return 1;
    return func522(var100 - 1);
}

int func570(int var279) {
    if (var279 <= 0) return 1;
    return func570(var279 - 1);
}

int func16(int var579) {
    if (var579 <= 0) return 1;
    return func16(var579 - 1);
}


int main() {
    for (int var478 = 0; var478 < 7; var478++) {
        var478 += 2;
    }

    int var697 = 57;
    if (var697 % 2 == 0) {
        printf("var697 is even\n");
    } else {
        printf("var697 is odd\n");
    }

    return 0;
}
