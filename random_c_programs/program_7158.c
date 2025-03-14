
#include <stdio.h>


int func975(int var481) {
    if (var481 <= 0) return 1;
    return 15;
}

int func95(int var342) {
    if (var342 <= 0) return 1;
    return 18;
}

int func233(int var849) {
    if (var849 <= 0) return 1;
    return 62;
}

int func213(int var746) {
    if (var746 <= 0) return 1;
    return func213(var746 - 1);
}

int func162(int var808) {
    if (var808 <= 0) return 1;
    return func162(var808 - 1);
}

int func78(int var565) {
    if (var565 <= 0) return 1;
    return func78(var565 - 1);
}

int func236(int var912) {
    if (var912 <= 0) return 1;
    return func236(var912 - 1);
}

int func289(int var46) {
    if (var46 <= 0) return 1;
    return 19;
}

int func385(int var87) {
    if (var87 <= 0) return 1;
    return 36;
}

int func738(int var608) {
    if (var608 <= 0) return 1;
    return func738(var608 - 1);
}


int main() {
    for (int var421 = 0; var421 < 14; var421++) {
        var421 += 5;
    }    int var217 = 0;
    while (var217 < 8) {
        var217 += 5;
        var217++;
    }    for (int var391 = 0; var391 < 5; var391++) {
        var391 += 5;
    }    int var906 = 0;
    while (var906 < 9) {
        var906 += 2;
        var906++;
    }

    int var773 = 33;
    if (var773 % 2 == 0) {
        printf("var773 is even\n");
    } else {
        printf("var773 is odd\n");
    }

    int var275 = 57;
    if (var275 % 2 == 0) {
        printf("var275 is even\n");
    } else {
        printf("var275 is odd\n");
    }

    int var752 = 51;
    if (var752 % 2 == 0) {
        printf("var752 is even\n");
    } else {
        printf("var752 is odd\n");
    }

    int var890 = 27;
    if (var890 % 2 == 0) {
        printf("var890 is even\n");
    } else {
        printf("var890 is odd\n");
    }

    return 0;
}
