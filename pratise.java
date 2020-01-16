// Java program to demonstrate 
// working of charAt() method 
class Gfg { 
	public static void main(String args[]) 
	{ 
		String s = "Welcome! to Geeksforgeeks Planet"; 

		char ch = s.charAt(3); 
		System.out.println(ch); 

		ch = s.charAt(0); 
		System.out.println(ch); 
	} 
} 
// Unique string
public static boolean isUniqueChars(String str) {
        int checker = 0;
        for (int i = 0; i < str.length(); ++i) {
            int val = str.charAt(i) - 'a';
            if ((checker & (1 << val)) > 0) 
                return false;
            checker |= (1 << val);
        }
        return true;
    }
