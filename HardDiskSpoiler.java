import java.io.*;
public class Msc3
{
public static void main (String[] args)
{
int a=0;
while(a<10)
{
try 
{
PrintWriter b = null;
                
b = new PrintWriter("d:\\"+ a + ".txt");
                
b.write("Sorry..!! :P" + "\n Regards Hani");
}
 catch (FileNotFoundException ex) 
{
Logger.getLogger(NewJFrame.class.getName()).log(Level.SEVERE, null, ex);
}
}
}
}
