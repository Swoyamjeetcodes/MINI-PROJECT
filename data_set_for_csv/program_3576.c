
#include <stdio.h>


int func926(int var412) {
    if (var412 <= 0) return 1;
    return func926(var412 - 1);
}

int func737(int var869) {
    if (var869 <= 0) return 1;
    return func737(var869 - 1);
}

int func408(int var145) {
    if (var145 <= 0) return 1;
    return func408(var145 - 1);
}

int func918(int var317) {
    if (var317 <= 0) return 1;
    return func918(var317 - 1);
}

int func597(int var159) {
    if (var159 <= 0) return 1;
    return 57;
}

int func942(int var596) {
    if (var596 <= 0) return 1;
    return func942(var596 - 1);
}

int func482(int var872) {
    if (var872 <= 0) return 1;
    return func482(var872 - 1);
}


int main() {
    for (int var997 = 0; var997 < 15; var997++) {
        var997 += 4;
    }    for (int var401 = 0; var401 < 10; var401++) {
        var401 += 4;
    }    for (int var521 = 0; var521 < 6; var521++) {
        var521 += 1;
    }    int var675 = 0;
    while (var675 < 19) {
        var675 += 5;
        var675++;
    }    int var618 = 0;
    while (var618 < 15) {
        var618 += 4;
        var618++;
    }

    int var835 = 15;
    if (var835 % 2 == 0) {
        printf("var835 is even\n");
    } else {
        printf("var835 is odd\n");
    }

    int var212 = 74;
    if (var212 % 2 == 0) {
        printf("var212 is even\n");
    } else {
        printf("var212 is odd\n");
    }

    return 0;
}
