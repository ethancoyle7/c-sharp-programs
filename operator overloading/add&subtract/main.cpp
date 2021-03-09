using System; //system is the namespace Console is our class

namespace MyOverloadingExample
{// declaring and defining a namespace
      
class Object //create class named object
//instances where private or public must be initialized throughout
{ 
      
    public int number = 0; //default number is 0
      
    // default constructor to take noarguments
    public Object() {} 
      
      
    // parameterized constructor assign number and n
    public Object(int n) 
    { 
        number = n; 
    } 
      
    // Overloading addition operator accept param num1,num2
    public static Object operator + (Object OverloadedNUM1,Object OverloadedNUM2) 
    { 
        Object OverloadedNUM3 = new Object(0); //allocate new memory for object
        OverloadedNUM3.number = OverloadedNUM2.number + OverloadedNUM1.number; 
        return OverloadedNUM3; //return num3

        // in each number called parameterize constructor
        // the get the number argument
    } 


    //sutraction overloading accept num3 and num2
       public static Object operator - (Object OverloadedNUM3,Object OverloadedNUM2)                    
    { 
        Object OverloadedNUM4 = new Object(0); 
        OverloadedNUM4.number = OverloadedNUM3.number - OverloadedNUM2.number; 
        return OverloadedNUM4; //return the calculated num4
    } 
    // function to display result 
    public void display() 
    {   
        // these are the console display commands
        //much like cout<< " " << number in C++
        //must include {0} which includes the parameter value for number
        Console.WriteLine("The Number is: {0}", number); 
    } 
} 
  
//class number overladed number for displaying overloaded noarguments
// this class has a function void of main that accepts arguments and 
//performs the necessary operations

class OverloadedNum 
{ 
      
    //main to display results
    //take in the string arguments
    static void Main(string[] args) //void main that doesnt change values
    { 
          
        Object NUM1 = new Object(50); //instance object 1
        Object NUM2 = new Object(100); //instance object 2
        Object NUM3 = new Object(200); //instance object 3
        Object NUM4= new Object();//empty object 4
        
          
        NUM4 = NUM1 + NUM2; //call the addition overload
          
        NUM1.display(); // 50
          
        NUM2.display(); // 100 
          
        NUM3.display(); // 200 is result

        NUM4= NUM3-NUM2;// call subtraction overload

        NUM4.display();//display result
          
    } 
  } 
} 
