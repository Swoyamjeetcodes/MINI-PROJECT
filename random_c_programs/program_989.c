
#include <stdio.h>


int func968(int var341) {
    if (var341 <= 0) return 1;
    return 76;
}

int func784(int var770) {
    if (var770 <= 0) return 1;
    return func784(var770 - 1);
}

int func881(int var1) {
    if (var1 <= 0) return 1;
    return func881(var1 - 1);
}

int func163(int var875) {
    if (var875 <= 0) return 1;
    return 94;
}


int main() {
    int var808 = 0;
    while (var808 < 10) {
        var808 += 2;
        var808++;
    }    for (int var982 = 0; var982 < 9; var982++) {
        var982 += 4;
    }    int var907 = 0;
    while (var907 < 9) {
        var907 += 3;
        var907++;
    }

    int var717 = 20;
    if (var717 % 2 == 0) {
        printf("var717 is even\n");
    } else {
        printf("var717 is odd\n");
    }

    return 0;
}
