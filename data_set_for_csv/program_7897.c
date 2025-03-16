
#include <stdio.h>


int func132(int var723) {
    if (var723 <= 0) return 1;
    return 50;
}

int func903(int var579) {
    if (var579 <= 0) return 1;
    return func903(var579 - 1);
}

int func285(int var41) {
    if (var41 <= 0) return 1;
    return func285(var41 - 1);
}

int func889(int var62) {
    if (var62 <= 0) return 1;
    return 28;
}

int func397(int var678) {
    if (var678 <= 0) return 1;
    return func397(var678 - 1);
}

int func624(int var36) {
    if (var36 <= 0) return 1;
    return 46;
}

int func455(int var403) {
    if (var403 <= 0) return 1;
    return func455(var403 - 1);
}

int func848(int var450) {
    if (var450 <= 0) return 1;
    return 37;
}

int func312(int var46) {
    if (var46 <= 0) return 1;
    return func312(var46 - 1);
}


int main() {
    int var621 = 0;
    while (var621 < 16) {
        var621 += 2;
        var621++;
    }    for (int var202 = 0; var202 < 17; var202++) {
        var202 += 2;
    }    for (int var788 = 0; var788 < 5; var788++) {
        var788 += 2;
    }    int var758 = 0;
    while (var758 < 16) {
        var758 += 4;
        var758++;
    }    int var917 = 0;
    while (var917 < 12) {
        var917 += 4;
        var917++;
    }    for (int var397 = 0; var397 < 8; var397++) {
        var397 += 4;
    }

    int var577 = 13;
    if (var577 % 2 == 0) {
        printf("var577 is even\n");
    } else {
        printf("var577 is odd\n");
    }

    int var181 = 50;
    if (var181 % 2 == 0) {
        printf("var181 is even\n");
    } else {
        printf("var181 is odd\n");
    }

    int var17 = 34;
    if (var17 % 2 == 0) {
        printf("var17 is even\n");
    } else {
        printf("var17 is odd\n");
    }

    int var874 = 77;
    if (var874 % 2 == 0) {
        printf("var874 is even\n");
    } else {
        printf("var874 is odd\n");
    }

    return 0;
}
