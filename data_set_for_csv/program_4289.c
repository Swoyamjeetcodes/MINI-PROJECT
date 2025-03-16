
#include <stdio.h>


int func82(int var914) {
    if (var914 <= 0) return 1;
    return 50;
}

int func625(int var958) {
    if (var958 <= 0) return 1;
    return func625(var958 - 1);
}

int func481(int var192) {
    if (var192 <= 0) return 1;
    return func481(var192 - 1);
}

int func971(int var150) {
    if (var150 <= 0) return 1;
    return 78;
}


int main() {
    int var795 = 0;
    while (var795 < 19) {
        var795 += 4;
        var795++;
    }    int var73 = 0;
    while (var73 < 20) {
        var73 += 2;
        var73++;
    }    for (int var260 = 0; var260 < 18; var260++) {
        var260 += 4;
    }

    int var994 = 1;
    if (var994 % 2 == 0) {
        printf("var994 is even\n");
    } else {
        printf("var994 is odd\n");
    }

    int var993 = 10;
    if (var993 % 2 == 0) {
        printf("var993 is even\n");
    } else {
        printf("var993 is odd\n");
    }

    return 0;
}
