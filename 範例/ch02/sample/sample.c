#include<stdio.h>
#include<stdlib.h>             	/* ��X�J�禡���Y�� */
#define MSG1 " ��    �B : "   	/* �{���� "��   �B : " �HMSG1�Ÿ����N */
#define MSG2 " �|    �� : "   	/* �{���� "�|   �� : " �HMSG2�Ÿ����N */
#define MSG3 " �t�|���B : "   	/* �{���� "�t�|���B : " �HMSG3�Ÿ����N */
#define TAX_RATE 0.05       	/* �{���� �|�v 5%=0.05 �HTAX_RATE�Ÿ����N */
int price=2000;   /* �ŧiprice������������ܼƨó]�w��� */

float get_tax(void);  /* �ŧiget_tax()���۩w�禡  */

int main(int argc, char *argv[])          /* �{���i�J�I */
{
  float total;    /* �ŧitotal�t�|���B���ϰ��ܼơA��ƫ��O���B�I�� */
  printf(" %s %d \n\n" , MSG1, price);  /* ��ܥ��|���B */  
  total = price + get_tax();        	 /* �N����[�|�� �s�Jtotal�ܼƤ� */
  printf(" %s %.2f \n\n" , MSG3, total); /* ��ܧt�|���B */
                  
  system("PAUSE");		          /* �Ȱ�����H�[�ݰ��浲�G */
  return 0;             	          /* �����{������ */
}

float get_tax()   	         /* �p��|�� */
{
  float tax;                /* �ŧitax�|�����ϰ��ܼơA��ƫ��O���B�I�� */
  tax=price*TAX_RATE;    /* �N������H�|�v�s�Jtax �ܼ� */
  printf(" %s %.2f \n" , MSG2, tax);  /* ��ܵ|�� */  
  return(tax);               /* �Ntax�|���Ǧ^main()�D�禡 �I�s�B*/
}

