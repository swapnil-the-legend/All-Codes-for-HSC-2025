#include <stdio.h>
int main() //Must be "int main()", "not main()".
{
    //Question 4
    int i1, s1=0;
    for(i1=1; i1<=6; i1++)
    {
        s1=s1+i1;
    }
    printf("Q4. Output = %d\n", s1);

    //Question 5
    int i2, s2=0;
    for(i2=4; i2<=6; i2=i2+2)
    {
        s2=s2+i2;
    }
    printf("Q5. Output = %d", s2);
}
