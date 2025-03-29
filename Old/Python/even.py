def even(start, n):
	li = []
	
	if(start%2!=0):
		start=start+1
	
	for i in range(n):
		li.append(start+2*i)
		
	return li

if __name__=='__main__':
	x = even(5, 7)
	print(x)
