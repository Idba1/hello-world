class Calculator:
    brand= 'casio m990'
    def add(self, num1,num2):
        add=num1+num2;
        return add
    def deduct(self, num1,num2):
        deduct=num1-num2;
        return deduct
    def mult(self, num1,num2):
        mult=num1*num2;
        return mult
    def divide(self, num1,num2):
        divide=num1/num2;
        return divide

calc =Calculator()
result1= calc.add(5,5)
print(result1)
result2= calc.deduct(5,5)
print(result2)
result3= calc.mult(5,5)
print(result3)
result4= calc.divide(5,5)
print(result4)