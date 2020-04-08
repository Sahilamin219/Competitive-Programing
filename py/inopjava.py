# Below is Pythone code for input/output 

import sys 
# For getting input from input.txt file 
sys.stdin = open('input.txt', 'r') 

# Printing the Output to output.txt file 
sys.stdout = open('output.txt', 'w') 


// Java program For handling Input/Output 
import java.io.*; 
class Main 
{ 
	public static void main(String[] args) throws IOException 
	{ 
		// BufferedReader Class for Fast buffer Input 
		BufferedReader br = new BufferedReader( 
							new FileReader("input.txt")); 

		// PrintWriter class prints formatted representations 
		// of objects to a text-output stream. 
		PrintWriter pw=new PrintWriter(new
				BufferedWriter(new FileWriter("output.txt"))); 

		// Your code goes Here 

		pw.flush(); 
	} 
} 
// Thanks to Saurabh Kumar Prajapati for providing this java Code 

