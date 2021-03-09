using System;  
  
class EthanCoyle
{ 
      
public static void Main()  
{  
    int i = 1, j = 2; 
      
    while (i < 5) 
    { 
        Console.WriteLine("Outer loop = {0}", i); 
        ++i; 
      
        while (j < 5) 
        { 
            Console.WriteLine("Inner loop = {0}", j); 
            ++j; 
        } 
    } 
}  
}
