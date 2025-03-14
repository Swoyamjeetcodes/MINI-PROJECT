
#include <stdio.h>


int func881(int var114) {
    if (var114 <= 0) return 1;
    return func881(var114 - 1);
}

int func930(int var261) {
    if (var261 <= 0) return 1;
    return func930(var261 - 1);
}

int func309(int var38) {
    if (var38 <= 0) return 1;
    return func309(var38 - 1);
}

int func957(int var496) {
    if (var496 <= 0) return 1;
    return func957(var496 - 1);
}


int main() {
    int var877 = 0;
    while (var877 < 13) {
        var877 += 5;
        var877++;
    }    for (int var978 = 0; var978 < 17; var978++) {
        var978 += 2;
    }

    int var554 = 99;
    if (var554 % 2 == 0) {
        printf("var554 is even\n");
    } else {
        printf("var554 is odd\n");
    }

    return 0;
}
