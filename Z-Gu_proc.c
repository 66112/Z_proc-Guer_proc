//��ʬ���̣�������û�н��յ��ӽ��̵��˳���Ϣ��û�������ӽ�����ռ�õĿռ䣬�ӽ��̾ͻ����Z״̬
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
//�¶����̣��ӽ��̻������У����������Ѿ��˳�����ʱ�ӽ��̾ͳ��˹¶���
                //�¶��������ᱻ1�ţ�init����������
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