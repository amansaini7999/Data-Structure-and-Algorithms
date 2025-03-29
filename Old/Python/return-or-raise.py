def multiply(a, b, bound):
	if(a*b<=bound):
		return a*b
		
	s = f"Multiplication of {a} and {b} with bound {bound} not possible"
	
	raise ValueError(s)

if __name__=='__main__':
	t = int(input())
	
	for i in range(t):
		a = int(input())
		b = int(input())
		bound = int(input())
		
		try:
			product = multiply(a, b, bound)
			print(product)
			
		except ValueError as e:
			print("%s\n" %e)
