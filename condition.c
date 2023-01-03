#include <stdio.h>
#include <stdlib.h>
int main() {
  //資管二甲 C109118115余承彥
    int grade;
    START:
    printf("enter a grade 0~100:");
    scanf("%d", &grade);
printf(grade>=80?"GPA =A!\n":grade>=70?"GPA =B!\n":grade>=60?"GPA =C!\n":"Failed\n");
goto START;
}
