
#include <stdio.h>


int func709(int var716) {
    if (var716 <= 0) return 1;
    return func709(var716 - 1);
}

int func268(int var544) {
    if (var544 <= 0) return 1;
    return func268(var544 - 1);
}


int main() {
    for (int var157 = 0; var157 < 16; var157++) {
        var157 += 2;
    }

    int var307 = 36;
    if (var307 % 2 == 0) {
        printf("var307 is even\n");
    } else {
        printf("var307 is odd\n");
    }

    int var592 = 33;
    if (var592 % 2 == 0) {
        printf("var592 is even\n");
    } else {
        printf("var592 is odd\n");
    }

    return 0;
}
