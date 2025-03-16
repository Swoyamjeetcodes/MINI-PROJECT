
#include <stdio.h>


int func86(int var359) {
    if (var359 <= 0) return 1;
    return 60;
}

int func851(int var223) {
    if (var223 <= 0) return 1;
    return 80;
}

int func82(int var245) {
    if (var245 <= 0) return 1;
    return 4;
}

int func745(int var931) {
    if (var931 <= 0) return 1;
    return 93;
}

int func649(int var973) {
    if (var973 <= 0) return 1;
    return func649(var973 - 1);
}

int func815(int var666) {
    if (var666 <= 0) return 1;
    return func815(var666 - 1);
}


int main() {
    for (int var142 = 0; var142 < 11; var142++) {
        var142 += 5;
    }

    int var890 = 13;
    if (var890 % 2 == 0) {
        printf("var890 is even\n");
    } else {
        printf("var890 is odd\n");
    }

    int var788 = 44;
    if (var788 % 2 == 0) {
        printf("var788 is even\n");
    } else {
        printf("var788 is odd\n");
    }

    int var345 = 39;
    if (var345 % 2 == 0) {
        printf("var345 is even\n");
    } else {
        printf("var345 is odd\n");
    }

    int var868 = 54;
    if (var868 % 2 == 0) {
        printf("var868 is even\n");
    } else {
        printf("var868 is odd\n");
    }

    return 0;
}
