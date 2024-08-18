year = int(input("Enter the year :"))
if year % 100 == 0 :
	print("year is not leap year")
elif year % 4 == 0:
	print("year is leap year")
else:
	print("year is not leap year")
	