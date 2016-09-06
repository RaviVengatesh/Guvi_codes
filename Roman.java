public class Roman
{
  public static void main (String[]args)
  {
	 System.out.println("Enter a Roman Number");
	 String numeral = ReadLib.readString(); 
	 String newNumeral = numeral.replace("XL", "XXXX"); 
	 String newNumeral2 = newNumeral.replace("XC", "LXXXX"); 
	 String newNumeral3 = newNumeral2.replace("CD", "CCCC"); 
	 String newNumeral4 = newNumeral3.replace("CM", "DCCCC"); 
	 String newNumeral5 = newNumeral4.replace("IV", "IIII"); 
	 String newNumeral6 = newNumeral5.replace("IX", "VIIII"); 
   
	 char roman = 0;
	 int length = newNumeral6.length(); 
	 int arabic = 0;
	
	 for (int n = 0; n< length; n++)
	 {
	  roman = newNumeral6.charAt(n);
	 
	  if ( roman == 'M')
		{
	   arabic+=1000;
		}
	   if ( roman == 'D')
		{
	   arabic+=500; 
	 
		}
	   if ( roman == 'C')
		{
	   arabic+=100; 
		}
	   if ( roman == 'L')
		{
	   arabic+=50; 
		}
	   if ( roman == 'X')
		{
	   arabic+=10; 
		}
	   if ( roman == 'V')
		{
	   arabic+=5; 
		}
	   if ( roman == 'I')
		{
	   arabic+=1; 
		}
	 }
	 System.out.println(arabic);
  }
} 
