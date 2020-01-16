include <stdio.h>

int main()
{
    int testCases, f, s1, s2, q, i, currs1, currs2;
    
    scanf("%d", &testCases);
    
    while(testCases--)
    {
        scanf("%d %d %d", &f, &s1, &s2);
        
        scanf("%d", &q);
        
        for(i = 0; i < q; i++)
        {
            scanf("%d %d", &currs1, &currs2);
            
            if(f == 1 && (s1 == s2))
            {
                if(currs1 == currs2)
                    printf("ON\n");
                else
                    printf("OFF\n");
            }
            else if(f == 1 && (s1 != s2))
            {
                if(currs1 == currs2)
                    printf("OFF\n");
                else
                    printf("ON\n");
            }
            else if(f == 0 && (s1 == s2))
            {
                if(currs1 == currs2)
                    printf("OFF\n");
                else
                    printf("ON\n");
            }
  else if(f == 0 && (s1 != s2))
            {
                if(currs1 == currs2)
                    printf("ON\n");
                else
                    printf("OFF\n");
            }
        }
    }
	
	return 0;
}
