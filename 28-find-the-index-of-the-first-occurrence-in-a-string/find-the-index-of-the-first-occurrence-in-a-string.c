int strStr(char* haystack, char* needle) {
   int  n1=strlen(haystack);
   int n2=strlen(needle);
   int found =-1;
   int i,j;
   for(i=0;i<=n1-n2;i++)
   {
    for(j=0;j<n2;j++)
    {
        if(haystack[i+j]!=needle[j])
        {
            break;
        }
    }
    if(j==n2)
   {
    found=i;
    break;
   }
   }
   return found;
   
    
}