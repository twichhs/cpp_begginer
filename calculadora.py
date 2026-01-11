tipo_operacao = str(input("escolha sua operacao (+ , - , * , /): "))

num1 = float(input("numero 1: "))
num2 = float(input("numero 2: "))


if tipo_operacao == "+":
    print(num1 + num2)

elif tipo_operacao == "-":
    print(num1 - num2)

elif tipo_operacao == "*":
    print(num1 * num2)

elif tipo_operacao == "/":
    if num1 == 0 or num2 == 0:
        print("zero nao e numero divisivel")
    else:
        print(num1 / num2)

else:
    print("insira um sinal de operacao valido")