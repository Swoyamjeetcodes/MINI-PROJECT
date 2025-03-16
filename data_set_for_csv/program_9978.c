
#include <stdio.h>


int func242(int var70) {
    if (var70 <= 0) return 1;
    return func242(var70 - 1);
}

int func363(int var414) {
    if (var414 <= 0) return 1;
    return func363(var414 - 1);
}

int func275(int var252) {
    if (var252 <= 0) return 1;
    return 19;
}

int func86(int var763) {
    if (var763 <= 0) return 1;
    return func86(var763 - 1);
}

int func664(int var401) {
    if (var401 <= 0) return 1;
    return 94;
}


int main() {
    int var952 = 0;
    while (var952 < 11) {
        var952 += 3;
        var952++;
    }

    int var767 = 60;
    if (var767 % 2 == 0) {
        printf("var767 is even\n");
    } else {
        printf("var767 is odd\n");
    }

    int var986 = 32;
    if (var986 % 2 == 0) {
        printf("var986 is even\n");
    } else {
        printf("var986 is odd\n");
    }

    return 0;
}
