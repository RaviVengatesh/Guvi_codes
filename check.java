import java.io.*;
import java.util.*;
public class check 
{
    
    public static void main(String args[])
    public char getMax(String word)
    {
        int i,x;
        int Count = 0;
        int max = 0;
        char maxCharacterChar = '.';

        char[] cArray = word.toCharArray();

        for(i =0; i < cArray.length; i++)
        {
            int characterASCII = (int)cArray[i];
            Count = 0;

            
            for(x = 0; x < cArray.length; x++)
            {
                if(characterASCII == (int)cArray[x])
                {
                    Count ++;
                    
                    if(Count > max)
                    {
                        max = Count;
                        maxCharacterChar = cArray[i];
                        System.out.println(i);
                    }
                }
            }
        }
        return maxCharacterChar;
    }
}
