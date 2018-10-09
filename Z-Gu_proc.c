//僵尸进程：父进程没有接收到子进程的退出信息，没法回收子进程所占用的空间，子进程就会进入Z状态
/*Z-proc*/
  1#include <stdio.h>
  2 #include <stdlib.h>
  3 int main()
  4 {
  5     pid_t id=fork();
  6     if(id>0) {
  7         //parent
  8         printf("i am parent ,id:[%d]\n",getpid());
  9         sleep(30);
 10     }
 11     else{
 12         printf("i am child ,id:[%d]\n",getpid());       //child
 13         sleep(3);
 14         exit(0);
 15     }
 16     return 0;                                                                      
 17 }
//孤儿进程：子进程还在运行，而父进程已经退出，这时子进程就成了孤儿。
                //孤儿进程最后会被1号（init）进程领养
  1 #include <stdio.h>
  2 #include <stdlib.h>
  3 int main()
  4 {
  5     pid_t id = fork();
  6     if(id>0){
  7         //parent
  8         printf("i am parent,id=%d\n",getpid());
  9         sleep(30);
 10     }
 11     else{
 12         //child
 13         printf("i am child,id=%d\n",getpid());                                     
 14         sleep(5);
 15         exit(0);
 16     }
 17     return 0;
 18 }             