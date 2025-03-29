import math

def solution(area):
	# Your code here
    while(area>0):
        print(int(math.sqrt(area))*int(math.sqrt(area)), end=',')
        area=area-(int(math.sqrt(area))*int(math.sqrt(area)))
        
solution(15324)
