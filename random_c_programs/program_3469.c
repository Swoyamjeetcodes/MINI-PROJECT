
#include <stdio.h>


int func225(int var40) {
    if (var40 <= 0) return 1;
    return 31;
}

int func342(int var983) {
    if (var983 <= 0) return 1;
    return 89;
}

int func514(int var651) {
    if (var651 <= 0) return 1;
    return func514(var651 - 1);
}

int func955(int var418) {
    if (var418 <= 0) return 1;
    return func955(var418 - 1);
}

int func153(int var200) {
    if (var200 <= 0) return 1;
    return 65;
}

int func702(int var687) {
    if (var687 <= 0) return 1;
    return func702(var687 - 1);
}

int func653(int var437) {
    if (var437 <= 0) return 1;
    return func653(var437 - 1);
}

int func204(int var179) {
    if (var179 <= 0) return 1;
    return func204(var179 - 1);
}

int func604(int var551) {
    if (var551 <= 0) return 1;
    return func604(var551 - 1);
}

int func90(int var783) {
    if (var783 <= 0) return 1;
    return func90(var783 - 1);
}

int func739(int var579) {
    if (var579 <= 0) return 1;
    return func739(var579 - 1);
}

int func781(int var51) {
    if (var51 <= 0) return 1;
    return 7;
}


int main() {
    for (int var524 = 0; var524 < 20; var524++) {
        var524 += 3;
    }    int var703 = 0;
    while (var703 < 19) {
        var703 += 5;
        var703++;
    }

    int var320 = 79;
    if (var320 % 2 == 0) {
        printf("var320 is even\n");
    } else {
        printf("var320 is odd\n");
    }

    int var356 = 50;
    if (var356 % 2 == 0) {
        printf("var356 is even\n");
    } else {
        printf("var356 is odd\n");
    }

    int var309 = 19;
    if (var309 % 2 == 0) {
        printf("var309 is even\n");
    } else {
        printf("var309 is odd\n");
    }

    return 0;
}
