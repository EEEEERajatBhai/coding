mass = float(input("enter your mass(in kg):"))
height = float(input("enter your height(in centimeters):"))
mheight =height/100
BMI = mass/(mheight*mheight)

if BMI <19 :
	print("kupashit or underweight")

elif BMI > 25:
	print("jadiyo or overweight")
else:
	print("bhai tu heathy hai")