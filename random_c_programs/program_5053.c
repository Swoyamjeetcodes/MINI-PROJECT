
#include <stdio.h>


int func429(int var97) {
    if (var97 <= 0) return 1;
    return 23;
}

int func913(int var604) {
    if (var604 <= 0) return 1;
    return func913(var604 - 1);
}


int main() {
    int var386 = 0;
    while (var386 < 19) {
        var386 += 1;
        var386++;
    }    for (int var492 = 0; var492 < 15; var492++) {
        var492 += 2;
    }    for (int var366 = 0; var366 < 20; var366++) {
        var366 += 5;
    }

    int var271 = 4;
    if (var271 % 2 == 0) {
        printf("var271 is even\n");
    } else {
        printf("var271 is odd\n");
    }

    return 0;
}
