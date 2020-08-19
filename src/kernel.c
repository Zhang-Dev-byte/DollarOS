#include <conio.h>
#include <screen.h>
#include <kb.h>
kmain()
{
       clrscr();
       print("Welcome to DollarOS!\nPlease enter a command\n");
       while (1)
       {
                print("\nDOSSH> ");
                
                string ch = readstr();
                
                if(streql(ch,"dossh"))
                {
                        print("\nYou are already in dossh!\n");
                }
                else if(streql(ch,"cls"))
                {
                        clrscr();
                }
                
                else
                {
                        print("\nInvalid command!\n");
                }
                
                print("\n");        
       }
}
