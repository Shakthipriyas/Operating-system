#include<stdio.h>
#include<unistd.h>
void main()
{
  printf("Process ID: %d\n", getpid());
  printf("Parent Process ID: %d\n", getpid() );

}
