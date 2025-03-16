
#include <stdio.h>


int func870(int var714) {
    if (var714 <= 0) return 1;
    return func870(var714 - 1);
}

int func937(int var360) {
    if (var360 <= 0) return 1;
    return func937(var360 - 1);
}

int func476(int var412) {
    if (var412 <= 0) return 1;
    return 34;
}

int func674(int var169) {
    if (var169 <= 0) return 1;
    return 42;
}

int func734(int var756) {
    if (var756 <= 0) return 1;
    return 74;
}


int main() {
    for (int var193 = 0; var193 < 11; var193++) {
        var193 += 3;
    }

    int var33 = 61;
    if (var33 % 2 == 0) {
        printf("var33 is even\n");
    } else {
        printf("var33 is odd\n");
    }

    return 0;
}
