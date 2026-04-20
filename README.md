# Compund Interest Calculator
A simple compound interest calculator made using C. The program follows the universal formula used to calculate the Amount.

[A = P(1+ (r/n))^nt ]  
A - Amount
P - Principal
r - rate of interest (%)
n - number of times interest is compounded per year
t - time in years

How to compile
-----------------
Simply open VS code and import the project. Have Code Runner set up and the necessary C files set up in VS code to run without problem.

Enter the details that the program prompts you to enter and the program will calculate it in a second.

Installing C in Windows if not done
-------------------------------------
1. Go to msys2.org and download the application. After installation, open it and type the following - " pacman -S mingw-w64-ucrt-x86_64-gcc "
2. Check if install using " gcc --version ".
3. Go to msys2 folder on ur files explorer. Go to ucrt64 and copy the gcc location.
4. Go to Environment Variables and click path -> edit and paste the gcc location then and save.
5. Install Coderunners and other C extensions in VS code.