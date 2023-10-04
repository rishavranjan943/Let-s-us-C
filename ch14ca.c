#include<stdio.h>
int main()
{
    int threed[3][2][3] =
                        {
                            {
                                {3,2,0},
                                {4,7,8}
                            },
                            {
                                {9,1,0},
                                {6,4,8}
                            },
                            {
                                {7,5,7},
                                {3,5,7}
                            },
                        };
    printf("%d\n",threed[0][0][0]);
    printf("%d\n",threed[2][1][2]);
    return 0;
}