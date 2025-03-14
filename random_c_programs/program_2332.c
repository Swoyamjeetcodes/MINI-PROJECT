
#include <stdio.h>


int func546(int var722) {
    if (var722 <= 0) return 1;
    return 100;
}

int func243(int var853) {
    if (var853 <= 0) return 1;
    return func243(var853 - 1);
}


int main() {
    int var711 = 0;
    while (var711 < 10) {
        var711 += 2;
        var711++;
    }    for (int var401 = 0; var401 < 19; var401++) {
        var401 += 5;
    }

    int var579 = 27;
    if (var579 % 2 == 0) {
        printf("var579 is even\n");
    } else {
        printf("var579 is odd\n");
    }

    int var959 = 21;
    if (var959 % 2 == 0) {
        printf("var959 is even\n");
    } else {
        printf("var959 is odd\n");
    }

    int var742 = 53;
    if (var742 % 2 == 0) {
        printf("var742 is even\n");
    } else {
        printf("var742 is odd\n");
    }

    return 0;
}
