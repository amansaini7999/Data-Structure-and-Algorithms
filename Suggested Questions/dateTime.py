from datetime import datetime
str = "January 01, 2007 12:00"
li = str.split(" ")
str = li[0][:3] + " " + li[1][:-1] + " " + li[2] + " " + li[3]

def yearProgress(currentDate):
    # Write your code here
    date = datetime.strptime(currentDate, '%b %d %Y %I:%M')
    #date=datetime.strptime(currentDate, "%b %d, %Y %I:%M")
    month_name = date.month
    #month_number=datetime.strptime(month_name, '%B').month
    elapsedtime= ((month_name)*(date.day)*24*60)
    if((date.year)%400):
        totaltime= 366*24*60
    else:
        totaltime= 365*24*60
    return (elapsedtime/totaltime)*100

print(yearProgress(str))



'''a = datetime(2007, 1, 1, 12, 00)
b = datetime(2007, 11, 30, 23, 45)

print(a.date().month)

print(a)
print(b)

t = b-a;

print(t)
print(t.days*24*60*60+t.seconds)

print(a)
'''
