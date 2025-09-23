#include <cstdio>
int main(){
int c, cnt = 0;
while ((c = getchar())!= EOF)
    cnt++;
printf("Кол.символов = %d\n", cnt);
}

#include <cstdio>
int main(){
int c, cnt = 1;
while ((c = getchar())!= -1){
    if (c == '\n') cnt ++;
}
printf("Кол.строк = %d\n", cnt);
}

#include <cstdio>
int main(){
int c, cnt = 1;
while ((c = getchar())!= -1){
    if (c == '\n' || c == '\t' || c == ' ') cnt ++;
}
printf("Кол.строк = %d\n", cnt);
}