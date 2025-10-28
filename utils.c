#include <stdio.h>
#include "utils.h"
#include "student.h"

void saveData(Student *list, int count) {
    FILE *fp = fopen("data.txt", "wb");
    if (!fp) return;
    fwrite(&count, sizeof(int), 1, fp);
    fwrite(list, sizeof(Student), count, fp);
    fclose(fp);
}

int loadData(Student *list) {
    FILE *fp = fopen("data.txt", "rb");
    if (!fp) return 0;
    int count;
    fread(&count, sizeof(int), 1, fp);
    fread(list, sizeof(Student), count, fp);
    fclose(fp);
    return count;
}
