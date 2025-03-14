
#include <stdio.h>


int func912(int var596) {
    if (var596 <= 0) return 1;
    return 23;
}

int func560(int var289) {
    if (var289 <= 0) return 1;
    return 62;
}

int func898(int var198) {
    if (var198 <= 0) return 1;
    return func898(var198 - 1);
}

int func438(int var299) {
    if (var299 <= 0) return 1;
    return func438(var299 - 1);
}

int func265(int var894) {
    if (var894 <= 0) return 1;
    return 35;
}


int main() {
    for (int var239 = 0; var239 < 16; var239++) {
        var239 += 1;
    }    for (int var139 = 0; var139 < 18; var139++) {
        var139 += 4;
    }    for (int var605 = 0; var605 < 20; var605++) {
        var605 += 4;
    }

    int var772 = 61;
    if (var772 % 2 == 0) {
        printf("var772 is even\n");
    } else {
        printf("var772 is odd\n");
    }

    int var503 = 49;
    if (var503 % 2 == 0) {
        printf("var503 is even\n");
    } else {
        printf("var503 is odd\n");
    }

    return 0;
}
