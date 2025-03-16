
#include <stdio.h>


int func367(int var450) {
    if (var450 <= 0) return 1;
    return 84;
}

int func868(int var829) {
    if (var829 <= 0) return 1;
    return 26;
}

int func871(int var349) {
    if (var349 <= 0) return 1;
    return 51;
}

int func238(int var127) {
    if (var127 <= 0) return 1;
    return func238(var127 - 1);
}

int func326(int var906) {
    if (var906 <= 0) return 1;
    return func326(var906 - 1);
}


int main() {
    for (int var223 = 0; var223 < 10; var223++) {
        var223 += 2;
    }    int var214 = 0;
    while (var214 < 16) {
        var214 += 1;
        var214++;
    }

    int var781 = 8;
    if (var781 % 2 == 0) {
        printf("var781 is even\n");
    } else {
        printf("var781 is odd\n");
    }

    int var11 = 83;
    if (var11 % 2 == 0) {
        printf("var11 is even\n");
    } else {
        printf("var11 is odd\n");
    }

    return 0;
}
