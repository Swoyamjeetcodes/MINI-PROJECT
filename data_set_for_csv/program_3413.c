
#include <stdio.h>


int func84(int var861) {
    if (var861 <= 0) return 1;
    return 14;
}

int func564(int var255) {
    if (var255 <= 0) return 1;
    return 25;
}

int func757(int var982) {
    if (var982 <= 0) return 1;
    return 52;
}

int func785(int var954) {
    if (var954 <= 0) return 1;
    return 40;
}

int func107(int var416) {
    if (var416 <= 0) return 1;
    return 11;
}

int func288(int var564) {
    if (var564 <= 0) return 1;
    return func288(var564 - 1);
}

int func54(int var953) {
    if (var953 <= 0) return 1;
    return func54(var953 - 1);
}

int func618(int var948) {
    if (var948 <= 0) return 1;
    return func618(var948 - 1);
}


int main() {
    int var1000 = 0;
    while (var1000 < 18) {
        var1000 += 2;
        var1000++;
    }    for (int var64 = 0; var64 < 19; var64++) {
        var64 += 3;
    }    int var729 = 0;
    while (var729 < 13) {
        var729 += 4;
        var729++;
    }

    int var171 = 20;
    if (var171 % 2 == 0) {
        printf("var171 is even\n");
    } else {
        printf("var171 is odd\n");
    }

    int var58 = 49;
    if (var58 % 2 == 0) {
        printf("var58 is even\n");
    } else {
        printf("var58 is odd\n");
    }

    int var221 = 10;
    if (var221 % 2 == 0) {
        printf("var221 is even\n");
    } else {
        printf("var221 is odd\n");
    }

    int var462 = 51;
    if (var462 % 2 == 0) {
        printf("var462 is even\n");
    } else {
        printf("var462 is odd\n");
    }

    int var491 = 69;
    if (var491 % 2 == 0) {
        printf("var491 is even\n");
    } else {
        printf("var491 is odd\n");
    }

    return 0;
}
