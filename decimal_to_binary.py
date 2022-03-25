/* Algorithm to convert a decimal number to it's binary equivalent.
Hosted on Guthub by: optimus-p-ime
Tested on: Python IDLE Interpreter.
*/

num = int(input("Enter a number: "))
bin = 1
while(num!=0):
	bin = bin*10+num%2
	num /=2
num = bin
print("The equivalent binary number is:\n")
while(num!=1):
	print(int(num%10),end='')
	num = int(num/10)
