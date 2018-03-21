print ( "Ноль в качестве знака операции завершит работу программы" )
print ("* - конъюнкция, + - дизъюнкция, ! - отрицание, @ - импликация")
while True:
    s = input("Знак (+,*,!,@): ")
    if s== '0':
        break
    if s in ('+','!','*','@'):
        x = int(input('x='))
        y = int(input('y='))
        if s=='+':
            print("X V Y = ",int(bool(x) or bool(y)))
        elif s=='!':
            print("not X = ",int(not bool(x)))
            print("not Y = ",int(not bool(y)))
        elif s=='*':
            print("X & Y = ",int(bool(x)) and int(bool(y)))
        elif s=='@':
            print("X → Y = ",int(not bool(x)) or int(bool(y)))
    else:
        print('Неверный знак')