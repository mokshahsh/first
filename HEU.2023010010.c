#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int f(int i,int *m,int *n){

	int j;
	int t;//设置一个数判断是否为质
	for(i=*m;i<*n;i++)
	{t=1;
	 for(j=2;j<i;j++)
	 {if(i%j==0)
	  {t=0;
	   break;//退出内层循环
	  } 
	 }
	if(t)
	{return i;
	}
	}
	
	
	}
	//3<m<n
int main(int argc, char *argv[]) {
	//判断是否为质数
	int m,n;
	scanf("%d,%d",&m,&n);
	
	int x,y;
	for( x=m;x<n;x++)
	{ for(y=x+2;y<n;y++)
	{if(f(x,m,n)&&f(y,m,n))
	    {printf("%d,%d\n",x);
	    break;
		}
	}
	  
	  
	}
	
	
	
	
	
	
	
	return 0;
}