char* convert(char* s, int numRows) 
{
 if(numRows==1)
 {
    return s;
 }    

 static char result[1000];
 int len = strlen(s);
 int index = 0;

 for(int row=0; row<numRows; row++)
 {
    int step1 = 2* (numRows - row- 1);
    int step2 = 2* row;
    int i = row;
    int toggle = 0;

    while(i<len)
    {
        result[index++] = s[i];

        if(row==0)
        {
                i += step2 + step1;
        }
        else if(row==numRows -1)
        {
            i += step1 + step2;
        }
        else
        {
            if(toggle==0)
            {
                i += step1;
                toggle = 1;
            }
            else
            {
                i += step2;
                toggle = 0;
            }
        }
    }
 }
 result[index] = '\0';
 return result;
}