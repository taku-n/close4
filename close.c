#include <stdio.h>

void close(const double CLOSE[]);

void close(const double CLOSE[])
{
    char s[100];
    FILE* fp;

    fp = fopen("close.txt", "w+");

    snprintf(s, 100, "%p\n", (void *)CLOSE);
    fputs(s, fp);

    snprintf(s, 100, "%lf\n", CLOSE[0]);
    fputs(s, fp);
    snprintf(s, 100, "%lf\n", CLOSE[1]);
    fputs(s, fp);
    snprintf(s, 100, "%lf\n", CLOSE[2]);
    fputs(s, fp);
    snprintf(s, 100, "%lf\n", CLOSE[3]);
    fputs(s, fp);
    snprintf(s, 100, "%lf\n", CLOSE[4]);
    fputs(s, fp);
    snprintf(s, 100, "%lf\n", CLOSE[5]);
    fputs(s, fp);
    snprintf(s, 100, "%lf\n", CLOSE[6]);
    fputs(s, fp);
    snprintf(s, 100, "%lf\n", CLOSE[7]);
    fputs(s, fp);
    snprintf(s, 100, "%lf\n", CLOSE[8]);
    fputs(s, fp);
    snprintf(s, 100, "%lf\n", CLOSE[9]);
    fputs(s, fp);

    if (fclose(fp) == EOF) {
        return;
    }

    return;
}
