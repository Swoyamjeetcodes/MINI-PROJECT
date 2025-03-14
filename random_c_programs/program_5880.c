
#include <stdio.h>


int func179(int var317) {
    if (var317 <= 0) return 1;
    return func179(var317 - 1);
}

int func589(int var175) {
    if (var175 <= 0) return 1;
    return func589(var175 - 1);
}

int func222(int var705) {
    if (var705 <= 0) return 1;
    return 66;
}

int func578(int var224) {
    if (var224 <= 0) return 1;
    return 97;
}


int main() {
    for (int var684 = 0; var684 < 17; var684++) {
        var684 += 3;
    }    for (int var913 = 0; var913 < 11; var913++) {
        var913 += 3;
    }

    int var902 = 10;
    if (var902 % 2 == 0) {
        printf("var902 is even\n");
    } else {
        printf("var902 is odd\n");
    }

    return 0;
}
