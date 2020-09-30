/*程序填空，不要改变与输入输出有关的语句。
古希腊天文学家埃拉托色尼发现了一种找出不大于N的所有素数的算法。首先将2到N的所有整数写到一个表中，例如:N=20，应该写出下面的列表:
   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19  20
然后把第一个元素画圈，表示发现一个素数，依次检查后续元素，将是每个画圈元素倍数的数上×，表示该数不是素数。
执行完算法的第一步后，将得到素数2，而所有2的倍数将全被划掉，结果如下：
   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19  20
  ○      ×       ×      ×     ×      ×      ×      ×      ×      ×
接下来，重复上述操作，把第一个既没有被圈又没有画×的元素圈起来，然后把它的倍数全部画×。
在本例中，这次操作中将得到素数3，而所有3的倍数都被去掉。得下表：
   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19  20
  ○   ○  ×      ×     ×   × ×      ×      ×  ×  ×      ×      ×
最终，数组中所有元素不是画圈就是画×，如下所示：
   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19  20
  ○   ○  ×  ○  ×  ○  ×  × ×  ○  ×  ○  ×  ×  ×  ○  ×  ○  ×
所有被圈起来的数均是素数，而所有画×的数均是合数。这种得到素数的方法称为埃拉托色尼筛选法。
请编写一个程序，输入一个N，用埃拉托色尼筛选法产生2到N(包含N)之间的素数表。
输出使用语句：printf("%6d", i); 且每行输出10个素数。*/
#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
int main(void)
{int i,j,count,n;int a,b;
    int tag[1000];
    n = GetInteger();
    for(a=2;a<=n;a++){
    	tag[a]=0;
    }
    for(i=2;i<n;i++)
	{
	   if(tag[i]==0){for(j=i+1;j<=n;j++)	
	                   {
	                      
		                    if(tag[j]==0&&j%i==0)tag[j]=1;
                          
                       }
	                } 
	} 
    count = 0;
    for(i=2;i<n;i++)  
        if(tag[i] == 0) {
            printf("%6d", i); 
            count++;
            if (count%10==0) printf("\n");
        }
    if (count%10!=0) printf("\n"); 
}
