
#include <stdio.h>


int func149(int var624) {
    if (var624 <= 0) return 1;
    return 40;
}

int func821(int var74) {
    if (var74 <= 0) return 1;
    return func821(var74 - 1);
}


int main() {
    int var59 = 0;
    while (var59 < 15) {
        var59 += 5;
        var59++;
    }    int var729 = 0;
    while (var729 < 8) {
        var729 += 2;
        var729++;
    }    int var832 = 0;
    while (var832 < 16) {
        var832 += 2;
        var832++;
    }

    int var795 = 77;
    if (var795 % 2 == 0) {
        printf("var795 is even\n");
    } else {
        printf("var795 is odd\n");
    }

    return 0;
}
