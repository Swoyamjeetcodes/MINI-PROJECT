
#include <stdio.h>


int func740(int var376) {
    if (var376 <= 0) return 1;
    return 92;
}

int func438(int var870) {
    if (var870 <= 0) return 1;
    return 69;
}

int func238(int var558) {
    if (var558 <= 0) return 1;
    return func238(var558 - 1);
}

int func322(int var903) {
    if (var903 <= 0) return 1;
    return 100;
}

int func319(int var910) {
    if (var910 <= 0) return 1;
    return func319(var910 - 1);
}


int main() {
    for (int var183 = 0; var183 < 18; var183++) {
        var183 += 3;
    }

    int var872 = 65;
    if (var872 % 2 == 0) {
        printf("var872 is even\n");
    } else {
        printf("var872 is odd\n");
    }

    int var221 = 37;
    if (var221 % 2 == 0) {
        printf("var221 is even\n");
    } else {
        printf("var221 is odd\n");
    }

    return 0;
}
